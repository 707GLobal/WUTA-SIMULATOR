// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_msgs:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MSGS__MSG__DETAIL__WAYPOINT__STRUCT_H_
#define AUTOWARE_MSGS__MSG__DETAIL__WAYPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist_stamped__struct.h"

/// Struct defined in msg/Waypoint in the package autoware_msgs.
typedef struct autoware_msgs__msg__Waypoint
{
  geometry_msgs__msg__PoseStamped pose;
  geometry_msgs__msg__TwistStamped twist;
} autoware_msgs__msg__Waypoint;

// Struct for a sequence of autoware_msgs__msg__Waypoint.
typedef struct autoware_msgs__msg__Waypoint__Sequence
{
  autoware_msgs__msg__Waypoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_msgs__msg__Waypoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_MSGS__MSG__DETAIL__WAYPOINT__STRUCT_H_
