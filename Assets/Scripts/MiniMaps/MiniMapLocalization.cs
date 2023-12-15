using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using Microsoft.MixedReality.Toolkit.UI;
using Pcl2Msg = RosMessageTypes.Sensor.PointCloud2Msg;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.UI.BoundsControl;

public class MiniMapLocalization : MonoBehaviour
{
    public RosSubscriberExample rosSubscriber; // Duh
    public RosPublisherExample rosPublisher; // Duh
    public GameObject Voxels_in; // Voxel prefab used to build minmap
    public BoxCollider box; // Box collider of the minimap
    public GameObject GoogleGuy; // Google guy object
    public Material cubeMaterial; // Material for the voxel
    public Vector3 FinalGuyPosition; // You could probably remove this later without having to allocate memory to it and passing it immediatly
    public bool isLocalizing = true; // Switch for localization
    public Vector3 PivotLocation; // Pivot location for later sim use
    private ObjectManipulator ObjectManipulatorComponent; // Object manipulator component of map
    private ConstraintManager ConstraintManagerComponent; // Constraint manager component of map
    private RotationAxisConstraint RotationConstraintComponent; // Rotation constraint component of map
    private BoundsControl BoundsControlComponent; // Bounds control component of map
    private NearInteractionGrabbable NearInteractionGrabComponent; // Near interaction grab component of map
    private GameObject GG_maps; // Reference to GoogleBuy object
    private GameObject Voxels_out; // Reference to the voxel prefab
    private GameObject LocMapPivot; // Empty game object to be set as pivot
    private Vector3 min, max, zeros; // To update the minimap size as it grows
    private Vector3 ShiftLocation; // Shift needed to get minimap back to origin of world
    private bool isMapVisible = true; // Switch for map visibility
    private bool GoogleMapsGuyPlaced = false; // Switch for Google guy placement
    private bool MapMoveEnabled = false; // Honestly all the bool variables are self explanatory :O

    // Start is called before the first frame update
    void Start()
    {
        min = new Vector3(1f, 1f, 1f);
        zeros = new Vector3(0f, 0f, 0f);
        isLocalizing = true;
    }

    // Update is called once per frame
    void Update()
    {
        box.size = max * 2 + min;

        // Continuously update the location of google guy to the current one the minimap repere orthogonal (forgot the name in english)
        if (GG_maps != null && GoogleMapsGuyPlaced)
        {
            FinalGuyPosition = GG_maps.transform.position;
        }
    }

    // Flag set when button pressed
    public void IamLocalizinglol()
    {
        isLocalizing = true;
    }

    // Function called when button pressed
    public void ShowIncomingMap()
    {
        if (isMapVisible)
        {
            Clean();
            LoadMinimapLocalization();
        }
        else
        {
            Clean();
        }
    }

    // Function to toggle map visibility
    public void ToggleMapVisibility()
    {
        isMapVisible = !isMapVisible; // Toggle visibility state
        ShowIncomingMap(); // Call the method to show/hide the map
    }

    // Clean game object from all children
    public void Clean()
    {
        if (this.gameObject.transform.childCount > 1)
        {
            for (int i = 0; i < this.gameObject.transform.childCount - 1; i++)
            {
                Destroy(this.gameObject.transform.GetChild(i).gameObject);
            }
        }
        max = zeros;
    }
    
    // Load Minimap for Localization
    public void LoadMinimapLocalization()
    {
        if (rosSubscriber.previousPointCloud != null && rosSubscriber.previousPointCloudReceived)
        {
            Debug.Log("MiniMap Localization PointCloud Received, Filling...");
            FillIncoming(rosSubscriber.previousPointCloud);
            ShiftMinimapBackToWorldOrigin();
        }
        else
        {
            Debug.Log("Not ready yet lol");
            StartCoroutine(RetryLoadMiniMap(5));
        }
    }

    // Fills the mimimap representing the hololens with it's voxels
    public void FillIncoming(Pcl2Msg pointcloud)
    {
        // Number of meshes in each direction
        int numMeshesX = 10;
        int numMeshesY = 10;
        int numMeshesZ = 10;

        // Google Guy Position
        float voxel_x = 1f;
        float voxel_y = 0f;
        float voxel_z = 1f;

        // Instantiate empty game object to be set as pivot
        LocMapPivot = new GameObject("LocalizationMapPivot");

        // Add box collider to pivot for grabbing since dependency (the mesh collider is generated with the minimapLocalization child)
        BoxCollider dummyBoxCollider = LocMapPivot.AddComponent<BoxCollider>();

        // Add object manipulator component to pivot
        ObjectManipulatorComponent = LocMapPivot.AddComponent<ObjectManipulator>();
        ObjectManipulatorComponent.TwoHandedManipulationType = Microsoft.MixedReality.Toolkit.Utilities.TransformFlags.Move | Microsoft.MixedReality.Toolkit.Utilities.TransformFlags.Rotate;
        BoundsControlComponent = LocMapPivot.AddComponent<BoundsControl>();
        NearInteractionGrabComponent = LocMapPivot.AddComponent<NearInteractionGrabbable>();

        // OBJmanip should be set to false at first to be enabled later, BoundsContorl and NearInterGrab are always false
        ObjectManipulatorComponent.enabled = false;
        BoundsControlComponent.enabled = false;
        NearInteractionGrabComponent.enabled = false;

        // Handle constraints on manipulation for pivot
        ConstraintManagerComponent = LocMapPivot.GetComponent<ConstraintManager>();
        ConstraintManagerComponent.AutoConstraintSelection = true;

        // Add rotation constraint to pivot x and z axis for pivot
        RotationConstraintComponent = LocMapPivot.AddComponent<RotationAxisConstraint>();
        RotationConstraintComponent.ConstraintOnRotation = Microsoft.MixedReality.Toolkit.Utilities.AxisFlags.XAxis | Microsoft.MixedReality.Toolkit.Utilities.AxisFlags.ZAxis;

        // Sort points based on X-coordinate
        Vector3[] sortedPointsX = SortPointsByX(pointcloud);
        Vector3 GuyPose = new Vector3(voxel_x, voxel_y, voxel_z);

        // Instantiate Google guy
        GG_maps = Instantiate(GoogleGuy, GuyPose, Quaternion.identity);
        GG_maps.transform.SetParent(this.gameObject.transform, false);
        GoogleMapsGuyPlaced = true;

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
                int pointsPerMeshZ = Mathf.CeilToInt(cubePosesY.Length / (float)numMeshesZ);

                for (int meshIndexZ = 0; meshIndexZ < numMeshesZ; meshIndexZ++)
                {
                    int startZ = meshIndexZ * pointsPerMeshZ;
                    int endZ = Mathf.Min((meshIndexZ + 1) * pointsPerMeshZ, cubePosesY.Length);

                    Vector3[] cubePosesZ = new Vector3[endZ - startZ];
                    Array.Copy(cubePosesY, startZ, cubePosesZ, 0, endZ - startZ);

                    // Create a GameObject for each mesh
                    GameObject mergedMeshObject = new GameObject($"MergedMeshObject_{meshIndexX}_{meshIndexY}_{meshIndexZ}");

                    // Set map pivot to the first block created, in other words the corner since the points are sorted! ;)
                    if (meshIndexX == 0 && meshIndexY == 0 && meshIndexZ == 0)
                    {
                        if (cubePosesZ.Length > 0)
                        {
                            PivotLocation.x = cubePosesZ[0].x * 0.03f;
                            PivotLocation.y = -0.5f;
                            PivotLocation.z = cubePosesZ[0].z * 0.03f;
                            LocMapPivot.transform.position = mergedMeshObject.transform.TransformPoint(PivotLocation);
                            this.transform.SetParent(LocMapPivot.gameObject.transform, false);

                            // Since minimapLoocalization now parented move the scale up to the parent and reset scale of the new child to 1
                            LocMapPivot.transform.localScale = new Vector3(0.03f, 0.03f, 0.03f);
                            this.transform.localScale = Vector3.one;
                        }
                    }

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
    }

    // Combine desired set of cubes into a single mesh chunk
    private Mesh CombineCubeMeshes(Vector3[] cubePoses, GameObject mergedMeshObject)
    {
        GameObject cube = Instantiate(Voxels_in, Vector3.zero, Quaternion.identity);
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

        Destroy(cube);

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

    // Sort the points based on X-coordinate
    private Vector3[] SortPointsByX(Pcl2Msg pointcloud)
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

        // Sort the points based on X-coordinate in place, good enough for now since we don't care about original order and want to save space
        Array.Sort(sortedPoints, (a, b) => a.x.CompareTo(b.x));

        return sortedPoints;
    }

    // Shift Minimap back to world orgin to stay consistent
    private void ShiftMinimapBackToWorldOrigin()
    {
        ShiftLocation = new Vector3(-PivotLocation.x, 0f, -PivotLocation.z); // Since pivot shifted that much from world origin, shift it back
        this.transform.position += ShiftLocation;
    }

    // Duh
    private IEnumerator RetryLoadMiniMap(int retryCount)
    {
        int retry_actual = 0;
        while (retry_actual < retryCount)
        {
            if (rosSubscriber.previousPointCloud != null && rosSubscriber.previousPointCloudReceived)
            {
                Debug.Log("MiniMap readery, filling...");
                FillIncoming(rosSubscriber.previousPointCloud);
                ShiftMinimapBackToWorldOrigin();

                yield break;
            }

            Debug.Log($"Retry {retry_actual + 1}... Waiting for data.");
            yield return new WaitForSeconds(3);
            retry_actual++;
        }
    }

    // Scales up minimap parent to be correctly scaled to real life
    public void ScaleUpMap()
    {
        Destroy(GG_maps);
        LocMapPivot.transform.localScale = Vector3.one;
    }

    // Makes the map movable and rotatable
    public void MapController()
    {
        ObjectManipulatorComponent = LocMapPivot.GetComponent<ObjectManipulator>();

        try
        {
            if (MapMoveEnabled == false)
            {
                MapMoveEnabled = true;
                ObjectManipulatorComponent.enabled = true;
            }
            else
            {
                MapMoveEnabled = false;
                if (ObjectManipulatorComponent != null)
                {
                    ObjectManipulatorComponent.enabled = false;
                }
            }
        }
        catch (Exception e)
        {
            Debug.LogWarning("An error occurred while setting Rigidbody properties: " + e.Message);
        }
    }
}