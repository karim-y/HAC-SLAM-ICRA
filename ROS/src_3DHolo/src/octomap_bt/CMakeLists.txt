cmake_minimum_required(VERSION 3.5)
project(octomap_bt)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(octomap_msgs REQUIRED)
find_package(octomap REQUIRED)
find_package(std_msgs REQUIRED)

include_directories(${OCTOMAP_INCLUDE_DIRS})

add_executable(octomap_bt_reader src/octo_reader_node.cpp)
ament_target_dependencies(octomap_bt_reader rclcpp octomap_msgs octomap std_msgs)

target_link_libraries(octomap_bt_reader ${OCTOMAP_LIBRARIES})

install(TARGETS
  octomap_bt_reader
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
