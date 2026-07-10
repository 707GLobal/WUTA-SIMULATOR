// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wuta_msgs:msg/ConeMap.idl
// generated code does not contain a copyright notice

#ifndef WUTA_MSGS__MSG__DETAIL__CONE_MAP__STRUCT_HPP_
#define WUTA_MSGS__MSG__DETAIL__CONE_MAP__STRUCT_HPP_

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
// Member 'blue_cones'
// Member 'yellow_cones'
// Member 'orange_cones'
// Member 'unknown_cones'
#include "wuta_msgs/msg/detail/cone__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__wuta_msgs__msg__ConeMap __attribute__((deprecated))
#else
# define DEPRECATED__wuta_msgs__msg__ConeMap __declspec(deprecated)
#endif

namespace wuta_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConeMap_
{
  using Type = ConeMap_<ContainerAllocator>;

  explicit ConeMap_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_closed = false;
    }
  }

  explicit ConeMap_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_closed = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _blue_cones_type =
    std::vector<wuta_msgs::msg::Cone_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<wuta_msgs::msg::Cone_<ContainerAllocator>>>;
  _blue_cones_type blue_cones;
  using _yellow_cones_type =
    std::vector<wuta_msgs::msg::Cone_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<wuta_msgs::msg::Cone_<ContainerAllocator>>>;
  _yellow_cones_type yellow_cones;
  using _orange_cones_type =
    std::vector<wuta_msgs::msg::Cone_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<wuta_msgs::msg::Cone_<ContainerAllocator>>>;
  _orange_cones_type orange_cones;
  using _unknown_cones_type =
    std::vector<wuta_msgs::msg::Cone_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<wuta_msgs::msg::Cone_<ContainerAllocator>>>;
  _unknown_cones_type unknown_cones;
  using _is_closed_type =
    bool;
  _is_closed_type is_closed;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__blue_cones(
    const std::vector<wuta_msgs::msg::Cone_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<wuta_msgs::msg::Cone_<ContainerAllocator>>> & _arg)
  {
    this->blue_cones = _arg;
    return *this;
  }
  Type & set__yellow_cones(
    const std::vector<wuta_msgs::msg::Cone_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<wuta_msgs::msg::Cone_<ContainerAllocator>>> & _arg)
  {
    this->yellow_cones = _arg;
    return *this;
  }
  Type & set__orange_cones(
    const std::vector<wuta_msgs::msg::Cone_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<wuta_msgs::msg::Cone_<ContainerAllocator>>> & _arg)
  {
    this->orange_cones = _arg;
    return *this;
  }
  Type & set__unknown_cones(
    const std::vector<wuta_msgs::msg::Cone_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<wuta_msgs::msg::Cone_<ContainerAllocator>>> & _arg)
  {
    this->unknown_cones = _arg;
    return *this;
  }
  Type & set__is_closed(
    const bool & _arg)
  {
    this->is_closed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wuta_msgs::msg::ConeMap_<ContainerAllocator> *;
  using ConstRawPtr =
    const wuta_msgs::msg::ConeMap_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wuta_msgs::msg::ConeMap_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wuta_msgs::msg::ConeMap_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wuta_msgs::msg::ConeMap_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wuta_msgs::msg::ConeMap_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wuta_msgs::msg::ConeMap_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wuta_msgs::msg::ConeMap_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wuta_msgs::msg::ConeMap_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wuta_msgs::msg::ConeMap_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wuta_msgs__msg__ConeMap
    std::shared_ptr<wuta_msgs::msg::ConeMap_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wuta_msgs__msg__ConeMap
    std::shared_ptr<wuta_msgs::msg::ConeMap_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConeMap_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->blue_cones != other.blue_cones) {
      return false;
    }
    if (this->yellow_cones != other.yellow_cones) {
      return false;
    }
    if (this->orange_cones != other.orange_cones) {
      return false;
    }
    if (this->unknown_cones != other.unknown_cones) {
      return false;
    }
    if (this->is_closed != other.is_closed) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConeMap_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConeMap_

// alias to use template instance with default allocator
using ConeMap =
  wuta_msgs::msg::ConeMap_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wuta_msgs

#endif  // WUTA_MSGS__MSG__DETAIL__CONE_MAP__STRUCT_HPP_
