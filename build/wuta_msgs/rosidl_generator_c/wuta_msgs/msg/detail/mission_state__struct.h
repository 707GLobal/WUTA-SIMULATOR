// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wuta_msgs:msg/MissionState.idl
// generated code does not contain a copyright notice

#ifndef WUTA_MSGS__MSG__DETAIL__MISSION_STATE__STRUCT_H_
#define WUTA_MSGS__MSG__DETAIL__MISSION_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'IDLE'.
/**
  * System initializing
 */
enum
{
  wuta_msgs__msg__MissionState__IDLE = 0
};

/// Constant 'READY'.
/**
  * All sensors online, waiting for start
 */
enum
{
  wuta_msgs__msg__MissionState__READY = 1
};

/// Constant 'INSPECTION'.
/**
  * Vehicle inspection: sensor check + VCU CAN test
 */
enum
{
  wuta_msgs__msg__MissionState__INSPECTION = 2
};

/// Constant 'EXPLORE'.
/**
  * First lap: KISS-ICP + building cone map
 */
enum
{
  wuta_msgs__msg__MissionState__EXPLORE = 3
};

/// Constant 'MAPPING_DONE'.
/**
  * Map complete, switching to race mode
 */
enum
{
  wuta_msgs__msg__MissionState__MAPPING_DONE = 4
};

/// Constant 'RACE'.
/**
  * High-speed: NDT map matching
 */
enum
{
  wuta_msgs__msg__MissionState__RACE = 5
};

/// Constant 'FINISH'.
/**
  * Mission complete
 */
enum
{
  wuta_msgs__msg__MissionState__FINISH = 6
};

/// Constant 'EMERGENCY'.
/**
  * E-stop / fault
 */
enum
{
  wuta_msgs__msg__MissionState__EMERGENCY = 7
};

/// Constant 'MISSION_TRACKDRIVE'.
/**
  * Mission mode constants (which event)
 */
enum
{
  wuta_msgs__msg__MissionState__MISSION_TRACKDRIVE = 0
};

/// Constant 'MISSION_SKIDPAD'.
enum
{
  wuta_msgs__msg__MissionState__MISSION_SKIDPAD = 1
};

/// Constant 'MISSION_ACCELERATION'.
enum
{
  wuta_msgs__msg__MissionState__MISSION_ACCELERATION = 2
};

/// Constant 'LOC_KISS_ICP'.
/**
  * Localization mode constants
 */
enum
{
  wuta_msgs__msg__MissionState__LOC_KISS_ICP = 0
};

/// Constant 'LOC_NDT'.
enum
{
  wuta_msgs__msg__MissionState__LOC_NDT = 1
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'description'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MissionState in the package wuta_msgs.
/**
  * Mission and system state for Mission Manager
  * State constants
 */
typedef struct wuta_msgs__msg__MissionState
{
  std_msgs__msg__Header header;
  uint8_t state;
  uint8_t mission_mode;
  uint8_t localization_mode;
  rosidl_runtime_c__String description;
} wuta_msgs__msg__MissionState;

// Struct for a sequence of wuta_msgs__msg__MissionState.
typedef struct wuta_msgs__msg__MissionState__Sequence
{
  wuta_msgs__msg__MissionState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wuta_msgs__msg__MissionState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WUTA_MSGS__MSG__DETAIL__MISSION_STATE__STRUCT_H_
