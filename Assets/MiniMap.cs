using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using pc2 = RosMessageTypes.Sensor.PointCloud2Msg;

public class MiniMap : MonoBehaviour
{
    float publishMessageFrequency = 2f;
    float timeElapsed;

    // Start is called before the first frame update
    public BoxCollider box;
    int numberOfChildren;
    Vector3 min, max;
    GameObject kuby;
    public GameObject cubz;
    public RosPublisherExample pub;
    public GameObject HL;
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

        /*timeElapsed += Time.deltaTime;
        if (timeElapsed > publishMessageFrequency)
        {
            
            //ros.Publish(topicName6, pc2e);
            //ros.Publish(topicName7, pc2d);
            ShowLocalMap();
            timeElapsed = 0;
        }*/
        
    }
   /* public void Fill(Vector3 pose)
    {
        kuby = Instantiate(cubz, pose, Quaternion.identity);
        kuby.transform.SetParent(this.gameObject.transform, false);
        max.x = Mathf.Max(Mathf.Abs(kuby.transform.localPosition.x), max.x);
        max.y = Mathf.Max(Mathf.Abs(kuby.transform.localPosition.y), max.y);
        max.z = Mathf.Max(Mathf.Abs(kuby.transform.localPosition.z), max.z);
    }
*/
    public void ShowLocalMap()
    {
        Clean();
        
        FillLocal(pub.pc2m);

    }
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

    public void CleanHLMap()
    {
        if (HL.gameObject.transform.childCount > 1)
        {
            for (int i = 0; i < HL.gameObject.transform.childCount - 1; i++)
            {
                Destroy(HL.gameObject.transform.GetChild(i).gameObject);
            }
        }
    }

    public void FillLocal(pc2 pointcloud)
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

    /*public void FillLocalUsingObjects(Vector3 pose)
    {

    }*/

}
