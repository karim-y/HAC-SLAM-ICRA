using System;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using Pcl2Msg = RosMessageTypes.Sensor.PointCloud2Msg;
using System.Linq;
using Microsoft.MixedReality.Toolkit.UI;

public class MergedVoxelDisplay : MonoBehaviour
{
    public GameObject Cubes; // Used to instantiate cubes
    public RosSubscriberExample rosSubscriber = new RosSubscriberExample(); // Instance of RosSubscriberExample to access incoming pointclouds
    [NonSerialized] // No idea what this does but too lazy to look it up and too afraid to remove it
    public float x, y, z, rx, ry, rz = 0; // Positional and Rotational coordinates of points/voxels
    public Material cubeMaterial; // Material to be applied to the cubes

    private GameObject CreatedCube; // Voxel type to be used
    private bool once = true; // Flag to perform an opperation only once

    private List<GameObject> activeMeshObjects = new List<GameObject>(); // List used for storing active mesh objects
    public Camera MainBoyCamera; // Player camera
    private bool start_frustum = false; // Flag to start frustum culling

    private Vector3[] sortedPoints;

    private bool localizing = false;
    private ObjectManipulator ObjectManipulatorComponent;

    private void Awake()
    {
        MainBoyCamera.farClipPlane = 15f;
        SortPointCloudOnce(rosSubscriber.incomingPointCloudLive);
    }

    // Used for sorting the points based on their X coord to be able to section the map easier
    private void SortPointCloudOnce(Pcl2Msg pointcloud)
    {
        sortedPoints = new Vector3[pointcloud.width];

        for (int index = 0; index < pointcloud.width; index++)
        {
            int temp = index * Mathf.RoundToInt(pointcloud.point_step);
            Vector3 point = new Vector3(
                BitConverter.ToSingle(pointcloud.data, temp),
                BitConverter.ToSingle(pointcloud.data, temp + 8),
                BitConverter.ToSingle(pointcloud.data, temp + 4)
            );

            sortedPoints[index] = point;
        }

        // Sort the points based on X-coordinate in place, since I am trying to save memory
        Array.Sort(sortedPoints, (a, b) => a.x.CompareTo(b.x));
    }

    // Update is called once per frame
    private void Update()
    {
        // Set voxel coordinates to point coordinates
        x = (float)rosSubscriber.x;
        y = (float)rosSubscriber.y;
        z = (float)rosSubscriber.z;
        rx = (float)rosSubscriber.rx;
        ry = (float)rosSubscriber.ry;
        rz = (float)rosSubscriber.rz;

        if (start_frustum)
        {
            // Check frustum culling for each active mesh object
            foreach (GameObject meshObject in activeMeshObjects.ToList())
            {
                if (!IsInFrustum(meshObject, MainBoyCamera))
                {
                    // Object is outside the frustum, so remove it from the list and destroy it
                    Debug.Log($"{meshObject.name} is outside the frustum. Culling...");
                    meshObject.SetActive(false);
                }
                else
                {
                    meshObject.SetActive(true);
                }
            }
        }
    }

    // Could use a more cosistent way but is okay for now
    bool IsInFrustum(GameObject obj, Camera camera)
    {
        Renderer renderer = obj.GetComponent<Renderer>();

        if (renderer != null)
        {
            bool isInFrustum = GeometryUtility.TestPlanesAABB(GeometryUtility.CalculateFrustumPlanes(camera), renderer.bounds);

            // Draw gizmo to visualize frustum culling
            if (!isInFrustum)
            {
                #if UNITY_EDITOR
                Gizmos.color = Color.red;
                Gizmos.matrix = camera.transform.localToWorldMatrix;
                Gizmos.DrawWireCube(renderer.bounds.center, renderer.bounds.size);
                #endif
            }

            return isInFrustum;
        }

        return true;
    }

    // Display voxels for merged map during mapping phase
    public void ShowMergedMap()
    {
        FillIncoming(rosSubscriber.incomingPointCloudLive, cubeMaterial);
    }

    // Display voxels for merged map during re-init phase
    public void LoadPrevMap()
    {
        if (rosSubscriber.previousPointCloud != null && rosSubscriber.previousPointCloudReceived)
        {
            Debug.Log("Previous point cloud is ready. Filling incoming.");
            FillIncoming(rosSubscriber.previousPointCloud, cubeMaterial);
        }
        else
        {
            Debug.Log("Previous point cloud not ready yet.");
            StartCoroutine(RetryLoadPrevMap(5));
        }
    }

    // Fills the map with the incoming pointcloud and takes care of the mesh combination process and the sectioning
    void FillIncoming(Pcl2Msg pointcloud, Material cubeMaterial)
    {
        Clean();

        int numMeshesX = 10;
        int numMeshesY = 10;
        int numMeshesZ = 10;

        // Sort points based on X-coordinate
        Vector3[] sortedPointsX = SortPointsByX(pointcloud);

        // Calculate points per mesh in X direction
        int pointsPerMeshX = Mathf.CeilToInt(sortedPointsX.Length / (float)numMeshesX);

        for (int meshIndexX = 0; meshIndexX < numMeshesX; meshIndexX++)
        {
            int startX = meshIndexX * pointsPerMeshX;
            int endX = Mathf.Min((meshIndexX + 1) * pointsPerMeshX, sortedPointsX.Length);

            Vector3[] cubePosesX = new Vector3[endX - startX];
            Array.Copy(sortedPointsX, startX, cubePosesX, 0, endX - startX);

            // Sort points based on Y-coordinate within the X-slice
            Array.Sort(cubePosesX, (a, b) => a.y.CompareTo(b.y));

            // Calculate points per mesh in Y direction
            int pointsPerMeshY = Mathf.CeilToInt(cubePosesX.Length / (float)numMeshesY);

            for (int meshIndexY = 0; meshIndexY < numMeshesY; meshIndexY++)
            {
                int startY = meshIndexY * pointsPerMeshY;
                int endY = Mathf.Min((meshIndexY + 1) * pointsPerMeshY, cubePosesX.Length);

                Vector3[] cubePosesY = new Vector3[endY - startY];
                Array.Copy(cubePosesX, startY, cubePosesY, 0, endY - startY);

                // Sort points based on Z-coordinate within the X-Y slice
                Array.Sort(cubePosesY, (a, b) => a.z.CompareTo(b.z));

                // Calculate points per mesh in Z direction
                int pointsPerMeshZ = Mathf.CeilToInt(cubePosesY.Length / (float)numMeshesZ); // cubePosesY is interchangable with Z since same method would be used

                for (int meshIndexZ = 0; meshIndexZ < numMeshesZ; meshIndexZ++)
                {
                    int startZ = meshIndexZ * pointsPerMeshZ;
                    int endZ = Mathf.Min((meshIndexZ + 1) * pointsPerMeshZ, cubePosesY.Length);

                    Vector3[] cubePosesZ = new Vector3[endZ - startZ];
                    Array.Copy(cubePosesY, startZ, cubePosesZ, 0, endZ - startZ);

                    // Create a GameObject for each mesh
                    GameObject mergedMeshObject = new GameObject($"MergedMeshObject_{meshIndexX}_{meshIndexY}_{meshIndexZ}");

                    // Create a single mesh for each set of cubes
                    Mesh combinedMesh = CombineCubeMeshes(cubePosesZ, mergedMeshObject);

                    // Add a MeshFilter component and assign the combined mesh
                    MeshFilter meshFilter = mergedMeshObject.AddComponent<MeshFilter>();
                    meshFilter.mesh = combinedMesh;

                    // Add a MeshRenderer component
                    MeshRenderer meshRenderer = mergedMeshObject.AddComponent<MeshRenderer>();
                    meshRenderer.sharedMaterial = cubeMaterial; // Assign a material

                    // Add a MeshCollider component for grabbing
                    MeshCollider meshCollider = mergedMeshObject.AddComponent<MeshCollider>();
                    meshCollider.sharedMesh = combinedMesh;

                    // Set the parent of the merged mesh to the same parent as the original cubes
                    mergedMeshObject.transform.SetParent(this.gameObject.transform, false);
                }
            }
        }
        start_frustum = true;
    }

    // Clean up the displayed voxels
    public void Clean()
    {
        if (this.gameObject.transform.childCount > 0)
        {
            for (int i = 0; i < this.gameObject.transform.childCount; i++)
            {
                DestroyImmediate(this.gameObject.transform.GetChild(i).gameObject);
            }
        }
    }

    Mesh CombineCubeMeshes(Vector3[] cubePoses, GameObject mergedMeshObject)
    {
        GameObject cube = Instantiate(Cubes, Vector3.zero, Quaternion.identity);
        Mesh cubeMesh = cube.GetComponent<MeshFilter>().sharedMesh;

        Mesh combinedMesh = new Mesh();
        combinedMesh.indexFormat = UnityEngine.Rendering.IndexFormat.UInt32;

        List<CombineInstance> combineList = new List<CombineInstance>();

        for (int i = 0; i < cubePoses.Length; i++)
        {
            cube.transform.position = cubePoses[i];

            CombineInstance combineInstance = new CombineInstance
            {
                mesh = cubeMesh,
                transform = cube.transform.localToWorldMatrix
            };

            combineList.Add(combineInstance);
        }

        combinedMesh.CombineMeshes(combineList.ToArray(), true, true);

        Destroy(cube); // Destroy the original cube GameObject

        combinedMesh.name = "MergedMapMesh";

        #if UNITY_EDITOR
        var flags = StaticEditorFlags.BatchingStatic |
            StaticEditorFlags.NavigationStatic |
            StaticEditorFlags.OffMeshLinkGeneration |
            StaticEditorFlags.OccludeeStatic |
            StaticEditorFlags.OccluderStatic |
            StaticEditorFlags.OffMeshLinkGeneration |
            StaticEditorFlags.ReflectionProbeStatic |
            StaticEditorFlags.OffMeshLinkGeneration |
            StaticEditorFlags.ContributeGI;

        GameObjectUtility.SetStaticEditorFlags(mergedMeshObject, flags);
        #endif

        return combinedMesh;
    }

    Vector3[] SortPointsByX(Pcl2Msg pointcloud)
    {
        Vector3[] sortedPoints = new Vector3[pointcloud.width];

        for (int index = 0; index < pointcloud.width; index++)
        {
            int temp = index * Mathf.RoundToInt(pointcloud.point_step);
            Vector3 point = new Vector3(
                BitConverter.ToSingle(pointcloud.data, temp),
                BitConverter.ToSingle(pointcloud.data, temp + 8),
                BitConverter.ToSingle(pointcloud.data, temp + 4)
            );

            sortedPoints[index] = point;
        }

        // Sort the points based on X-coordinate in place
        Array.Sort(sortedPoints, (a, b) => a.x.CompareTo(b.x));

        return sortedPoints;
    }

    // Insurance (not paid!) function to make sure message is received before calling the FillIncoming function
    private IEnumerator RetryLoadPrevMap(int retryCount)
    {
        int retry = 0;
        while (retry < retryCount)
        {
            if (rosSubscriber.previousPointCloud != null && rosSubscriber.previousPointCloudReceived)
            {
                Debug.Log("Previous point cloud is ready. Filling incoming after retry.");
                FillIncoming(rosSubscriber.previousPointCloud, cubeMaterial);
                yield break;
            }

            Debug.Log($"Retry {retry + 1}... Waiting for data.");
            yield return new WaitForSeconds(3);
            retry++;
        }

        Debug.Log("Retry limit reached. Could not load the previous map.");
    }

    public void MapController()
    {
        ObjectManipulatorComponent = this.GetComponent<ObjectManipulator>();

        try
        {

            if (localizing == false)
            {
                localizing = true;
                ObjectManipulatorComponent.enabled = true;
            }
            else
            {
                localizing = false;
                if (ObjectManipulatorComponent != null)
                {
                    ObjectManipulatorComponent.enabled = false;
                }
            }
        }
        catch (System.Exception e)
        {
            Debug.LogWarning("An error occurred while setting Rigidbody properties: " + e.Message);
        }
    }
}
