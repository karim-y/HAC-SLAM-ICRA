#include "rclcpp/rclcpp.hpp"
#include <octomap/octomap.h>
#include <octomap/ColorOcTree.h>
#include <octomap_msgs/msg/octomap.hpp>
#include <octomap_msgs/conversions.h>
#include <iostream>
#include <fstream>
#include <chrono>
#include <memory>
#include <sstream>
#include <cmath>

class OctomapConverter : public rclcpp::Node
{
private:
    octomap::ColorOcTree tree;

public:
    OctomapConverter() : Node("octomap_converter"), tree(0.1)
    {
        RCLCPP_INFO(this->get_logger(), "Node launched successfully");

        if (!tree.readBinary("/home/nadimdib/ros2_3dworks/bt_files/warehouse_01.bt"))
        {
            RCLCPP_ERROR(this->get_logger(), "Failed to load octomap");
        }
        else
        {
            // Create an OBJ file to represent the voxelized OctoMap
            std::ofstream objFile("output.obj");

            int vertexCounter = 1;

            // Iterate through the OctoMap
            for (octomap::ColorOcTree::iterator it = tree.begin(); it != tree.end(); ++it)
            {
                if (tree.isNodeOccupied(*it))
                {
                    // Get voxel coordinates
                    octomap::point3d voxel_center = it.getCoordinate();

                    // Get voxel color (not used in the code yet)
                    octomap::ColorOcTreeNode::Color voxel_color = it->getColor();

                    // Define the size of the cube (resolution)
                    double cube_size = 0.1;

                    // Define the vertices, edges, and faces of a cube to represent the voxel
                    objFile << "v " << voxel_center.x() - cube_size << " " << voxel_center.z() - cube_size << " " << voxel_center.y() - cube_size << "\n"; // v1
                    objFile << "v " << voxel_center.x() + cube_size << " " << voxel_center.z() - cube_size << " " << voxel_center.y() - cube_size << "\n"; // v2
                    objFile << "v " << voxel_center.x() + cube_size << " " << voxel_center.z() + cube_size << " " << voxel_center.y() - cube_size << "\n"; // v3
                    objFile << "v " << voxel_center.x() - cube_size << " " << voxel_center.z() + cube_size << " " << voxel_center.y() - cube_size << "\n"; // v4
                    objFile << "v " << voxel_center.x() - cube_size << " " << voxel_center.z() - cube_size << " " << voxel_center.y() + cube_size << "\n"; // v5
                    objFile << "v " << voxel_center.x() + cube_size << " " << voxel_center.z() - cube_size << " " << voxel_center.y() + cube_size << "\n"; // v6
                    objFile << "v " << voxel_center.x() + cube_size << " " << voxel_center.z() + cube_size << " " << voxel_center.y() + cube_size << "\n"; // v7
                    objFile << "v " << voxel_center.x() - cube_size << " " << voxel_center.z() + cube_size << " " << voxel_center.y() + cube_size << "\n"; // v8

                    // Write faces
                    objFile << "f " << vertexCounter << " " << vertexCounter + 1 << " " << vertexCounter + 2 << " " << vertexCounter + 3 << "\n"; // Bottom face
                    objFile << "f " << vertexCounter + 4 << " " << vertexCounter + 5 << " " << vertexCounter + 6 << " " << vertexCounter + 7 << "\n"; // Top face
                    objFile << "f " << vertexCounter << " " << vertexCounter + 1 << " " << vertexCounter + 5 << " " << vertexCounter + 4 << "\n"; // Side face
                    objFile << "f " << vertexCounter + 1 << " " << vertexCounter + 2 << " " << vertexCounter + 6 << " " << vertexCounter + 5 << "\n"; // Side face
                    objFile << "f " << vertexCounter + 2 << " " << vertexCounter + 3 << " " << vertexCounter + 7 << " " << vertexCounter + 6 << "\n"; // Side face
                    objFile << "f " << vertexCounter + 3 << " " << vertexCounter << " " << vertexCounter + 4 << " " << vertexCounter + 7 << "\n"; // Side face

                    vertexCounter += 8;
                }
            }

            objFile.close();
            RCLCPP_WARN(this->get_logger(), "Process finished, it will not run again!!");
        }
    }
};

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<OctomapConverter>());
    rclcpp::shutdown();
    return 0;
}
