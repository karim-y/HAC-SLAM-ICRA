#define BOOST_BIND_NO_PLACEHOLDERS
#include <cstdio>
#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/int32.hpp>
#include <sensor_msgs/msg/point_cloud2.hpp>
#include <pcl/filters/voxel_grid.h>
#include <pcl_conversions/pcl_conversions.h>

using std::placeholders::_1;


class PclFilter : public rclcpp::Node
{
  public:
    PclFilter() : Node("pcl_filter")
    {
      pclPublisher= this->create_publisher<sensor_msgs::msg::PointCloud2>("/pcl_filtered", 100);
      pclSubscriber= this->create_subscription<sensor_msgs::msg::PointCloud2>("input_pcl", 100, std::bind(&PclFilter::pclFilterCallBack, this, _1));
      pointCountPublisher= this->create_publisher<std_msgs::msg::Int32>("/point_count", 10);
      pclPublisher2= this->create_publisher<sensor_msgs::msg::PointCloud2>("/pcl_read_filtered", 100);
      pclSubscriber2= this->create_subscription<sensor_msgs::msg::PointCloud2>("pcl_read", 100, std::bind(&PclFilter::pclFilterCallBack2, this, _1));
      pointCountPublisher2= this->create_publisher<std_msgs::msg::Int32>("/point_count_read", 10);
      leafSize=declare_parameter("filterLeafSize" ,0.1);
    }
        
    rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr pclPublisher;
    rclcpp::Subscription<sensor_msgs::msg::PointCloud2>::SharedPtr pclSubscriber;
    rclcpp::Publisher<std_msgs::msg::Int32>::SharedPtr pointCountPublisher;
    rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr pclPublisher2;
    rclcpp::Subscription<sensor_msgs::msg::PointCloud2>::SharedPtr pclSubscriber2;
    rclcpp::Publisher<std_msgs::msg::Int32>::SharedPtr pointCountPublisher2;
    double leafSize;

  private:
    void pclFilterCallBack(const sensor_msgs::msg::PointCloud2::ConstPtr cloud_msg) const
    {
      // Container for original & filtered data
      pcl::PCLPointCloud2* cloud = new pcl::PCLPointCloud2; 
      pcl::PCLPointCloud2ConstPtr cloudPtr(cloud);
      pcl::PCLPointCloud2 cloud_filtered;

      // Convert to PCL data type
      pcl_conversions::toPCL(*cloud_msg, *cloud);

      pcl::VoxelGrid<pcl::PCLPointCloud2> voxel_filter;
      voxel_filter.setLeafSize(leafSize,leafSize,leafSize);

      // Perform the actual filtering
      voxel_filter.setInputCloud (cloudPtr);
      voxel_filter.filter (cloud_filtered);

      // Convert to ROS data type
      sensor_msgs::msg::PointCloud2 output;
      pcl_conversions::fromPCL(cloud_filtered, output);
      
      // Get the point count
      size_t point_count = cloud_filtered.width * cloud_filtered.height;
      auto point_count_msg = std_msgs::msg::Int32();
      point_count_msg.data = static_cast<int32_t>(point_count);

      // Publish the data
      pclPublisher->publish(output);
      pointCountPublisher2->publish(point_count_msg);
      RCLCPP_INFO(this->get_logger(), "Filtered Input PCL");
    }

    void pclFilterCallBack2(const sensor_msgs::msg::PointCloud2::ConstPtr cloud_msg) const
    {
      // Container for original & filtered data
      pcl::PCLPointCloud2* cloud = new pcl::PCLPointCloud2; 
      pcl::PCLPointCloud2ConstPtr cloudPtr(cloud);
      pcl::PCLPointCloud2 cloud_filtered;

      // Convert to PCL data type
      pcl_conversions::toPCL(*cloud_msg, *cloud);

      pcl::VoxelGrid<pcl::PCLPointCloud2> voxel_filter;
      voxel_filter.setLeafSize(leafSize,leafSize,leafSize);

      // Perform the actual filtering
      voxel_filter.setInputCloud (cloudPtr);
      voxel_filter.filter (cloud_filtered);

      // Convert to ROS data type
      sensor_msgs::msg::PointCloud2 output;
      pcl_conversions::fromPCL(cloud_filtered, output);

      // Get the point count
      size_t point_count = cloud_filtered.width * cloud_filtered.height;
      auto point_count_msg = std_msgs::msg::Int32();
      point_count_msg.data = static_cast<int32_t>(point_count);

      // Publish the data
      pclPublisher2->publish(output);
      pointCountPublisher2->publish(point_count_msg);
      RCLCPP_INFO(this->get_logger(), "Filtered Read PCL");
    }

};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  auto pcl_filter=  std::make_shared<PclFilter>();
  rclcpp::spin(pcl_filter);
  rclcpp::shutdown();
  return 0;
}
