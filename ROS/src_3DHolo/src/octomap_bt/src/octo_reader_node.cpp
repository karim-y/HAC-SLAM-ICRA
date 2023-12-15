#include "rclcpp/rclcpp.hpp"
#include <octomap/octomap.h>
#include <octomap_msgs/msg/octomap.hpp>
#include <octomap/OcTree.h>
#include <octomap_msgs/conversions.h>
#include <std_msgs/msg/string.hpp>
#include <iostream>
#include <chrono>
#include <functional>
#include <memory>
#include <string>

class OctomapPublisher : public rclcpp::Node 
{
    private:
        rclcpp::Publisher<octomap_msgs::msg::Octomap>::SharedPtr octomap_pub_;
        rclcpp::Subscription<std_msgs::msg::String>::SharedPtr octomap_sub_;
        std::shared_ptr<octomap::OcTree> octree_;
        octomap_msgs::msg::Octomap octomap_msg_;
        rclcpp::TimerBase::SharedPtr publishTimer_;

        void publishOctomap() {
            octomap_msgs::fullMapToMsg(*octree_, octomap_msg_);
            octomap_msg_.header.stamp = this->now();
            octomap_pub_->publish(octomap_msg_);
            std::cout << "Published octomap ya nadim" << std::endl;
        }

        void stringCallback(const std_msgs::msg::String::SharedPtr msg) {
            std::string message = msg->data;
            if (message == "Load map into Unity"){
                publishOctomap();
            }
        }

    public:
        OctomapPublisher() : Node("octomap_publisher") {
            octomap_pub_ = this->create_publisher<octomap_msgs::msg::Octomap>("octomap", 10);
            octomap_sub_ = this->create_subscription<std_msgs::msg::String>("okay_publish", 10,
                std::bind(&OctomapPublisher::stringCallback, this, std::placeholders::_1));

            octree_ = std::make_shared<octomap::OcTree>("/home/nadimdib/ros2_3DHolo/warehouse.bt");

            octomap_msg_.header.frame_id = "map";
            octomap_msg_.resolution = 0.1;

            //publishTimer_ = this->create_wall_timer(std::chrono::milliseconds(1000), std::bind(&OctomapPublisher::publishOctomap, this));
        }
};

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<OctomapPublisher>());
    rclcpp::shutdown();
    return 0;
}