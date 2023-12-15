#include <rclcpp/rclcpp.hpp>
#include <cstdlib>

class RestartService : public rclcpp::Node
{
  public:
    RestartService() : Node("restart_service")
    {
      restartService = this->create_service<std_srvs::srv::Empty>("restart", std::bind(&RestartService::restartServiceCallBack, this, _1, _2, _3));
    }
        
    rclcpp::Service<std_srvs::srv::Empty>::SharedPtr restartService;

  private:
    void restartServiceCallBack(const std::shared_ptr<std_srvs::srv::Empty::Request> request, std::shared_ptr<std_srvs::srv::Empty::Response> response, const std::shared_ptr<rmw_request_id_t> request_header) const
    {
      RCLCPP_INFO(this->get_logger(), "Restarting the node");
      rclcpp::shutdown();
      std::system("ros2 run restart_server restart_server");
    }
};
