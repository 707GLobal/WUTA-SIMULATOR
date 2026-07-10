// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wuta_msgs:msg/ConeMap.idl
// generated code does not contain a copyright notice

#ifndef WUTA_MSGS__MSG__DETAIL__CONE_MAP__BUILDER_HPP_
#define WUTA_MSGS__MSG__DETAIL__CONE_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wuta_msgs/msg/detail/cone_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wuta_msgs
{

namespace msg
{

namespace builder
{

class Init_ConeMap_is_closed
{
public:
  explicit Init_ConeMap_is_closed(::wuta_msgs::msg::ConeMap & msg)
  : msg_(msg)
  {}
  ::wuta_msgs::msg::ConeMap is_closed(::wuta_msgs::msg::ConeMap::_is_closed_type arg)
  {
    msg_.is_closed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wuta_msgs::msg::ConeMap msg_;
};

class Init_ConeMap_unknown_cones
{
public:
  explicit Init_ConeMap_unknown_cones(::wuta_msgs::msg::ConeMap & msg)
  : msg_(msg)
  {}
  Init_ConeMap_is_closed unknown_cones(::wuta_msgs::msg::ConeMap::_unknown_cones_type arg)
  {
    msg_.unknown_cones = std::move(arg);
    return Init_ConeMap_is_closed(msg_);
  }

private:
  ::wuta_msgs::msg::ConeMap msg_;
};

class Init_ConeMap_orange_cones
{
public:
  explicit Init_ConeMap_orange_cones(::wuta_msgs::msg::ConeMap & msg)
  : msg_(msg)
  {}
  Init_ConeMap_unknown_cones orange_cones(::wuta_msgs::msg::ConeMap::_orange_cones_type arg)
  {
    msg_.orange_cones = std::move(arg);
    return Init_ConeMap_unknown_cones(msg_);
  }

private:
  ::wuta_msgs::msg::ConeMap msg_;
};

class Init_ConeMap_yellow_cones
{
public:
  explicit Init_ConeMap_yellow_cones(::wuta_msgs::msg::ConeMap & msg)
  : msg_(msg)
  {}
  Init_ConeMap_orange_cones yellow_cones(::wuta_msgs::msg::ConeMap::_yellow_cones_type arg)
  {
    msg_.yellow_cones = std::move(arg);
    return Init_ConeMap_orange_cones(msg_);
  }

private:
  ::wuta_msgs::msg::ConeMap msg_;
};

class Init_ConeMap_blue_cones
{
public:
  explicit Init_ConeMap_blue_cones(::wuta_msgs::msg::ConeMap & msg)
  : msg_(msg)
  {}
  Init_ConeMap_yellow_cones blue_cones(::wuta_msgs::msg::ConeMap::_blue_cones_type arg)
  {
    msg_.blue_cones = std::move(arg);
    return Init_ConeMap_yellow_cones(msg_);
  }

private:
  ::wuta_msgs::msg::ConeMap msg_;
};

class Init_ConeMap_header
{
public:
  Init_ConeMap_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConeMap_blue_cones header(::wuta_msgs::msg::ConeMap::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ConeMap_blue_cones(msg_);
  }

private:
  ::wuta_msgs::msg::ConeMap msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wuta_msgs::msg::ConeMap>()
{
  return wuta_msgs::msg::builder::Init_ConeMap_header();
}

}  // namespace wuta_msgs

#endif  // WUTA_MSGS__MSG__DETAIL__CONE_MAP__BUILDER_HPP_
