// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wuta_msgs:msg/ConeArray.idl
// generated code does not contain a copyright notice

#ifndef WUTA_MSGS__MSG__DETAIL__CONE_ARRAY__STRUCT_H_
#define WUTA_MSGS__MSG__DETAIL__CONE_ARRAY__STRUCT_H_

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
// Member 'cones'
#include "wuta_msgs/msg/detail/cone__struct.h"

/// Struct defined in msg/ConeArray in the package wuta_msgs.
/**
  * Array of cone detections from a single source (LiDAR or camera)
 */
typedef struct wuta_msgs__msg__ConeArray
{
  /// frame_id: sensor frame or map frame
  std_msgs__msg__Header header;
  wuta_msgs__msg__Cone__Sequence cones;
} wuta_msgs__msg__ConeArray;

// Struct for a sequence of wuta_msgs__msg__ConeArray.
typedef struct wuta_msgs__msg__ConeArray__Sequence
{
  wuta_msgs__msg__ConeArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wuta_msgs__msg__ConeArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WUTA_MSGS__MSG__DETAIL__CONE_ARRAY__STRUCT_H_
