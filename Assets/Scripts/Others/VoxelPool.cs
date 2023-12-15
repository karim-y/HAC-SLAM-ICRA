using RosMessageTypes.Octomap;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public struct VoxelInstanceData
{
    public Vector3 Position;
    public Quaternion Rotation;
    public Vector3 Scale;
}

public class VoxelPool : MonoBehaviour
{
    public RosSubscriberExample RosSubscriber;
    public GameObject Voxel;
    public GameObject Parent;
    public VoxelInstanceData[] instanceDataArray;
    private int PoolSize;
    private GameObject[] voxelPool;
    
    public void OnRosMessageReceived()
    {
        PoolSize = RosSubscriber.point_count.data;
        Debug.Log(PoolSize);
        instanceDataArray = new VoxelInstanceData[PoolSize];
        InitializeVoxelPool();
    }

    public void InitializeVoxelPool()
    {
        Debug.Log("Started Instancing Pool");

        int maxInstancesPerDraw = 1023;

        for (int i = 0; i < PoolSize; i += maxInstancesPerDraw)
        {
            int instancesToDraw = Mathf.Min(maxInstancesPerDraw, PoolSize - i);

            // Create a temporary array for the subset of instance data
            VoxelInstanceData[] subsetData = new VoxelInstanceData[instancesToDraw];
            Array.Copy(instanceDataArray, i, subsetData, 0, instancesToDraw);

            // Perform GPU instancing for the subset
            Graphics.DrawMeshInstanced(
                Voxel.GetComponent<MeshFilter>().sharedMesh,
                0, // Submesh index
                Voxel.GetComponent<MeshRenderer>().sharedMaterial,
                ToMatrixArray(subsetData),
                instancesToDraw
            );
        }

        Debug.Log("Finished Instancing Pool");
    }

    private Matrix4x4[] ToMatrixArray(VoxelInstanceData[] data)
    {
        Matrix4x4[] matrixArray = new Matrix4x4[data.Length];

        for (int i = 0; i < data.Length; i++)
        {
            matrixArray[i].SetTRS(
                data[i].Position,
                data[i].Rotation,
                data[i].Scale
            );
        }

        return matrixArray;
    }

    public void SetPooledVoxelPose(int index, Vector3 pose)
    {
        voxelPool[index].transform.position = pose;
    }

    public void UpdateVoxelPositions(Vector3[] newPositions)
    {
        for (int i = 0; i < Mathf.Min(newPositions.Length, instanceDataArray.Length); i++)
        {
            instanceDataArray[i].Position = newPositions[i];
        }

        // Redraw the instanced mesh with updated positions
        Graphics.DrawMeshInstanced(
            Voxel.GetComponent<MeshFilter>().sharedMesh,
            0, // Submesh index
            Voxel.GetComponent<MeshRenderer>().sharedMaterial,
            ToMatrixArray(instanceDataArray),
            PoolSize
        );
    }
}

//Debug.Log("Started Pooling");
//voxelPool = new GameObject[PoolSize];

//for (int index = 0; index < PoolSize; index++)
//{
//    GameObject single_voxel = Instantiate(Voxel, Vector3.zero, Quaternion.identity);
//    single_voxel.SetActive(false);
//    single_voxel.transform.SetParent(Parent.gameObject.transform, false);
//    voxelPool[index] = single_voxel;
//}

//Debug.Log("Finished pooling");
