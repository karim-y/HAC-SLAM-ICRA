using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Pcl2Msg = RosMessageTypes.Sensor.PointCloud2Msg;

public class MiniMapIncoming : MonoBehaviour
{
    public BoxCollider box;
    public GameObject cubz;
    public RosSubscriberExample rosSubscriber;
    public RosPublisherExample rosPublisher;
    private GameObject kuby;
    Vector3 min, max, zeros;
    bool isMapVisible = true; // Track visibility state

    // Start is called before the first frame update
    void Start()
    {
        min = new Vector3(1f, 1f, 1f);
        zeros = new Vector3(0f, 0f, 0f);
    }

    // Update is called once per frame
    void Update()
    {
        box.size = max * 2 + min;
    }

    // Checks for visibility and shows the map
    public void ShowIncomingMap()
    {
        if (isMapVisible)
        {
            Clean();
            FillIncoming(rosSubscriber.incomingPointCloudDownSampledOne);
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

    // Fills the mimimap representing the hololens with it's voxels
    public void FillIncoming(Pcl2Msg pointcloud)
    {
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
            max.x = Mathf.Max(Mathf.Abs(kuby.transform.localPosition.x), max.x);
            max.y = Mathf.Max(Mathf.Abs(kuby.transform.localPosition.y), max.y);
            max.z = Mathf.Max(Mathf.Abs(kuby.transform.localPosition.z), max.z);
        }
    }
}
