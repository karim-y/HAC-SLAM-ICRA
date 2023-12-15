#!/usr/bin/env python3
import rclpy
import os
import numpy as np
import argparse
import time
from std_msgs.msg import Header
from rclpy.node import Node
from sensor_msgs.msg import PointCloud2, PointField

# Define colors for terminal output (not necessary but bet se3dle nafsiyte <3)
RESET = "\033[0m"
RED = "\033[91m"
GREEN = "\033[92m"
DARK_GREEN = "\033[32m"
YELLOW = "\033[93m"
DARK_MAGENTA = "\033[35m"

class PLYToPointCloudNode(Node):
    def __init__(self, ply_path, batch_size):
        # Launch node
        super().__init__('point_cloud_converter')
        self.get_logger().info(GREEN + "PLY Reader Node has been started" + RESET)

        # Create args to pass
        self.ply_path = ply_path
        self.batch_size = batch_size

        # Create publisher to ros topic
        self.publisher = self.create_publisher(PointCloud2, 'input_pcl', 100)
        self.get_logger().info(GREEN + "Publisher to /input_pcl created" + RESET)

        # Call main function once
        self.reader_function(ply_path, batch_size)
        self.get_logger().warn(YELLOW + "Process has finished. It will not be called again!!" + RESET)

    #  Main function which takes care of reading the points from the .ply and publishing them
    def reader_function(self, ply_path, batch_size):
        try:
            self.get_logger().info(DARK_GREEN + "Reading PLY file..." + RESET)

            # Initialize messages to be populated
            point_cloud_msg_header = Header()
            point_cloud_msg = PointCloud2()

            # Setting header information
            self.get_logger().info(DARK_GREEN + "Fetching Header information..." + RESET)

            point_cloud_msg_header.frame_id = "map"
            point_cloud_msg_header.stamp = self.get_clock().now().to_msg()
            point_cloud_msg.header = point_cloud_msg_header

            self.get_logger().info(GREEN + "Header fetched!" + RESET)

            # Populate PointCloud2 message
            self.get_logger().info(DARK_GREEN + "Fetching Point Cloud data..." + RESET)

            point_cloud_msg.fields = [
                PointField(name='x', offset=0, datatype=PointField.FLOAT32, count=1),
                PointField(name='y', offset=4, datatype=PointField.FLOAT32, count=1),
                PointField(name='z', offset=8, datatype=PointField.FLOAT32, count=1),
            ]
            point_cloud_msg.is_bigendian = False
            point_cloud_msg.point_step = 12  # 4 bytes for each of x, y, z, so 4 * 3 = 12
            point_cloud_msg.is_dense = True

            # Read the PLY file without loading the whole point cloud
            with open(ply_path, 'rb') as ply_file:
                point_count = self.point_counter(ply_path) # Number of points in the cloud
                self.get_logger().info(GREEN + "Point count: " + str(point_count) + RESET)
                points_read_overall = 0 # Tracks the nummber of points read overall
                points_read_batch = 0 # Points in the current batch (will be reset every new batch)
                batch_num = 0 # Number of the batch being read (quality of life)
                reading_vertices = False # To determine when to start reading vertices
                vertices = [] # List to store vertices when needed

                for line in ply_file:
                    line = line.strip()

                    # Check to see when header ends and when header ends change flag to know we are now reading vertices
                    if line == b'end_header':
                        reading_vertices = True
                        continue

                    # Check to see if we are reading vertices and if so, read them and append them to the vertices array
                    if reading_vertices:
                        vertex = list(map(float, line.split()[:3]))
                        vertices.append(vertex)
                        points_read_batch += 1
                        points_read_overall += 1

                        # Check to see if batch full to publish it and reset the batch size along with the vertices array to make it lighter for the memory
                        if points_read_batch == batch_size or points_read_overall == point_count:
                            batch_num += 1
                            self.get_logger().info(DARK_MAGENTA + "Publishing batch "+ str(batch_num) + "..." + RESET)
                            points_read_batch = 0
                            vertices = np.array(vertices)
                            self.publish_batch(vertices, point_cloud_msg_header, point_cloud_msg)
                            vertices = []

            self.get_logger().info(GREEN + "Point cloud published!" + RESET)
            
        except Exception as e:
            self.get_logger().error(RED + "Path to PLY file does not exist: " + str(e) + RESET)

    # Sub function called in the reader_function to publish a batch           
    def publish_batch(self, vertices, point_cloud_msg_header, point_cloud_msg):  
        try:
            # Fill x, y, z data needed for the PointCloud2 message structure
            x_data = vertices[:, 0].astype(np.float32)
            y_data = vertices[:, 1].astype(np.float32)
            z_data = vertices[:, 2].astype(np.float32)

            # Create a new PointCloud2 message for each scan
            scan_point_cloud_msg = PointCloud2()
            scan_point_cloud_msg.header = point_cloud_msg_header
            scan_point_cloud_msg.fields = point_cloud_msg.fields
            scan_point_cloud_msg.is_bigendian = point_cloud_msg.is_bigendian
            scan_point_cloud_msg.point_step = point_cloud_msg.point_step
            scan_point_cloud_msg.is_dense = point_cloud_msg.is_dense

            num_points = len(x_data)
            scan_point_cloud_msg.height = 1
            scan_point_cloud_msg.width = num_points
            scan_point_cloud_msg.row_step = scan_point_cloud_msg.point_step * num_points
            scan_point_cloud_msg.data = np.column_stack((x_data, y_data, z_data)).tobytes()

            # Publish point cloud batch
            self.publisher.publish(scan_point_cloud_msg)

        except Exception as e:
            self.get_logger().error(RED + "Error while reading PLY file: " + str(e) + RESET)

    # Sub function responsible for returning the number of points in the .ply file
    def point_counter(self, ply_path):
        # Count the number of points in the cloud which is the number of lines
        self.get_logger().info(DARK_GREEN + "Counting points..." + RESET)
        try:
            with open(ply_path, 'rb') as ply_file:
                counting_vertices = False
                point_count = 0

                for line in ply_file:
                    line = line.strip()

                    if line == b'end_header':
                        counting_vertices = True
                        continue
                    
                    if counting_vertices:
                        point_count += 1
                
            return point_count
        
        except Exception as e:
            self.get_logger().error(RED + "Error while counting points: " + str(e) + RESET)

def main(args=None):
    # Arguments to be passed in the command line
    parser = argparse.ArgumentParser()
    parser.add_argument('--ply_path', type=str, required=True, help='Path to the PLY file')
    parser.add_argument('--batch_size', type=int, required=True, help='Batch size for publishing points')
    parsed_args, _ = parser.parse_known_args()

    try:
        rclpy.init(args=args)
        node = PLYToPointCloudNode(parsed_args.ply_path, parsed_args.batch_size)
        rclpy.spin(node)

    except KeyboardInterrupt:
        rclpy.shutdown()
        print(RED + "Keyboard Interrupt" + RESET)

if __name__ == '__main__':
    main()

