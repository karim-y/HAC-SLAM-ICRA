using UnityEngine;
using Unity.Robotics.ROSTCPConnector;
using System;
using GeometryMsgs = RosMessageTypes.Geometry;
using NavMsgs = RosMessageTypes.Nav;
using StdMsgs = RosMessageTypes.Std;
using OctomapMsgs = RosMessageTypes.Octomap;
using SensorMsgs = RosMessageTypes.Sensor;
using RosMessageTypes.Std;


/// <summary>
///   Felt the need to write something here, so hello to whoever is reading this! ;)
/// </summary>
public class RosPublisherExample : MonoBehaviour
{

    ROSConnection ros;
    public MinecraftBuilder minecraftBuilder;
    public MergedVoxelDisplay mergedVoxDisp;
    public MiniMapLocalization miniMapLocalization;

    string topicTwist = "/twist"; // It was "/joy_teleop/cmd_vel" when we were publishing to control the robot movement
    string topicOccupMap = "/occupancy_map"; // For 2D mapping
    string topicPCL = "/point_cloud"; //For publishing point clouds
    string topicHumanEdits = "/human_edits"; //For publishing edits
    string topicDeleted = "/deleted"; //For publishing deleted
    string topicSaveTrig = "/save_trigger_topic"; //For publishing save trigger
    string topicReadTrig = "/read_trigger_topic"; //For publishing read trigger

    float publishMessageFrequency = 3f;
    float timeElapsed; // Used to determine how much time has elapsed since the last message was published
    bool PublishTwist;

    OctomapMsgs.OctomapMsg octo;
    [NonSerialized]
    public SensorMsgs.PointCloud2Msg pc2_msg;
    SensorMsgs.PointCloud2Msg pc2_edited;
    SensorMsgs.PointCloud2Msg pc2_deleted;
    GeometryMsgs.TwistMsg twist;
    uint new_width = 0;
    uint new_width_edited = 0;
    uint new_width_deleted = 0;
    byte[] temp_data;
    byte[] incoming_PCL;
    public GameObject global, local;
    bool yalla;

    void Start()
    {
        // start the ROS connection
        ros = ROSConnection.GetOrCreateInstance();
        ros.RegisterPublisher<GeometryMsgs.TwistMsg>(topicTwist);
        ros.RegisterPublisher<NavMsgs.OccupancyGridMsg>(topicOccupMap);
        ros.RegisterPublisher<SensorMsgs.PointCloud2Msg>(topicPCL);
        ros.RegisterPublisher<SensorMsgs.PointCloud2Msg>(topicHumanEdits);
        ros.RegisterPublisher<SensorMsgs.PointCloud2Msg>(topicDeleted);
        ros.RegisterPublisher<StdMsgs.StringMsg>(topicSaveTrig);
        ros.RegisterPublisher<StdMsgs.StringMsg>(topicReadTrig);

        //The below is for the robot rotation 
        PublishTwist = false;
        yalla = false;

        /*//The below is for the Octomap
        octo = new octom.OctomapMsg();
        octo.header.frame_id = "map";
        octo.id = "octo";
        octo.resolution = 0.5;
        octo.binary = false;
        sbyte[] octoData = new sbyte[16];
        octoData[0] = 0;*/

        // For pointcloud2:
        pc2_msg = new SensorMsgs.PointCloud2Msg();
        pc2_msg.header.frame_id = "map";
        pc2_msg.fields = new SensorMsgs.PointFieldMsg[]
        {
            new SensorMsgs.PointFieldMsg { name = "x", offset = 0, datatype = SensorMsgs.PointFieldMsg.FLOAT32, count = 1 },
            new SensorMsgs.PointFieldMsg { name = "y", offset = 4, datatype = SensorMsgs.PointFieldMsg.FLOAT32, count = 1 },
            new SensorMsgs.PointFieldMsg { name = "z", offset = 8, datatype = SensorMsgs.PointFieldMsg.FLOAT32, count = 1 }
        };
        pc2_msg.is_bigendian = false;
        pc2_msg.point_step = 12;
        pc2_msg.row_step = pc2_msg.point_step;
        pc2_msg.is_dense = true;
        pc2_msg.width = new_width;
        pc2_msg.height = 1;
        pc2_msg.data = new byte[0];

        // For edited point clouds
        pc2_edited = new SensorMsgs.PointCloud2Msg();
        pc2_edited.header.frame_id = "map";
        pc2_edited.fields = new SensorMsgs.PointFieldMsg[]
        {
            new SensorMsgs.PointFieldMsg { name = "x", offset = 0, datatype = SensorMsgs.PointFieldMsg.FLOAT32, count = 1 },
            new SensorMsgs.PointFieldMsg { name = "y", offset = 4, datatype = SensorMsgs.PointFieldMsg.FLOAT32, count = 1 },
            new SensorMsgs.PointFieldMsg { name = "z", offset = 8, datatype = SensorMsgs.PointFieldMsg.FLOAT32, count = 1 }
        };
        pc2_edited.is_bigendian = false;
        pc2_edited.point_step = 12;
        pc2_edited.row_step = pc2_edited.point_step;
        pc2_edited.is_dense = true;
        pc2_edited.width = new_width_edited;
        pc2_edited.height = 1;
        pc2_edited.data = new byte[0];

        //For deleted point clouds:
        pc2_deleted = new SensorMsgs.PointCloud2Msg();
        pc2_deleted.header.frame_id = "map";
        pc2_deleted.fields = new SensorMsgs.PointFieldMsg[]
        {
            new SensorMsgs.PointFieldMsg { name = "x", offset = 0, datatype = SensorMsgs.PointFieldMsg.FLOAT32, count = 1 },
            new SensorMsgs.PointFieldMsg { name = "y", offset = 4, datatype = SensorMsgs.PointFieldMsg.FLOAT32, count = 1 },
            new SensorMsgs.PointFieldMsg { name = "z", offset = 8, datatype = SensorMsgs.PointFieldMsg.FLOAT32, count = 1 }
        };
        pc2_deleted.is_bigendian = false;
        pc2_deleted.point_step = 12;
        pc2_deleted.row_step = pc2_edited.point_step;
        pc2_deleted.is_dense = true;
        pc2_deleted.width = new_width_edited;
        pc2_deleted.height = 1;
        pc2_deleted.data = new byte[0];

        //For twist messages:
        twist = new GeometryMsgs.TwistMsg();    
    }

    private void Update()
    {
        timeElapsed += Time.deltaTime;
        
        if (timeElapsed > publishMessageFrequency)
        {
            ros.Publish(topicPCL, pc2_msg);
            PopulatePointCloudMsg();
            timeElapsed = 0;
        }
    }

    // Called upon pressing the Save Map button
    public void PubSaveTrigger()
    {
        StringMsg stringMsg = new StringMsg();
        stringMsg.data = "Save map to Brain";

        ros.Publish(topicSaveTrig, stringMsg);
        Debug.Log("Publishing string message: " + stringMsg);
    }

    // Called upon pressing the Load Previous Map button
    public void PubReadTrigger()
    {
        StringMsg stringMsg = new StringMsg();
        stringMsg.data = "Load map to Unity";

        ros.Publish(topicReadTrig, stringMsg);
        Debug.Log("Publishing string message: " + stringMsg);

        if (miniMapLocalization.isLocalizing)
        {
            Debug.Log(miniMapLocalization.isLocalizing);
            miniMapLocalization.ShowIncomingMap();
            miniMapLocalization.isLocalizing = false;
        }
        else
        {
            Debug.Log(miniMapLocalization.isLocalizing);
            //mergedVoxDisp.LoadPrevMap();
            miniMapLocalization.ScaleUpMap();
        }
    }

    public void AddPointCloudtoROSMessage(Vector3 point)
    {
        temp_data = new byte[pc2_msg.data.Length];
        temp_data = pc2_msg.data;
        pc2_msg.data = new byte[pc2_msg.data.Length + 12];
        for (int i = 0; i < temp_data.Length; i++)
        {
            pc2_msg.data[i] = temp_data[i];
        }
        byte[] xBytes = BitConverter.GetBytes(point.x);
        byte[] yBytes = BitConverter.GetBytes(point.z);
        byte[] zBytes = BitConverter.GetBytes(point.y);

        int offset = temp_data.Length;
        Buffer.BlockCopy(xBytes, 0, pc2_msg.data, offset, 4);
        Buffer.BlockCopy(yBytes, 0, pc2_msg.data, offset + 4, 4);
        Buffer.BlockCopy(zBytes, 0, pc2_msg.data, offset + 8, 4);

        new_width++;
        pc2_msg.width = new_width;  
    }

    // To take care of map properties after the human edits to the voxel map
    public void EditedPointCloudPublisher(Vector3 point)
    {

        temp_data = new byte[pc2_edited.data.Length];
        temp_data = pc2_edited.data;
        pc2_edited.data = new byte[pc2_edited.data.Length + 12];
        for (int i = 0; i < temp_data.Length; i++)
        {
            pc2_edited.data[i] = temp_data[i];
        }
        byte[] xBytes = BitConverter.GetBytes(point.x);
        byte[] yBytes = BitConverter.GetBytes(point.z);
        byte[] zBytes = BitConverter.GetBytes(point.y);

        int offset = temp_data.Length;
        Buffer.BlockCopy(xBytes, 0, pc2_edited.data, offset, 4);
        Buffer.BlockCopy(yBytes, 0, pc2_edited.data, offset + 4, 4);
        Buffer.BlockCopy(zBytes, 0, pc2_edited.data, offset + 8, 4);

        new_width_edited++;
        pc2_edited.width = new_width_edited;
    }

    // To take care of map properties after the human edits to the voxel map
    public void DeletedPointCloudPublisher(Vector3 point)
    {
        temp_data = new byte[pc2_deleted.data.Length];
        temp_data = pc2_deleted.data;
        pc2_deleted.data = new byte[pc2_deleted.data.Length + 12];
        for (int i = 0; i < temp_data.Length; i++)
        {
            pc2_deleted.data[i] = temp_data[i];
        }
        byte[] xBytes = BitConverter.GetBytes(point.x);
        byte[] yBytes = BitConverter.GetBytes(point.z);
        byte[] zBytes = BitConverter.GetBytes(point.y);

        int offset = temp_data.Length;
        Buffer.BlockCopy(xBytes, 0, pc2_deleted.data, offset, 4);
        Buffer.BlockCopy(yBytes, 0, pc2_deleted.data, offset + 4, 4);
        Buffer.BlockCopy(zBytes, 0, pc2_deleted.data, offset + 8, 4);

        new_width_deleted++;
        pc2_deleted.width = new_width_deleted;
    }
    
    public void EducatedGuessForICP()
    {
        twist.linear.x = -1 * (global.transform.position.x - local.transform.position.x) / global.transform.localScale.x; //(global.transform.position.z - local.transform.position.z) / global.transform.localScale.z;
        twist.linear.y = -1 * (global.transform.position.z - local.transform.position.z) / global.transform.localScale.z;
        twist.linear.z = -1 * (global.transform.position.y - local.transform.position.y) / global.transform.localScale.y;
        twist.angular.x = (global.transform.rotation.eulerAngles.z - local.transform.rotation.eulerAngles.z) * Mathf.Deg2Rad;
        twist.angular.y = (local.transform.rotation.eulerAngles.x - global.transform.rotation.eulerAngles.x) * Mathf.Deg2Rad;
        twist.angular.z = (global.transform.rotation.eulerAngles.y - local.transform.rotation.eulerAngles.y) * Mathf.Deg2Rad;

        ros.Publish(topicTwist, twist);
    }

    public void PublishEditedPointCloudMsg()
    {
        yalla = true;
        ros.Publish(topicHumanEdits, pc2_edited);
    }

    public void PublishDeletedPointCloudMsg()
    {
        ros.Publish(topicDeleted, pc2_deleted);
    }

    public void PopulatePointCloudMsg()
    {
        pc2_msg.data = new byte[minecraftBuilder.papa.transform.childCount * 12];

        for (int i = 0; i < minecraftBuilder.papa.transform.childCount; i++)
        {
            byte[] xBytes = BitConverter.GetBytes(minecraftBuilder.papa.transform.GetChild(i).transform.position.x);
            byte[] yBytes = BitConverter.GetBytes(minecraftBuilder.papa.transform.GetChild(i).transform.position.z);
            byte[] zBytes = BitConverter.GetBytes(minecraftBuilder.papa.transform.GetChild(i).transform.position.y);

            int offset = i * 12;
            Buffer.BlockCopy(xBytes, 0, pc2_msg.data, offset, 4);
            Buffer.BlockCopy(yBytes, 0, pc2_msg.data, offset + 4, 4);
            Buffer.BlockCopy(zBytes, 0, pc2_msg.data, offset + 8, 4);
        }

        pc2_msg.width = (uint)minecraftBuilder.papa.transform.childCount;
    }

}
