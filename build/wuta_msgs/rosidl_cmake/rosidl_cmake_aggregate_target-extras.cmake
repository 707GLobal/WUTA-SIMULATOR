# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target wuta_msgs::wuta_msgs
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${wuta_msgs_TARGETS}.
if(wuta_msgs_TARGETS AND NOT TARGET wuta_msgs::wuta_msgs)
  add_library(wuta_msgs::wuta_msgs INTERFACE IMPORTED)
  set_target_properties(wuta_msgs::wuta_msgs PROPERTIES
    INTERFACE_LINK_LIBRARIES "${wuta_msgs_TARGETS}")
endif()
