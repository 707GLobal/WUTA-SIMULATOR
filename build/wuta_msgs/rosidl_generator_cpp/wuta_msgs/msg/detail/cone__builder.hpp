// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wuta_msgs:msg/Cone.idl
// generated code does not contain a copyright notice

#ifndef WUTA_MSGS__MSG__DETAIL__CONE__BUILDER_HPP_
#define WUTA_MSGS__MSG__DETAIL__CONE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wuta_msgs/msg/detail/cone__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wuta_msgs
{

namespace msg
{

namespace builder
{

class Init_Cone_confidence
{
public:
  explicit Init_Cone_confidence(::wuta_msgs::msg::Cone & msg)
  : msg_(msg)
  {}
  ::wuta_msgs::msg::Cone confidence(::wuta_msgs::msg::Cone::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wuta_msgs::msg::Cone msg_;
};

class Init_Cone_color
{
public:
  explicit Init_Cone_color(::wuta_msgs::msg::Cone & msg)
  : msg_(msg)
  {}
  Init_Cone_confidence color(::wuta_msgs::msg::Cone::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_Cone_confidence(msg_);
  }

private:
  ::wuta_msgs::msg::Cone msg_;
};

class Init_Cone_position
{
public:
  Init_Cone_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Cone_color position(::wuta_msgs::msg::Cone::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_Cone_color(msg_);
  }

private:
  ::wuta_msgs::msg::Cone msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wuta_msgs::msg::Cone>()
{
  return wuta_msgs::msg::builder::Init_Cone_position();
}

}  // namespace wuta_msgs

#endif  // WUTA_MSGS__MSG__DETAIL__CONE__BUILDER_HPP_
