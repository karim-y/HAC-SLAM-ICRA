#include <cstdio>
#include <rclcpp/rclcpp.hpp>
#include <octomap_msgs/msg/octomap.hpp>
#include <octomap/octomap.h>
#include <octomap_msgs/conversions.h>
#include <sensor_msgs/msg/point_cloud2.hpp>
#include <pcl/common/common.h>
#include <pcl/io/pcd_io.h>
#include <pcl_conversions/pcl_conversions.h>



using namespace octomap;
typedef pcl::PointXYZ PointT;
typedef pcl::PointCloud<PointT> PointCloud;


// class Converter : public rclcpp::Node
// {
//   public:
//     Converter() : Node("converter")
//     {
//       pclPublisher_ = this->create_publisher<octomap_msgs::msg::Octomap>("/map_filtered", 10);
//       pclSubscriber= this->create_subscription<sensor_msgs::msg::PointCloud2>("/map", 1, std::bind(&PclFilter::pclFilterCallBack, this, _1));

//     }
//     bool repeat=false;
//     octomap_msgs::msg::Octomap myMap; 
        
//     rclcpp::Publisher<octomap_msgs::msg::Octomap>::SharedPtr publisher_;
//     rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr pclPublisher_;

//   void pclFilterCallBack(const sensor_msgs::msg::PointCloud2::ConstPtr cloud_msg) const{

//   }


//   void pclToOctomap() {
//     //double treeRes = tree->getResolution();
//     double resolution=0.05;
//     OcTree* tree = new OcTree(resolution);
//     // allocate a vector of points
//     std::vector<point3d> points;

//     // make 8 points to make a map bounding box, performing the tf on them
//     // to get the range of values in the tree map
//     points.push_back(point3d(0.5,0.1,0.0));
//     points.push_back(point3d(1.05,2.5,2));

//     // points.push_back(point3d(minX,minY,maxZ));
//     // points.push_back(point3d(minX,maxY,maxZ));
//     // points.push_back(point3d(maxX,maxY,maxZ));

//     // transform the points
//     for (unsigned i=0; i < points.size(); i++) {
//       OcTreeKey destVoxel=  tree->coordToKey(point3d(points[i](0), points[i](1), points[i](2)));
//       OcTreeNode *newNode = tree->setNodeValue(destVoxel, octomap::logodds(1));
//     }
//     tree->prune();
//     octomap_msgs::fullMapToMsg(*tree, myMap);
//     // msg.header.stamp = ros::Time::now();
//     myMap.header.frame_id = "map";
//     myMap.id = "OcTree"; // Required to convert OcTreeStamped into regular OcTree
//     RCLCPP_INFO(rclcpp::get_logger("my_logger"),"Publishing alligned map  \n");
//     std::cout << myMap.data.size()<<std::endl;
//     publisher_->publish(myMap);
//     tree->clear();
//   }

//   // Convert a OcTree or OcTreeStamped to a PointCloud2
//   template <typename T>
//   void tree2PointCloud(T *tree, pcl::PointCloud<pcl::PointXYZ>& pclCloud) {
//     for (typename T::leaf_iterator it = tree->begin_leafs(),
//         end = tree->end_leafs(); it != end; ++it)
//     {
//       if (tree->isNodeOccupied(*it)) {
//         pclCloud.push_back(
//             pcl::PointXYZ(it.getX(),
//               it.getY(),
//               it.getZ()
//               )
//             );
//       }
//     }
//   }

//   sensor_msgs::msg::PointCloud2 octomapToPcl() {
//   OcTree* tree = (octomap::OcTree*)octomap_msgs::fullMsgToMap(myMap);
//   tree->expand();
//   sensor_msgs::msg::PointCloud2 pcl;
//   PointCloud::Ptr occupiedCells(new PointCloud);
//   tree2PointCloud(tree, *occupiedCells);
//   pcl::toROSMsg(*occupiedCells, pcl);
//   // pcl.header.stamp = ros::Time::now();
//   pcl.header.frame_id = "map";
//   pclPublisher_->publish(pcl);
//   return pcl;
//   }


// };

int main(int argc, char ** argv)
{
  // rclcpp::init(argc, argv);
  // auto converter=  std::make_shared<Converter>();
  // rclcpp::Rate rate(0.5);
  //   while(rclcpp::ok()){
  //   converter->pclToOctomap();
  //   converter->octomapToPcl();
  //   rclcpp::spin_some(converter);
  //   rate.sleep();
  // }
  // rclcpp::shutdown();
  return 0;
}
