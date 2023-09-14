#define BOOST_BIND_NO_PLACEHOLDERS
#include <cstdio>
#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/point_cloud2.hpp>
#include <pcl/filters/voxel_grid.h>
#include <pcl_conversions/pcl_conversions.h>
#include <octomap/octomap.h>
#include <octomap/OcTreeStamped.h>
#include <octomap_msgs/msg/octomap.h>
#include <octomap_msgs/conversions.h>


using std::placeholders::_1;
// convenient typedefs
typedef pcl::PointXYZ PointT;
typedef pcl::PointCloud<PointT> PointCloud;


class PclDownsampler : public rclcpp::Node
{
  public:
    PclDownsampler() : Node("pcl_downsampler")
    {
      pclPublisher= this->create_publisher<sensor_msgs::msg::PointCloud2>("/robot_map_downsampled", 10);
      pclSubscriber= this->create_subscription<octomap_msgs::msg::Octomap>("/octomap_binary_robot", 1, std::bind(&PclDownsampler::pclDownsamplerCallBack, this, _1));
      leafSize=declare_parameter("filterLeafSize" ,0.5);
      octo_type=declare_parameter("octoType" ,0);

    }
        
    rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr pclPublisher;
    rclcpp::Subscription<octomap_msgs::msg::Octomap>::SharedPtr pclSubscriber;
    double leafSize;
    int octo_type;

  private:

    void pclDownsamplerCallBack(const octomap_msgs::msg::Octomap::ConstPtr octo_msg) const
    {
      //convert octomap tp pcl
      octomap::OcTree *tree; 
      if (octo_type == 0){
        tree = (octomap::OcTree*)octomap_msgs::binaryMsgToMap(*octo_msg);
      }
      else {
        tree = (octomap::OcTree*)octomap_msgs::fullMsgToMap(*octo_msg);
      }
      tree->expand();
      sensor_msgs::msg::PointCloud2 pcl;
      PointCloud::Ptr occupiedCells(new PointCloud);

      for (octomap::OcTree::leaf_iterator it = tree->begin_leafs(),
            end = tree->end_leafs(); it != end; ++it)
        {
          // ///
          // if (it.getZ()<-0.3) continue;
          // ///
          if (tree->isNodeOccupied(*it)) {
            occupiedCells->push_back(
                pcl::PointXYZ(it.getX(),
                  it.getY(),
                  it.getZ()
                  )
                );
          }
        }

      pcl::toROSMsg(*occupiedCells, pcl);
      pcl.header.frame_id = "map";


      pcl::PCLPointCloud2* cloud = new pcl::PCLPointCloud2; 
      pcl::PCLPointCloud2ConstPtr cloudPtr(cloud);
      pcl::PCLPointCloud2 cloud_filtered;

      pcl_conversions::toPCL(pcl, *cloud);

      pcl::VoxelGrid<pcl::PCLPointCloud2> voxel_filter;
      voxel_filter.setLeafSize(leafSize,leafSize,leafSize);
      voxel_filter.setInputCloud (cloudPtr);
      voxel_filter.filter (cloud_filtered);

      // Convert to ROS data type
      sensor_msgs::msg::PointCloud2 output;
      pcl_conversions::fromPCL(cloud_filtered, output);

      // Publish the data
      pclPublisher->publish(output);

    }

};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  auto pcl_downsampler=  std::make_shared<PclDownsampler>();
  rclcpp::spin(pcl_downsampler);
  rclcpp::shutdown();
  return 0;
}
