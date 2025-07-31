cmake_minimum_required(VERSION 3.0.2)
project(drone_visualization)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  tf
  nav_msgs
  geometry_msgs
  visualization_msgs
  sensor_msgs
)

find_package(armadillo REQUIRED)

include_directories(
  ${catkin_INCLUDE_DIRS}
  ${ARMADILLO_INCLUDE_DIRS}
)

add_executable(drone_node src/drone.cpp)
target_link_libraries(drone_node
  ${catkin_LIBRARIES}
  ${ARMADILLO_LIBRARIES}
)

catkin_package(
  CATKIN_DEPENDS roscpp tf nav_msgs geometry_msgs visualization_msgs sensor_msgs
)
