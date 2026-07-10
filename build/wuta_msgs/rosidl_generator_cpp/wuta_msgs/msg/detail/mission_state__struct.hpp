// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wuta_msgs:msg/MissionState.idl
// generated code does not contain a copyright notice

#ifndef WUTA_MSGS__MSG__DETAIL__MISSION_STATE__STRUCT_HPP_
#define WUTA_MSGS__MSG__DETAIL__MISSION_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__wuta_msgs__msg__MissionState __attribute__((deprecated))
#else
# define DEPRECATED__wuta_msgs__msg__MissionState __declspec(deprecated)
#endif

namespace wuta_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MissionState_
{
  using Type = MissionState_<ContainerAllocator>;

  explicit MissionState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
      this->mission_mode = 0;
      this->localization_mode = 0;
      this->description = "";
    }
  }

  explicit MissionState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    description(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
      this->mission_mode = 0;
      this->localization_mode = 0;
      this->description = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _state_type =
    uint8_t;
  _state_type state;
  using _mission_mode_type =
    uint8_t;
  _mission_mode_type mission_mode;
  using _localization_mode_type =
    uint8_t;
  _localization_mode_type localization_mode;
  using _description_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _description_type description;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__mission_mode(
    const uint8_t & _arg)
  {
    this->mission_mode = _arg;
    return *this;
  }
  Type & set__localization_mode(
    const uint8_t & _arg)
  {
    this->localization_mode = _arg;
    return *this;
  }
  Type & set__description(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->description = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t IDLE =
    0u;
  static constexpr uint8_t READY =
    1u;
  static constexpr uint8_t INSPECTION =
    2u;
  static constexpr uint8_t EXPLORE =
    3u;
  static constexpr uint8_t MAPPING_DONE =
    4u;
  static constexpr uint8_t RACE =
    5u;
  static constexpr uint8_t FINISH =
    6u;
  static constexpr uint8_t EMERGENCY =
    7u;
  static constexpr uint8_t MISSION_TRACKDRIVE =
    0u;
  static constexpr uint8_t MISSION_SKIDPAD =
    1u;
  static constexpr uint8_t MISSION_ACCELERATION =
    2u;
  static constexpr uint8_t LOC_KISS_ICP =
    0u;
  static constexpr uint8_t LOC_NDT =
    1u;

  // pointer types
  using RawPtr =
    wuta_msgs::msg::MissionState_<ContainerAllocator> *;
  using ConstRawPtr =
    const wuta_msgs::msg::MissionState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wuta_msgs::msg::MissionState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wuta_msgs::msg::MissionState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wuta_msgs::msg::MissionState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wuta_msgs::msg::MissionState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wuta_msgs::msg::MissionState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wuta_msgs::msg::MissionState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wuta_msgs::msg::MissionState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wuta_msgs::msg::MissionState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wuta_msgs__msg__MissionState
    std::shared_ptr<wuta_msgs::msg::MissionState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wuta_msgs__msg__MissionState
    std::shared_ptr<wuta_msgs::msg::MissionState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MissionState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->mission_mode != other.mission_mode) {
      return false;
    }
    if (this->localization_mode != other.localization_mode) {
      return false;
    }
    if (this->description != other.description) {
      return false;
    }
    return true;
  }
  bool operator!=(const MissionState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MissionState_

// alias to use template instance with default allocator
using MissionState =
  wuta_msgs::msg::MissionState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionState_<ContainerAllocator>::IDLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionState_<ContainerAllocator>::READY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionState_<ContainerAllocator>::INSPECTION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionState_<ContainerAllocator>::EXPLORE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionState_<ContainerAllocator>::MAPPING_DONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionState_<ContainerAllocator>::RACE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionState_<ContainerAllocator>::FINISH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionState_<ContainerAllocator>::EMERGENCY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionState_<ContainerAllocator>::MISSION_TRACKDRIVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionState_<ContainerAllocator>::MISSION_SKIDPAD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionState_<ContainerAllocator>::MISSION_ACCELERATION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionState_<ContainerAllocator>::LOC_KISS_ICP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionState_<ContainerAllocator>::LOC_NDT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace wuta_msgs

#endif  // WUTA_MSGS__MSG__DETAIL__MISSION_STATE__STRUCT_HPP_
