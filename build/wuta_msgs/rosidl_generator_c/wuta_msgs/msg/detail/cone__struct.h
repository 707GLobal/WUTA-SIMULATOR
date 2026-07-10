// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wuta_msgs:msg/Cone.idl
// generated code does not contain a copyright notice

#ifndef WUTA_MSGS__MSG__DETAIL__CONE__STRUCT_H_
#define WUTA_MSGS__MSG__DETAIL__CONE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'COLOR_UNKNOWN'.
enum
{
  wuta_msgs__msg__Cone__COLOR_UNKNOWN = 0
};

/// Constant 'COLOR_BLUE'.
enum
{
  wuta_msgs__msg__Cone__COLOR_BLUE = 1
};

/// Constant 'COLOR_YELLOW'.
enum
{
  wuta_msgs__msg__Cone__COLOR_YELLOW = 2
};

/// Constant 'COLOR_ORANGE'.
enum
{
  wuta_msgs__msg__Cone__COLOR_ORANGE = 3
};

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/Cone in the package wuta_msgs.
/**
  * Single cone detection
  * Color constants
 */
typedef struct wuta_msgs__msg__Cone
{
  /// 3D position in sensor/map frame
  geometry_msgs__msg__Point position;
  /// Cone color (see constants above)
  uint8_t color;
  /// Detection confidence [0.0, 1.0]
  float confidence;
} wuta_msgs__msg__Cone;

// Struct for a sequence of wuta_msgs__msg__Cone.
typedef struct wuta_msgs__msg__Cone__Sequence
{
  wuta_msgs__msg__Cone * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wuta_msgs__msg__Cone__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WUTA_MSGS__MSG__DETAIL__CONE__STRUCT_H_
