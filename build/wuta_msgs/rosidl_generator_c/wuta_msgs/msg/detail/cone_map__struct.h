// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wuta_msgs:msg/ConeMap.idl
// generated code does not contain a copyright notice

#ifndef WUTA_MSGS__MSG__DETAIL__CONE_MAP__STRUCT_H_
#define WUTA_MSGS__MSG__DETAIL__CONE_MAP__STRUCT_H_

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
// Member 'blue_cones'
// Member 'yellow_cones'
// Member 'orange_cones'
// Member 'unknown_cones'
#include "wuta_msgs/msg/detail/cone__struct.h"

/// Struct defined in msg/ConeMap in the package wuta_msgs.
/**
  * Global cone map in map frame, organized by color
 */
typedef struct wuta_msgs__msg__ConeMap
{
  /// frame_id: "map"
  std_msgs__msg__Header header;
  /// Left boundary (blue)
  wuta_msgs__msg__Cone__Sequence blue_cones;
  /// Right boundary (yellow)
  wuta_msgs__msg__Cone__Sequence yellow_cones;
  /// Start/finish line
  wuta_msgs__msg__Cone__Sequence orange_cones;
  /// Unclassified
  wuta_msgs__msg__Cone__Sequence unknown_cones;
  /// True when track loop is closed
  bool is_closed;
} wuta_msgs__msg__ConeMap;

// Struct for a sequence of wuta_msgs__msg__ConeMap.
typedef struct wuta_msgs__msg__ConeMap__Sequence
{
  wuta_msgs__msg__ConeMap * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wuta_msgs__msg__ConeMap__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WUTA_MSGS__MSG__DETAIL__CONE_MAP__STRUCT_H_
