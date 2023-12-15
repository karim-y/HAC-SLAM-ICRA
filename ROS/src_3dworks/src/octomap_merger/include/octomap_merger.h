#ifndef OCTOMAP_MERGER_H_
#define OCTOMAP_MERGER_H_

#include <rclcpp/rclcpp.hpp>
#include <eigen3/Eigen/SVD>
#include <std_msgs/msg/header.hpp>
#include <geometry_msgs/msg/twist.hpp>
#include <octomap/octomap.h>
#include <octomap/OcTreeStamped.h>
#include <octomap_msgs/msg/octomap.h>
#include <octomap_msgs/conversions.h>
#include <sensor_msgs/msg/point_cloud2.h>
#include <pcl/common/common.h>
#include <pcl/io/pcd_io.h>
#include <pcl/filters/voxel_grid.h>
#include <pcl/filters/filter.h>
#include <pcl/features/normal_3d.h>
#include <pcl/registration/icp.h>
#include <pcl/registration/icp_nl.h>
#include <pcl/registration/transforms.h>
#include <pcl_conversions/pcl_conversions.h>
#include <fstream>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <list>
#include <cmath>
#include <std_msgs/msg/u_int32.hpp>
//#include "octomap_merger_msgs/msg/octomap_array.hpp"

using std::cout;
using std::endl;
using namespace octomap;
using namespace octomath;

// convenient typedefs
typedef pcl::PointXYZ PointT;
typedef pcl::PointCloud<PointT> PointCloud;
typedef pcl::PointNormal PointNormalT;
typedef pcl::PointCloud<PointNormalT> PointCloudWithNormals;

#define MAXITER 500

// Convert a OcTree or OcTreeStamped to a PointCloud2
template <typename T>
void tree2PointCloud(T *tree, pcl::PointCloud<pcl::PointXYZ>& pclCloud) {
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

bool pointInBBox(pcl::PointXYZ& point,
                 pcl::PointXYZ& bboxMin,
                 pcl::PointXYZ& bboxMax);

Eigen::Matrix4f getICPTransformation(
    pcl::PointCloud<pcl::PointXYZ>& cloud1,
    pcl::PointCloud<pcl::PointXYZ>& cloud2,
    Eigen::Matrix4f& tfEst,
    double mapRes);

void transformTree(OcTree *tree, Eigen::Matrix4f& transform);

void align_maps(OcTree *tree1, OcTree *tree2, point3d translation,
                double roll, double pitch, double yaw, double res);

void merge_maps(OcTreeStamped *tree1, OcTree *tree2, bool full_merge,
                bool replace, bool overwrite, bool free_prioritize);

double build_diff_tree(OcTree *tree1, OcTree *tree2, OcTree *tree_diff);

class OctomapMerger : public rclcpp::Node{
  public:
    // Constructor
    OctomapMerger();
    // Destructor
    ~OctomapMerger();
    // Callbacks
    void callback_myMap(const octomap_msgs::msg::Octomap::SharedPtr msg);
    //void callback_neighborMaps(const octomap_msgs::msg::Octomap::SharedPtr msg);
    void callback_unityMap(const octomap_msgs::msg::Octomap::SharedPtr msg);
    void callback_trans(const geometry_msgs::msg::Twist::SharedPtr msg);
    // Public Methods
    void merge();
    void align();


    // Variables
    bool myMapNew;
    bool unityMapNew;
    bool mergeTrigger;
    bool alignTrigger;
    std::string id;
    std::string type;
    bool full_merge;
    bool free_prioritize;
    bool publish_merged_pcl;
    bool publish_diff_pcl;
    int octo_type;
    double resolution;
    double ground_thresh;
    int map_thresh;
    std::string map_topic;
    std::string neighbors_topic;
    std::string merged_topic;
    std::string map_diffs_topic;
    std::string num_diffs_topic;
    std::string pcl_diff_topic;
    std::string pcl_merged_topic;
    std::string trans_topic_unity;
    std::string trans_topic_merger;
    std::string human_edits_add;
    std::string human_edits_delete;
    std::string edited_map_topic;
    std::string edited_map_topic_pcl;
    std::string merged_topic_pcl;



    Eigen::Matrix4f transform;
    
  /* Private Variables and Methods */
  private:
    std::mutex mtx_;

    octomap_msgs::msg::Octomap myMap; 
    octomap_msgs::msg::Octomap unityMap; 

    octomap::OcTreeStamped *tree_merged; 
    octomap::OcTree *tree_trans;
    octomap::OcTree *tree_sys; 
    octomap::OcTree *tree_neigh; 
    octomap::OcTree *tree_diff; 

    //int num_diffs; 
    std::map<std::string, std::vector<int>> seqs; 

    rclcpp::Subscription<octomap_msgs::msg::Octomap>::SharedPtr sub_mymap;
    rclcpp::Subscription<octomap_msgs::msg::Octomap>::SharedPtr sub_neighbors;
    rclcpp::Subscription<sensor_msgs::msg::PointCloud2>::SharedPtr sub_edits;
    rclcpp::Subscription<sensor_msgs::msg::PointCloud2>::SharedPtr sub_deleted;
    rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr sub_trans;


    rclcpp::Publisher<octomap_msgs::msg::Octomap>::SharedPtr pub_merged;
    rclcpp::Publisher<octomap_msgs::msg::Octomap>::SharedPtr pub_edited;
    rclcpp::Publisher<octomap_msgs::msg::Octomap>::SharedPtr pub_mapdiffs;
    rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr pub_merged_pcl;
    rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr pub_edited_pcl;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr pub_trans;


    void initializeSubscribers();
    void initializePublishers();
    sensor_msgs::msg::PointCloud2 buildPCL(OcTreeStamped *tree);
    template <typename T>
    void tree2PointCloud(T *tree, pcl::PointCloud<pcl::PointXYZ>& pclCloud) ;
    sensor_msgs::msg::PointCloud2 octomapToPcl(octomap_msgs::msg::Octomap myMap);

};

#endif
