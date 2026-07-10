// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_msgs:msg/Lane.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MSGS__MSG__DETAIL__LANE__STRUCT_H_
#define AUTOWARE_MSGS__MSG__DETAIL__LANE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'waypoints'
#include "autoware_msgs/msg/detail/waypoint__struct.h"

/// Struct defined in msg/Lane in the package autoware_msgs.
typedef struct autoware_msgs__msg__Lane
{
  std_msgs__msg__Header header;
  autoware_msgs__msg__Waypoint__Sequence waypoints;
} autoware_msgs__msg__Lane;

// Struct for a sequence of autoware_msgs__msg__Lane.
typedef struct autoware_msgs__msg__Lane__Sequence
{
  autoware_msgs__msg__Lane * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_msgs__msg__Lane__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_MSGS__MSG__DETAIL__LANE__STRUCT_H_
