using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using pc2 = RosMessageTypes.Sensor.PointCloud2Msg;
using System;

public class MergedVoxelDisplay : MonoBehaviour
{
    public GameObject cubz;
    public RosSubscriberExample Sub;
    [NonSerialized]
    public float x, y, z, rx, ry, rz;

    GameObject kuby;
    // Start is called before the first frame update
    void Start()
    {
        x = 0;
        y = 0;
        z = 0;
        rx = 0;
        ry = 0;
        rz = 0;
    }

    // Update is called once per frame
    void Update()
    {
        x = (float)Sub.x;
        y = (float)Sub.y;
        z = (float)Sub.z;
        rx = (float)Sub.rx;
        ry = (float)Sub.ry;
        rz = (float)Sub.rz;
    }

    public void FillIncoming(pc2 pointcloud)
    {
        Clean();
        this.transform.position = new Vector3(x, y, z);
        this.transform.rotation = Quaternion.Euler(rx, ry, rz);
        Vector3 cubePose;
        int j;
        for (int i = 0; i < pointcloud.width; i++)
        {
            j = i * Mathf.RoundToInt(pointcloud.point_step);
            cubePose.x = System.BitConverter.ToSingle(pointcloud.data, j);
            cubePose.z = System.BitConverter.ToSingle(pointcloud.data, j + 4);
            cubePose.y = System.BitConverter.ToSingle(pointcloud.data, j + 8);

            kuby = Instantiate(cubz, cubePose, Quaternion.identity);
            kuby.transform.SetParent(this.gameObject.transform, false);
        }
    }

    public void Clean()
    {
        if (this.gameObject.transform.childCount > 0)
        {
            for (int i = 0; i < this.gameObject.transform.childCount; i++)
            {
                Destroy(this.gameObject.transform.GetChild(i).gameObject);
            }
        }
    }

    public void ShowMergedMap()
    {
        FillIncoming(Sub.incomingPointCloudLive);
    }

}
