// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wuta_msgs:msg/MissionState.idl
// generated code does not contain a copyright notice

#ifndef WUTA_MSGS__MSG__DETAIL__MISSION_STATE__BUILDER_HPP_
#define WUTA_MSGS__MSG__DETAIL__MISSION_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wuta_msgs/msg/detail/mission_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wuta_msgs
{

namespace msg
{

namespace builder
{

class Init_MissionState_description
{
public:
  explicit Init_MissionState_description(::wuta_msgs::msg::MissionState & msg)
  : msg_(msg)
  {}
  ::wuta_msgs::msg::MissionState description(::wuta_msgs::msg::MissionState::_description_type arg)
  {
    msg_.description = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wuta_msgs::msg::MissionState msg_;
};

class Init_MissionState_localization_mode
{
public:
  explicit Init_MissionState_localization_mode(::wuta_msgs::msg::MissionState & msg)
  : msg_(msg)
  {}
  Init_MissionState_description localization_mode(::wuta_msgs::msg::MissionState::_localization_mode_type arg)
  {
    msg_.localization_mode = std::move(arg);
    return Init_MissionState_description(msg_);
  }

private:
  ::wuta_msgs::msg::MissionState msg_;
};

class Init_MissionState_mission_mode
{
public:
  explicit Init_MissionState_mission_mode(::wuta_msgs::msg::MissionState & msg)
  : msg_(msg)
  {}
  Init_MissionState_localization_mode mission_mode(::wuta_msgs::msg::MissionState::_mission_mode_type arg)
  {
    msg_.mission_mode = std::move(arg);
    return Init_MissionState_localization_mode(msg_);
  }

private:
  ::wuta_msgs::msg::MissionState msg_;
};

class Init_MissionState_state
{
public:
  explicit Init_MissionState_state(::wuta_msgs::msg::MissionState & msg)
  : msg_(msg)
  {}
  Init_MissionState_mission_mode state(::wuta_msgs::msg::MissionState::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_MissionState_mission_mode(msg_);
  }

private:
  ::wuta_msgs::msg::MissionState msg_;
};

class Init_MissionState_header
{
public:
  Init_MissionState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MissionState_state header(::wuta_msgs::msg::MissionState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MissionState_state(msg_);
  }

private:
  ::wuta_msgs::msg::MissionState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wuta_msgs::msg::MissionState>()
{
  return wuta_msgs::msg::builder::Init_MissionState_header();
}

}  // namespace wuta_msgs

#endif  // WUTA_MSGS__MSG__DETAIL__MISSION_STATE__BUILDER_HPP_
