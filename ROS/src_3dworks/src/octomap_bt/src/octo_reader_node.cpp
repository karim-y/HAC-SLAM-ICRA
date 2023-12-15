#include "rclcpp/rclcpp.hpp"
#include <octomap/octomap.h>
#include <octomap_msgs/msg/octomap.hpp>
#include <octomap/OcTree.h>
#include <octomap_msgs/conversions.h>
#include <std_msgs/msg/string.hpp>
#include <sensor_msgs/msg/point_cloud2.hpp>
#include <pcl_conversions/pcl_conversions.h>
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <pcl/io/ply_io.h>
#include <iostream>
#include <chrono>
#include <functional>
#include <memory>
#include <string>

class OctomapPublisher : public rclcpp::Node 
{
    private:
        // Initialize publishers, subscribers, octree and ROS messages
        rclcpp::Publisher<octomap_msgs::msg::Octomap>::SharedPtr octomap_pub_;
        rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr pcl_pub_;
        rclcpp::Subscription<std_msgs::msg::String>::SharedPtr octomap_sub_;
        std::shared_ptr<octomap::OcTree> octree_;
        octomap_msgs::msg::Octomap octomap_msg_;
        rclcpp::TimerBase::SharedPtr publishTimer_;

        // Function that publishes octomap
        void publishOctomap() {
            octomap_msgs::fullMapToMsg(*octree_, octomap_msg_);
            octomap_msg_.header.stamp = this->now();
            octomap_msg_.binary = true;
            octomap_pub_->publish(octomap_msg_);
            RCLCPP_INFO(this->get_logger(), "Octomap published :D");
        }

        // Function that publishes point cloud
        void publishPointCloud(){
            pcl::PointCloud<pcl::PointXYZ>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZ>);
            if (pcl::io::loadPLYFile<pcl::PointXYZ>("/home/nadimdib/ros2_3dworks/ply_files/aligned_map.ply", *cloud) == -1) {
                RCLCPP_ERROR(this->get_logger(), "Couldn't read PLY file");
                return;
            }
            sensor_msgs::msg::PointCloud2 pcl_msg;
            pcl::toROSMsg(*cloud, pcl_msg);
            pcl_msg.header.frame_id = "map";
            pcl_pub_->publish(pcl_msg);
            RCLCPP_INFO(this->get_logger(), "PointCloud2 published :D");
        }

        // Called upon receiving a message on the /read_trigger_topic
        void stringCallback(const std_msgs::msg::String::SharedPtr msg) {
            std::string message = msg->data;
            if (message == "Load map to Unity"){
                publishOctomap();
                std::this_thread::sleep_for(std::chrono::milliseconds(300));
                publishPointCloud();
            }
        }

    public:
        // Create node, publishers and subscribers, and fix some params for visualization
        OctomapPublisher() : Node("octomap_publisher") {
            RCLCPP_INFO(this->get_logger(), "Node launched successfully");

            octomap_pub_ = this->create_publisher<octomap_msgs::msg::Octomap>("octomap_read", 10);
            pcl_pub_ = this->create_publisher<sensor_msgs::msg::PointCloud2>("pcl_read", 10);
            octomap_sub_ = this->create_subscription<std_msgs::msg::String>("read_trigger_topic", 10,
                std::bind(&OctomapPublisher::stringCallback, this, std::placeholders::_1));

            RCLCPP_INFO(this->get_logger(), "Publishers and subscribers created");

            octree_ = std::make_shared<octomap::OcTree>("/home/nadimdib/ros2_3dworks/bt_files/unityTest.bt");

            octomap_msg_.header.frame_id = "map";
            octomap_msg_.resolution = 0.1;
        }
};

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<OctomapPublisher>());
    rclcpp::shutdown();
    return 0;
}