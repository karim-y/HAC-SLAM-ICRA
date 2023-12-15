using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Pcl2Msg = RosMessageTypes.Sensor.PointCloud2Msg;

public class MiniMap : MonoBehaviour
{
    public GameObject minimap;
    float publishMessageFrequency = 2f;
    float timeElapsed;
    public BoxCollider box;
    int numberOfChildren;
    Vector3 min, max;
    GameObject kuby;
    public GameObject cubz;
    public RosPublisherExample pub;

    // Start is called before the first frame update
    void Start()
    {
        numberOfChildren = 0;
        min = new Vector3(0.15f, 0.15f, 0.15f);
        timeElapsed = 0f;
    }

    // Update is called once per frame
    void Update()
    {
        box.size = max * 2 + min;
    }

    public void ShowLocalMap()
    {
        Clean();
        FillLocal(pub.pc2_msg);

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
    }

    // Fills the mimimap representing the hololens with it's voxels
    public void FillLocal(Pcl2Msg pointcloud)
    {
        Vector3 cubePose;
        int j;
        for (int i = 0; i < pointcloud.width - 1; i++)
        {
            j = i * Mathf.RoundToInt(pointcloud.point_step);
            cubePose.x = System.BitConverter.ToSingle(pointcloud.data, j);
            cubePose.z = System.BitConverter.ToSingle(pointcloud.data, j + 4);
            cubePose.y = System.BitConverter.ToSingle(pointcloud.data, j + 8);

            kuby = Instantiate(cubz, cubePose, Quaternion.identity);
            kuby.transform.SetParent(this.gameObject.transform, false);
            max.x = Mathf.Max(Mathf.Abs(kuby.transform.localPosition.x), max.x);
            max.y = Mathf.Max(Mathf.Abs(kuby.transform.localPosition.y), max.y);
            max.z = Mathf.Max(Mathf.Abs(kuby.transform.localPosition.z), max.z);
        }
    }

    public void FillLocalUsingObjects(Vector3 pose)
    {
        //Hmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm >:-/>3
    }

    // Sets the minimap to incative when pessed
    public void SetInactive()
    {
        minimap.SetActive(false);
    }

}
