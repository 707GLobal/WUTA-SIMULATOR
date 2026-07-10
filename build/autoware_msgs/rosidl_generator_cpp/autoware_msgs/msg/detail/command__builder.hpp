// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_msgs:msg/Command.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MSGS__MSG__DETAIL__COMMAND__BUILDER_HPP_
#define AUTOWARE_MSGS__MSG__DETAIL__COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_msgs/msg/detail/command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_msgs
{

namespace msg
{

namespace builder
{

class Init_Command_dv_state
{
public:
  explicit Init_Command_dv_state(::autoware_msgs::msg::Command & msg)
  : msg_(msg)
  {}
  ::autoware_msgs::msg::Command dv_state(::autoware_msgs::msg::Command::_dv_state_type arg)
  {
    msg_.dv_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_msgs::msg::Command msg_;
};

class Init_Command_angle
{
public:
  explicit Init_Command_angle(::autoware_msgs::msg::Command & msg)
  : msg_(msg)
  {}
  Init_Command_dv_state angle(::autoware_msgs::msg::Command::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_Command_dv_state(msg_);
  }

private:
  ::autoware_msgs::msg::Command msg_;
};

class Init_Command_speed
{
public:
  Init_Command_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Command_angle speed(::autoware_msgs::msg::Command::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_Command_angle(msg_);
  }

private:
  ::autoware_msgs::msg::Command msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_msgs::msg::Command>()
{
  return autoware_msgs::msg::builder::Init_Command_speed();
}

}  // namespace autoware_msgs

#endif  // AUTOWARE_MSGS__MSG__DETAIL__COMMAND__BUILDER_HPP_
