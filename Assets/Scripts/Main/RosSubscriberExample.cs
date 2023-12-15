using UnityEngine;
using Unity.Robotics.ROSTCPConnector;
using OccupGridMsg = RosMessageTypes.Nav.OccupancyGridMsg;
using PoseMsg = RosMessageTypes.Geometry.PoseMsg;
using PC2Msg = RosMessageTypes.Sensor.PointCloud2Msg;
using TwistMsg = RosMessageTypes.Geometry.TwistMsg;
using Int32Msg = RosMessageTypes.Std.Int32Msg;

public class RosSubscriberExample : MonoBehaviour
{
    public sbyte[] arr;
    public byte[] pcarr;
    public float resol;
    public float heig;
    public float wid;
    public GameObject objectToEnable;
    private PoseMsg odom;
    public uint pcwidth;
    public PC2Msg incomingPointCloudDownSampledOne;
    public PC2Msg incomingPointCloudDownSampledTwo;
    public PC2Msg incomingPointCloudLive;
    public PC2Msg previousPointCloud;
    public Int32Msg point_count;
    public double x, y, z, rx, ry, rz;
    public bool previousPointCloudReceived = false;
    public bool minimapLocalizationPointCloudReceived = false;
    //public VoxelPool voxelPool = new VoxelPool();

    void Start()
    {
        ROSConnection.GetOrCreateInstance().Subscribe<OccupGridMsg>("/mapToUnity", Ocupo);
        ROSConnection.GetOrCreateInstance().Subscribe<PC2Msg>("/robot_map_downsampled", pointCloud_downsampled_one);
        ROSConnection.GetOrCreateInstance().Subscribe<PC2Msg>("/octomap_read_downsampled", pointCloud_downsampled_two);
        ROSConnection.GetOrCreateInstance().Subscribe<PC2Msg>("/aligned_map_pcl", pointCloudLive);
        ROSConnection.GetOrCreateInstance().Subscribe<TwistMsg>("/trans_topic_merger", twistReceived);
        ROSConnection.GetOrCreateInstance().Subscribe<PC2Msg>("/pcl_read_filtered", pointCloudPrev);
        ROSConnection.GetOrCreateInstance().Subscribe<Int32Msg>("/point_count_read", pclReadPointCount);
    }
    public void Ocupo(OccupGridMsg bata)
    {
        resol = bata.info.resolution;
        heig = bata.info.height;
        wid = bata.info.width;
        arr = bata.data;
        objectToEnable.SetActive(true);
    }
    public void pointCloud_downsampled_one(PC2Msg ptcld)
    {
        incomingPointCloudDownSampledOne = ptcld;
    }

    public void pointCloud_downsampled_two(PC2Msg ptcldt) // not used lol
    {
        incomingPointCloudDownSampledTwo = ptcldt;
        if (incomingPointCloudDownSampledTwo != null)
        {
            //Debug.Log("VERY OWO Received mini L");
            minimapLocalizationPointCloudReceived = true;
        }  
    }
    public void pointCloudLive(PC2Msg ptcldlive)
    {
        incomingPointCloudLive = ptcldlive;
    }
    public void pointCloudPrev(PC2Msg ptcldprev)
    {
        previousPointCloud = ptcldprev;
        Debug.Log("UWU Received Read PCL");
        previousPointCloudReceived = true;    
    }

    public void pclReadPointCount(Int32Msg count)
    {
        point_count = count;
    }

    public void twistReceived(TwistMsg Twisty)
    {
        x = -1 * Twisty.linear.x;
        y = -1 * Twisty.linear.z;
        z = -1 * Twisty.linear.y;
        rx = 0; //1 * Twisty.angular.x * Mathf.Rad2Deg;
        ry = 1 * Twisty.angular.z * Mathf.Rad2Deg;
        rz = 0; //1 * Twisty.angular.y * Mathf.Rad2Deg; //was -1
        
        Debug.Log(x);
        Debug.Log(y);
        Debug.Log(z);
        Debug.Log(rx);
        Debug.Log(ry);
        Debug.Log(rz);

    }
}
