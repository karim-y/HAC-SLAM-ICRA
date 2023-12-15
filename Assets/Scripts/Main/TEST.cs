//using System.Collections;
//using System.Collections.Generic;
//using Unity.VisualScripting;
//using UnityEngine;

//public class TEST : MonoBehaviour
//{
//    void OnDrawGizmos()
//    {
//        Camera camera = GetComponent<Camera>(); // Assuming this script is attached to the same GameObject as the Camera

//        if (camera == null)
//        {
//            Debug.LogError("No Camera component found!");
//            return;
//        }

//        Matrix4x4 view = camera.worldToCameraMatrix;
//        Matrix4x4 proj = camera.projectionMatrix;

//        Gizmos.matrix = Matrix4x4.identity; // Reset matrix to draw in world space
//        Gizmos.color = Color.yellow;

//        Gizmos.DrawFrustum(
//            camera.transform.position,
//            camera.fieldOfView,
//            camera.farClipPlane,
//            camera.nearClipPlane,
//            camera.aspect
//        );
//    }
//    //public void Holas()
//    //{
//    //    // Create the MergedCubes GameObject
//    //    GameObject mergedCubes = new GameObject("MergedCubes");

//    //    // Create two identical child cubes named elie and nadim
//    //    GameObject cubeElie = CreateCube("elie");
//    //    GameObject cubeNadim = CreateCube("nadim");

//    //    // Set the parent of the cubes to MergedCubes
//    //    cubeElie.transform.parent = mergedCubes.transform;
//    //    cubeNadim.transform.parent = mergedCubes.transform;

//    //    // Position cubes next to each other
//    //    cubeElie.transform.position = new Vector3(-1f, 0f, 0f);
//    //    cubeNadim.transform.position = new Vector3(1f, 0f, 0f);

//    //    // Merge the cubes into a single GameObject
//    //    MergeCubes(mergedCubes);
//    //}

//    //GameObject CreateCube(string name)
//    //{
//    //    GameObject cube = GameObject.CreatePrimitive(PrimitiveType.Cube);
//    //    cube.name = name;
//    //    return cube;
//    //}

//    //void MergeCubes(GameObject mergedCubes)
//    //{
//    //    // Create an empty GameObject to hold the merged result
//    //    GameObject mergedObject = new GameObject("MergedObject");

//    //    // Store the materials of the child cubes
//    //    Material[] childMaterials = new Material[2];
//    //    Renderer[] childRenderers = mergedCubes.GetComponentsInChildren<Renderer>();
//    //    for (int i = 0; i < childRenderers.Length; i++)
//    //    {
//    //        childMaterials[i] = childRenderers[i].material;
//    //    }

//    //    // Combine meshes of the child cubes
//    //    MeshFilter[] meshFilters = mergedCubes.GetComponentsInChildren<MeshFilter>();
//    //    CombineInstance[] combine = new CombineInstance[meshFilters.Length];

//    //    for (int i = 0; i < meshFilters.Length; i++)
//    //    {
//    //        combine[i].mesh = meshFilters[i].sharedMesh;
//    //        combine[i].transform = meshFilters[i].transform.localToWorldMatrix;
//    //        meshFilters[i].gameObject.SetActive(false); // Disable the original cubes
//    //    }

//    //    // Apply the combined mesh to the mergedObject
//    //    mergedObject.AddComponent<MeshFilter>().mesh = new Mesh();
//    //    mergedObject.GetComponent<MeshFilter>().mesh.CombineMeshes(combine);

//    //    // Add a MeshRenderer to the mergedObject
//    //    MeshRenderer meshRenderer = mergedObject.AddComponent<MeshRenderer>();

//    //    // Assign the stored materials to the mergedObject
//    //    meshRenderer.materials = childMaterials;

//    //    // Set the parent of the mergedObject to MergedCubes
//    //    mergedObject.transform.parent = mergedCubes.transform;

//    //    // Reset the position and scale of the mergedObject
//    //    mergedObject.transform.localPosition = Vector3.zero;
//    //    mergedObject.transform.localScale = Vector3.one;
//    //}
//}

//--------------------------------------------------------------------------------------------------------------------------------------------------------------
//MergedVoxelDisplay

//void FillIncomingSingleObject(Pcl2Msg pointcloud, Material cubeMaterial)
//{
//    CreatedCube = Instantiate(Cubes, Vector3.zero, Quaternion.identity);
//    Vector3[] cubePoses = new Vector3[pointcloud.width];
//    int temp;

//    for (int index = 0; index < pointcloud.width; index++)
//    {
//        temp = index * Mathf.RoundToInt(pointcloud.point_step);
//        cubePoses[index].x = BitConverter.ToSingle(pointcloud.data, temp);
//        cubePoses[index].z = BitConverter.ToSingle(pointcloud.data, temp + 4);
//        cubePoses[index].y = BitConverter.ToSingle(pointcloud.data, temp + 8);
//    }

//    // Destroy the original cube GameObject
//    Destroy(CreatedCube);

//    // Create a single mesh for all the cubes
//    Mesh combined_mesh = CombineCubeMeshes(cubePoses);

//    // Create a GameObject to hold the merged mesh
//    GameObject MergedMeshObject = new GameObject("MergedMapSingleObject");

//    // Add a MeshFilter component and assign the combined mesh
//    MeshFilter mesh_filter = MergedMeshObject.AddComponent<MeshFilter>();
//    mesh_filter.mesh = combined_mesh;

//    // Add a MeshRenderer component
//    MeshRenderer mesh_renderer = MergedMeshObject.AddComponent<MeshRenderer>();
//    mesh_renderer.sharedMaterial = cubeMaterial; // Optionally assign a material

//    // Set the parent of the merged mesh to the same parent as the original cubes
//    MergedMeshObject.transform.SetParent(this.gameObject.transform, false);
//}
//Mesh CombineCubeMeshes(Vector3[] cubePoses)
//{
//    GameObject cube = Instantiate(Cubes, Vector3.zero, Quaternion.identity);
//    CombineInstance[] combine = new CombineInstance[cubePoses.Length];
//    Mesh combinedMesh = new Mesh();
//    combinedMesh.indexFormat = UnityEngine.Rendering.IndexFormat.UInt32;

//    for (int i = 0; i < cubePoses.Length; i++)
//    {
//        cube.transform.position = cubePoses[i];
//        combine[i].mesh = cube.GetComponent<MeshFilter>().sharedMesh;
//        combine[i].transform = cube.transform.localToWorldMatrix;
//    }

//    combinedMesh.CombineMeshes(combine, true, true);
//    Destroy(cube); // Destroy the original cube GameObject

//    combinedMesh.name = "MergedMapMesh";

//    return combinedMesh;
//}
//----------------------------------------------------------------------------------------------------------------------------
//// Fill MergedVoxels by replacing each point by a cube gameobject from the incoming pointcloud
//public void FillIncoming(Pcl2Msg pointcloud)
//{
//    Clean();

//    Vector3 cubePose;
//    int temp;

//    for (int index = 0; index < pointcloud.width; index++)
//    {
//        temp = index * Mathf.RoundToInt(pointcloud.point_step);
//        cubePose.x = BitConverter.ToSingle(pointcloud.data, temp);
//        cubePose.z = BitConverter.ToSingle(pointcloud.data, temp + 4);
//        cubePose.y = BitConverter.ToSingle(pointcloud.data, temp + 8);

//        CreatedCube = Instantiate(Cubes, cubePose, Quaternion.identity);
//        CreatedCube.transform.SetParent(this.gameObject.transform, false);
//        CreatedCube.SetActive(true);
//    }

//    if (once)
//    {
//        this.transform.Rotate(new Vector3(rx, ry, rz), Space.Self);
//        this.transform.Translate(new Vector3(x, y, z), Space.Self);
//        once = false;
//    }

//    Debug.Log("Jelly Filled Donut");
//}
//----------------------------------------------------------------------------------------------------------------------------
//Vector3[] SortPointsByY(Vector3[] points)
//{
//    // Convert the array to a list for sorting
//    Vector3[] sortedPointsArray = points.ToArray();

//    // Sort the points based on Y-coordinate
//    Array.Sort(sortedPointsArray, (a, b) => a.y.CompareTo(b.y));

//    return sortedPointsArray;
//}
//----------------------------------------------------------------------------------------------------------------------------

