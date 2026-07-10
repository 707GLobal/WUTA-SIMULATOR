// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_msgs:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MSGS__MSG__DETAIL__WAYPOINT__BUILDER_HPP_
#define AUTOWARE_MSGS__MSG__DETAIL__WAYPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_msgs/msg/detail/waypoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_msgs
{

namespace msg
{

namespace builder
{

class Init_Waypoint_twist
{
public:
  explicit Init_Waypoint_twist(::autoware_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  ::autoware_msgs::msg::Waypoint twist(::autoware_msgs::msg::Waypoint::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_pose
{
public:
  Init_Waypoint_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Waypoint_twist pose(::autoware_msgs::msg::Waypoint::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_Waypoint_twist(msg_);
  }

private:
  ::autoware_msgs::msg::Waypoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_msgs::msg::Waypoint>()
{
  return autoware_msgs::msg::builder::Init_Waypoint_pose();
}

}  // namespace autoware_msgs

#endif  // AUTOWARE_MSGS__MSG__DETAIL__WAYPOINT__BUILDER_HPP_
