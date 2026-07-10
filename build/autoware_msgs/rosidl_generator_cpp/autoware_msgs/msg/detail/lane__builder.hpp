// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_msgs:msg/Lane.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MSGS__MSG__DETAIL__LANE__BUILDER_HPP_
#define AUTOWARE_MSGS__MSG__DETAIL__LANE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_msgs/msg/detail/lane__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_msgs
{

namespace msg
{

namespace builder
{

class Init_Lane_waypoints
{
public:
  explicit Init_Lane_waypoints(::autoware_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  ::autoware_msgs::msg::Lane waypoints(::autoware_msgs::msg::Lane::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_msgs::msg::Lane msg_;
};

class Init_Lane_header
{
public:
  Init_Lane_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Lane_waypoints header(::autoware_msgs::msg::Lane::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Lane_waypoints(msg_);
  }

private:
  ::autoware_msgs::msg::Lane msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_msgs::msg::Lane>()
{
  return autoware_msgs::msg::builder::Init_Lane_header();
}

}  // namespace autoware_msgs

#endif  // AUTOWARE_MSGS__MSG__DETAIL__LANE__BUILDER_HPP_
