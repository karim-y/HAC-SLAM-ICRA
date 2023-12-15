#define BOOST_BIND_NO_PLACEHOLDERS
#include "octomap_merger.h"
#include "map_merger.cpp"
#include "icp_align.cpp"

OctomapMerger::OctomapMerger(): Node("octomap_merger"){

  //declare parameters
  octo_type=declare_parameter("octoType" ,0);
  resolution=declare_parameter("resolution" ,0.05);

  // Topics for Subscribing and Publishing
  map_topic=declare_parameter("mapTopic" ,"octomap_binary_robot");
  neighbors_topic=declare_parameter("neighborsTopic" ,"octomap_binary_holo");
  ground_thresh=declare_parameter("groundThre" ,-0.50);
  merged_topic=declare_parameter("mergedTopic" ,"aligned_map" );
  map_diffs_topic=declare_parameter("mapDiffsTopic" ,"map_diffs" );
  num_diffs_topic=declare_parameter("numDiffsTopic" ,"num_diffs" );
  trans_topic_unity=declare_parameter("transTopicUnity" ,"twist" );
  trans_topic_merger=declare_parameter("transTopicMerger" ,"trans_topic_merger" );
  human_edits_add=declare_parameter("humanEditsAddTopic" ,"human_edits" );
  human_edits_delete=declare_parameter("humanEditsDeleteTopic" ,"deleted" );
  edited_map_topic=declare_parameter("editedMapTopic" ,"edited_map" );
  edited_map_topic_pcl=declare_parameter("editedMapTopicPcl" ,"edited_map_pcl" );
  merged_topic_pcl=declare_parameter("mergedTopicPcl" ,"aligned_map_pcl" );

  initializePublishers();
  initializeSubscribers();

  myMapNew = false;
  unityMapNew = false;
  mergeTrigger= false;
  alignTrigger=false;

  // Initialize Octomap holders once, assign/overwrite each loop
  tree_merged = new octomap::OcTreeStamped(resolution);
  tree_sys = new octomap::OcTree(resolution);
  tree_neigh = new octomap::OcTree(resolution);
  tree_diff = new octomap::OcTree(resolution);
  //num_diffs = 0;

  transform << 0.998896, 0, 0.0469827, 0,
            0, 1, 0, 2,
            -0.0469827, 0, 0.998896, 0,
            0, 0, 0, 1;
}


// Destructor
OctomapMerger::~OctomapMerger() {
}

void OctomapMerger::initializeSubscribers() {
  RCLCPP_INFO(rclcpp::get_logger("my_logger"),"Initialising Subscribers \n");

  auto callback_myMap =
    [this](const typename octomap_msgs::msg::Octomap::SharedPtr msg) -> void
    {
      RCLCPP_INFO(rclcpp::get_logger("my_logger"),"message received from robot \n");
      std::lock_guard<std::mutex> lock(mtx_);
      myMap = *msg;
      myMapNew = true;
    };

  sub_mymap =
    create_subscription<octomap_msgs::msg::Octomap>(
    map_topic, rclcpp::QoS(rclcpp::KeepLast(10)).reliable(), callback_myMap);

  auto callback_unityMap =
    [this](const typename octomap_msgs::msg::Octomap::SharedPtr msg) -> void
    {
      RCLCPP_INFO(rclcpp::get_logger("my_logger"),"message received from neighbor \n");
      std::lock_guard<std::mutex> lock(mtx_);
      unityMap = *msg;
      unityMapNew = true;

    };

  sub_neighbors =
    create_subscription<octomap_msgs::msg::Octomap>(
    neighbors_topic, rclcpp::QoS(rclcpp::KeepLast(10)).reliable(), callback_unityMap);

  auto callback_trans =
    [this](const typename geometry_msgs::msg::Twist::SharedPtr msg) -> void
    {
      RCLCPP_INFO(rclcpp::get_logger("my_logger"),"Merge maps trigger \n");
      std::lock_guard<std::mutex> lock(mtx_);
      mergeTrigger = true;
      alignTrigger = true;
      transform=poseToTransformationMatrix(msg);
    };

  sub_trans =
    create_subscription<geometry_msgs::msg::Twist>(
    trans_topic_unity, rclcpp::QoS(10).reliable(), callback_trans);

  auto callback_editedMap =
    [this](const typename sensor_msgs::msg::PointCloud2::SharedPtr message) -> void
    {

      std::lock_guard<std::mutex> lock(mtx_);
      RCLCPP_INFO(rclcpp::get_logger("my_logger"),"to add received \n");
      //convert sensor message tp pcl message.
      pcl::PointCloud<pcl::PointXYZ>::Ptr edit_cloud(new pcl::PointCloud<pcl::PointXYZ>);
      pcl::moveFromROSMsg(*message,*edit_cloud);

      //convert pcl to octomap
      OcTree* tree_edit = new OcTree(resolution);

      for (int i = 0 ;i < edit_cloud->points.size (); i++){
        OcTreeKey destVoxel=  tree_edit->coordToKey(point3d(edit_cloud->points[i].x, edit_cloud->points[i].y, edit_cloud->points[i].z));
        OcTreeNode *newNode = tree_edit->setNodeValue(destVoxel, octomap::logodds(1));
      }
      transformTreePcl(tree_edit, transform);
      // Merge the edits 
      merge_maps_priorities(tree_merged, tree_edit);

      // Prune and publish the Octomap
      octomap_msgs::msg::Octomap msg;
      tree_merged->prune();
      if (octo_type == 0)
        octomap_msgs::binaryMapToMsg(*tree_merged, msg);
      else
        octomap_msgs::fullMapToMsg(*tree_merged, msg);
      // msg.header.stamp = ros::Time::now();
      msg.header.frame_id = "map";
      msg.id = "OcTree"; // Required to convert OcTreeStamped into regular OcTree
      RCLCPP_INFO(rclcpp::get_logger("my_logger"),"Publishing the edited map  \n");
      pub_merged->publish(msg);

      //publish the pcl
      sensor_msgs::msg::PointCloud2 edited_pcl=octomapToPcl(msg);
      pub_merged_pcl->publish(edited_pcl);

      // Free the memory
      delete tree_edit;
    };

  sub_edits =
    create_subscription<sensor_msgs::msg::PointCloud2>(
    human_edits_add, rclcpp::QoS(rclcpp::KeepLast(10)).reliable(), callback_editedMap);


  auto callback_deletedMap =
    [this](const typename sensor_msgs::msg::PointCloud2::SharedPtr message) -> void
    {
      std::lock_guard<std::mutex> lock(mtx_);
      RCLCPP_INFO(rclcpp::get_logger("my_logger"),"to delete received \n");

      pcl::PointCloud<pcl::PointXYZ>::Ptr edit_cloud(new pcl::PointCloud<pcl::PointXYZ>);
      pcl::moveFromROSMsg(*message,*edit_cloud);

      //convert pcl to octomap
      OcTree* tree_edit = new OcTree(resolution);

      for (int i = 0 ;i < edit_cloud->points.size (); i++){
        OcTreeKey destVoxel=  tree_edit->coordToKey(point3d(edit_cloud->points[i].x, edit_cloud->points[i].y, edit_cloud->points[i].z));
        OcTreeNode *newNode = tree_edit->setNodeValue(destVoxel, octomap::logodds(1));
      }
      //Align before merging
      transformTreePcl(tree_edit, transform);

      // Merge the edits 
      delete_priorities(tree_merged, tree_edit);

      // Prune and publish the Octomap
      octomap_msgs::msg::Octomap msg;
      tree_merged->prune();
      if (octo_type == 0)
        octomap_msgs::binaryMapToMsg(*tree_merged, msg);
      else
        octomap_msgs::fullMapToMsg(*tree_merged, msg);
      // msg.header.stamp = ros::Time::now();
      msg.header.frame_id = "map";
      msg.id = "OcTree"; // Required to convert OcTreeStamped into regular OcTree
      RCLCPP_INFO(rclcpp::get_logger("my_logger"),"Publishing the edited map  \n");
      pub_merged->publish(msg);

      //publish the pcl
      sensor_msgs::msg::PointCloud2 edited_pcl=octomapToPcl(msg);
      pub_merged_pcl->publish(edited_pcl);

      // Free the memory
      delete tree_edit;
    };

  sub_deleted =
    create_subscription<sensor_msgs::msg::PointCloud2>(
    human_edits_delete, rclcpp::QoS(rclcpp::KeepLast(10)).reliable(), callback_deletedMap);
}

void OctomapMerger::initializePublishers() {
    RCLCPP_INFO(rclcpp::get_logger("my_logger"),"Initialising Publishers \n");
    pub_merged= create_publisher<octomap_msgs::msg::Octomap>(merged_topic, 10);
    pub_mapdiffs = create_publisher<octomap_msgs::msg::Octomap>(map_diffs_topic, 10);
    pub_trans = create_publisher<geometry_msgs::msg::Twist>(trans_topic_merger,10);
    pub_edited= create_publisher<octomap_msgs::msg::Octomap>(edited_map_topic, 10);
    pub_edited_pcl= create_publisher<sensor_msgs::msg::PointCloud2>(edited_map_topic_pcl, 10);
    pub_merged_pcl= create_publisher<sensor_msgs::msg::PointCloud2>(merged_topic_pcl, 1);

}


sensor_msgs::msg::PointCloud2 OctomapMerger::buildPCL(OcTreeStamped *tree) {
  tree->expand();
  sensor_msgs::msg::PointCloud2 pcl;
  PointCloud::Ptr occupiedCells(new PointCloud);
  tree2PointCloud(tree, *occupiedCells);
  pcl::toROSMsg(*occupiedCells, pcl);
  // pcl.header.stamp = ros::Time::now();
  pcl.header.frame_id = "map";

  return pcl;
}

template <typename T>
void OctomapMerger::tree2PointCloud(T *tree, pcl::PointCloud<pcl::PointXYZ>& pclCloud) {
    for (typename T::leaf_iterator it = tree->begin_leafs(),
        end = tree->end_leafs(); it != end; ++it)
    {
      if (tree->isNodeOccupied(*it)) {
        pclCloud.push_back(
            pcl::PointXYZ(it.getX(),
              it.getY(),
              it.getZ()
              )
            );
      }
    }
}

sensor_msgs::msg::PointCloud2 OctomapMerger::octomapToPcl(octomap_msgs::msg::Octomap myMap){
  octomap::OcTree *tree; 
  if (octo_type == 0){
    tree = (octomap::OcTree*)octomap_msgs::binaryMsgToMap(myMap);
  }
  else {
    tree = (octomap::OcTree*)octomap_msgs::fullMsgToMap(myMap);
  }
  tree->expand();
  sensor_msgs::msg::PointCloud2 pcl;
  PointCloud::Ptr occupiedCells(new PointCloud);
  //tree2PointCloud(tree, *occupiedCells);
  //////
  for (octomap::OcTree::leaf_iterator it = tree->begin_leafs(), end = tree->end_leafs(); it != end; ++it){

    if (it.getZ()<ground_thresh) continue;
    occupiedCells->push_back(
    pcl::PointXYZ(it.getX(),
      it.getY(),
      it.getZ()
      )
    );
  }
  //////


  pcl::toROSMsg(*occupiedCells, pcl);

  // pcl.header.stamp = ros::Time::now();
  pcl.header.frame_id = "map";
  //delete occupiedCells
  delete tree; 
  return pcl;
}
void OctomapMerger::align(){
    //fill the octomap tree
  if (octo_type == 0){
    tree_sys = (octomap::OcTree*)octomap_msgs::binaryMsgToMap(myMap);
    tree_neigh = (octomap::OcTree*)octomap_msgs::binaryMsgToMap(unityMap);
  }
  else{
    tree_sys = (octomap::OcTree*)octomap_msgs::fullMsgToMap(myMap);
    tree_neigh = (octomap::OcTree*)octomap_msgs::fullMsgToMap(unityMap);
  }
  if (!tree_sys || !tree_neigh) {
    RCLCPP_INFO(rclcpp::get_logger("my_logger"),"Octomap type does not match the expected type or agents maps is not received yet \n");
    return;
  }
  transform=align_maps(tree_sys, tree_neigh,transform, resolution);
  //publish the tf  
  geometry_msgs::msg::Twist message=transformationMatrixToPose(transform);
  pub_trans->publish(message);

  //////////
  octomap_msgs::msg::Octomap octoMsg;
  octomap::OcTree* tree_test = new octomap::OcTree(resolution);
  if (octo_type == 0){
    tree_test = (octomap::OcTree*)octomap_msgs::binaryMsgToMap(unityMap);
  }
  else{
    tree_test = (octomap::OcTree*)octomap_msgs::fullMsgToMap(unityMap);
  }
  if (!tree_test) {
    RCLCPP_INFO(rclcpp::get_logger("my_logger"),"Octomap type does not match the expected type or agents maps is not received yet \n");
    return;
  }


  transformTreePcl(tree_test, transform);
  //publish the Octomap
  tree_test->prune();
  if (octo_type == 0)
    octomap_msgs::binaryMapToMsg(*tree_test, octoMsg);
  else
    octomap_msgs::fullMapToMsg(*tree_test, octoMsg);
  // msg.header.stamp = ros::Time::now();
  octoMsg.header.frame_id = "map";
  octoMsg.id = "OcTree"; // Required to convert OcTreeStamped into regular OcTree
  RCLCPP_INFO(rclcpp::get_logger("my_logger"),"Publishing alligned map  \n");
  pub_edited->publish(octoMsg);

  delete tree_test;
  delete tree_sys;
  delete tree_neigh;
  RCLCPP_INFO(rclcpp::get_logger("my_logger"),"maps alligned \n");

}


void OctomapMerger::merge() {
  RCLCPP_INFO(rclcpp::get_logger("my_logger"),"merging maps\n");
  //get the octree
  octomap_msgs::msg::Octomap octoMsg;
  octomap_msgs::msg::Octomap diffMsg;


  //fill the octomap tree
  if (octo_type == 0){
    tree_sys = (octomap::OcTree*)octomap_msgs::binaryMsgToMap(myMap);
    tree_neigh = (octomap::OcTree*)octomap_msgs::binaryMsgToMap(unityMap);
  }
  else{
    tree_sys = (octomap::OcTree*)octomap_msgs::fullMsgToMap(myMap);
    tree_neigh = (octomap::OcTree*)octomap_msgs::fullMsgToMap(unityMap);
  }
  if (!tree_sys || !tree_neigh) {
    RCLCPP_INFO(rclcpp::get_logger("my_logger"),"Octomap type does not match the expected type or agents maps is not received yet \n");
    return;
  }
  //apply the icp
  //transform=align_maps(tree_sys, tree_neigh,transform, resolution);
  transformTreePcl(tree_neigh, transform);
  RCLCPP_INFO(rclcpp::get_logger("my_logger"),"tree transformed\n");

  // merge the maps
  merge_maps(tree_merged, tree_sys, tree_neigh, tree_diff);

  //publish the Octomap
  tree_merged->prune();
  if (octo_type == 0)
    octomap_msgs::binaryMapToMsg(*tree_merged, octoMsg);
  else
    octomap_msgs::fullMapToMsg(*tree_merged, octoMsg);
  // msg.header.stamp = ros::Time::now();
  octoMsg.header.frame_id = "map";
  octoMsg.id = "OcTree"; // Required to convert OcTreeStamped into regular OcTree
  RCLCPP_INFO(rclcpp::get_logger("my_logger"),"Publishing alligned map  \n");
  pub_merged->publish(octoMsg);

  //publish the pcl
  sensor_msgs::msg::PointCloud2 merged_pcl=octomapToPcl(octoMsg);
  pub_merged_pcl->publish(merged_pcl);


  if (tree_diff){
    //publish the conflicts
    tree_diff->prune();
    if (octo_type == 0)
      octomap_msgs::binaryMapToMsg(*tree_diff, diffMsg);
    else
      octomap_msgs::fullMapToMsg(*tree_diff, diffMsg);
    // msg.header.stamp = ros::Time::now();
    diffMsg.header.frame_id = "map";
    diffMsg.id = "OcTree"; // Required to convert OcTreeStamped into regular OcTree
    RCLCPP_INFO(rclcpp::get_logger("my_logger"),"Publishing alligned map  \n");
    pub_mapdiffs->publish(diffMsg);
  }

  delete tree_sys;
  delete tree_neigh;

}

int main (int argc, char **argv) {
  rclcpp::init(argc, argv);
  auto merger_node=std::make_shared<OctomapMerger>();
  RCLCPP_INFO(rclcpp::get_logger("my_logger"),"Node initialized \n");

  rclcpp::Rate rate(2);
  while(rclcpp::ok()){
    if (merger_node->alignTrigger){
      //find the icp
      merger_node->align();
      merger_node->alignTrigger=false;
    }
    if((merger_node->myMapNew || merger_node->unityMapNew)&& merger_node->mergeTrigger && not(merger_node->alignTrigger)) {
      RCLCPP_INFO(rclcpp::get_logger("my_logger"),"Both maps are edited \n");
      merger_node->myMapNew = false;
      merger_node->unityMapNew = false;
      merger_node->merge();
    }
    rclcpp::spin_some(merger_node);
    rate.sleep();
  }
  rclcpp::shutdown();
  return 0;
}
