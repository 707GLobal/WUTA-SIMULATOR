// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_msgs:msg/Command.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MSGS__MSG__DETAIL__COMMAND__STRUCT_H_
#define AUTOWARE_MSGS__MSG__DETAIL__COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Command in the package autoware_msgs.
typedef struct autoware_msgs__msg__Command
{
  double speed;
  double angle;
  int32_t dv_state;
} autoware_msgs__msg__Command;

// Struct for a sequence of autoware_msgs__msg__Command.
typedef struct autoware_msgs__msg__Command__Sequence
{
  autoware_msgs__msg__Command * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_msgs__msg__Command__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_MSGS__MSG__DETAIL__COMMAND__STRUCT_H_
