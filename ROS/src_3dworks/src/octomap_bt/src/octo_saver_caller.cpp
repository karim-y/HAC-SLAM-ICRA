#include <cstdlib>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include <octomap/octomap.h>
#include <octomap_msgs/msg/octomap.hpp>
#include <octomap/OcTree.h>
#include <octomap_msgs/conversions.h>
#include <sensor_msgs/msg/point_cloud2.hpp>
#include <pcl_conversions/pcl_conversions.h>
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <pcl/io/ply_io.h>

class ServiceCallerNode : public rclcpp::Node
{
    private:
    bool received_save_trigger_ = false;

    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr trigger_sub_;
    rclcpp::Subscription<octomap_msgs::msg::Octomap>::SharedPtr map_sub_;
    rclcpp::Subscription<sensor_msgs::msg::PointCloud2>::SharedPtr pcl_sub_;

    octomap::OcTree* received_map_ = nullptr;

    void triggerCallback(const std_msgs::msg::String::SharedPtr msg)
    {
        if (msg->data == "Save map to Brain") {
            received_save_trigger_ = true;
            if (received_map_) {
                saveOctomapToBinaryFile(received_map_, "/home/nadimdib/ros2_3dworks/bt_files/unityTest.bt");
                RCLCPP_INFO(get_logger(), "Octomap saved to file :D");
            }
            else {
                RCLCPP_ERROR(get_logger(), "No octomap received to save :(");
            }
        }
    }

    void mapCallback(const octomap_msgs::msg::Octomap::SharedPtr msg)
    {
        RCLCPP_WARN(get_logger(), "Octomap received and not saved");
        octomap::AbstractOcTree* tree = octomap_msgs::msgToMap(*msg);
        if (tree) {
            received_map_ = dynamic_cast<octomap::OcTree*>(tree);
        }
        else {
            RCLCPP_ERROR(get_logger(), "Can't save Octomap, missing map or save trigger");
        }
    }

    void pclCallback(const sensor_msgs::msg::PointCloud2::SharedPtr msg)
    {
        if (received_save_trigger_) {
            received_save_trigger_ = false;
            pcl::PointCloud<pcl::PointXYZ> cloud;

            pcl::fromROSMsg(*msg, cloud);

            pcl::io::savePLYFile("/home/nadimdib/ros2_3dworks/ply_files/aligned_map.ply", cloud);
            RCLCPP_INFO(this->get_logger(), "PCL saved to file :D");
        } 
        else {
            RCLCPP_WARN(this->get_logger(), "Can't save PLY, missing map or save trigger");
        }
    }

    void saveOctomapToBinaryFile(octomap::OcTree* tree, const std::string& filename) {
        if (tree) {
            if (tree->writeBinary(filename)) {
                RCLCPP_INFO(get_logger(), "OctoMap saved to %s", filename.c_str());
            } else {
                RCLCPP_ERROR(get_logger(), "Failed to save OctoMap to %s", filename.c_str());
            }
        } else {
            RCLCPP_ERROR(get_logger(), "Invalid OctoMap to save");
        }
    }

    public:
        ServiceCallerNode() : Node("service_caller_node")
        {
            trigger_sub_ = create_subscription<std_msgs::msg::String>(
                "save_trigger_topic", 10, std::bind(&ServiceCallerNode::triggerCallback, this, std::placeholders::_1));

            map_sub_ = create_subscription<octomap_msgs::msg::Octomap>(
                "aligned_map", 10, std::bind(&ServiceCallerNode::mapCallback, this, std::placeholders::_1));

            pcl_sub_ = create_subscription<sensor_msgs::msg::PointCloud2>(
                "aligned_map_pcl", 10, std::bind(&ServiceCallerNode::pclCallback, this, std::placeholders::_1));

            RCLCPP_INFO(get_logger(), "Service caller node launched successfully");
        }

};

int main(int argc, char** argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<ServiceCallerNode>());
    rclcpp::shutdown();
    return 0;
}
