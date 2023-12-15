import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32
import os;

class PointCounterNode(Node):
    def __init__(self):
        super().__init__('point_counter_node')
        self.get_logger().info("Point Counter Node has been started")

        self.publisher_ = self.create_publisher(Int32, 'point_count_read', 10)
        self.get_logger().info("Publisher to /point_count_read created")

        self.timer_ = self.create_timer(1.0, self.publish_point_count) # Keep publishing every second
        

    def publish_point_count(self):
        # Get point count from aligned_map.ply
        point_count_msg = Int32()
        ply_path = os.path.expanduser('~/ros2_3dworks/ply_files/aligned_map.ply')

        point_count = self.point_counter(ply_path)

        # Publish Point Cloud
        point_count_msg.data = point_count
        self.publisher_.publish(point_count_msg)
        self.get_logger().info("Publishing: '%d'" % point_count_msg.data)
    
    # Function to count points in a .ply file
    def point_counter(self, ply_path):
        self.get_logger().info("Counting points...")
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
            self.get_logger().error("Error while counting points: " + str(e))

def main(args=None):
    rclpy.init(args=args)
    point_counter_node = PointCounterNode()
    rclpy.spin(point_counter_node)
    point_counter_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()