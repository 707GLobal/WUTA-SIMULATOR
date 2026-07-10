# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target autoware_msgs::autoware_msgs
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${autoware_msgs_TARGETS}.
if(autoware_msgs_TARGETS AND NOT TARGET autoware_msgs::autoware_msgs)
  add_library(autoware_msgs::autoware_msgs INTERFACE IMPORTED)
  set_target_properties(autoware_msgs::autoware_msgs PROPERTIES
    INTERFACE_LINK_LIBRARIES "${autoware_msgs_TARGETS}")
endif()
