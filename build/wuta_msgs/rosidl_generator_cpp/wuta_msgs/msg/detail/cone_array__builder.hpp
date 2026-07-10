// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wuta_msgs:msg/ConeArray.idl
// generated code does not contain a copyright notice

#ifndef WUTA_MSGS__MSG__DETAIL__CONE_ARRAY__BUILDER_HPP_
#define WUTA_MSGS__MSG__DETAIL__CONE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wuta_msgs/msg/detail/cone_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wuta_msgs
{

namespace msg
{

namespace builder
{

class Init_ConeArray_cones
{
public:
  explicit Init_ConeArray_cones(::wuta_msgs::msg::ConeArray & msg)
  : msg_(msg)
  {}
  ::wuta_msgs::msg::ConeArray cones(::wuta_msgs::msg::ConeArray::_cones_type arg)
  {
    msg_.cones = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wuta_msgs::msg::ConeArray msg_;
};

class Init_ConeArray_header
{
public:
  Init_ConeArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConeArray_cones header(::wuta_msgs::msg::ConeArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ConeArray_cones(msg_);
  }

private:
  ::wuta_msgs::msg::ConeArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wuta_msgs::msg::ConeArray>()
{
  return wuta_msgs::msg::builder::Init_ConeArray_header();
}

}  // namespace wuta_msgs

#endif  // WUTA_MSGS__MSG__DETAIL__CONE_ARRAY__BUILDER_HPP_
