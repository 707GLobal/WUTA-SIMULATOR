// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from wuta_msgs:msg/MissionState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "wuta_msgs/msg/detail/mission_state__rosidl_typesupport_introspection_c.h"
#include "wuta_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "wuta_msgs/msg/detail/mission_state__functions.h"
#include "wuta_msgs/msg/detail/mission_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `description`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void wuta_msgs__msg__MissionState__rosidl_typesupport_introspection_c__MissionState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  wuta_msgs__msg__MissionState__init(message_memory);
}

void wuta_msgs__msg__MissionState__rosidl_typesupport_introspection_c__MissionState_fini_function(void * message_memory)
{
  wuta_msgs__msg__MissionState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember wuta_msgs__msg__MissionState__rosidl_typesupport_introspection_c__MissionState_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wuta_msgs__msg__MissionState, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wuta_msgs__msg__MissionState, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mission_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wuta_msgs__msg__MissionState, mission_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "localization_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wuta_msgs__msg__MissionState, localization_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "description",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wuta_msgs__msg__MissionState, description),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers wuta_msgs__msg__MissionState__rosidl_typesupport_introspection_c__MissionState_message_members = {
  "wuta_msgs__msg",  // message namespace
  "MissionState",  // message name
  5,  // number of fields
  sizeof(wuta_msgs__msg__MissionState),
  wuta_msgs__msg__MissionState__rosidl_typesupport_introspection_c__MissionState_message_member_array,  // message members
  wuta_msgs__msg__MissionState__rosidl_typesupport_introspection_c__MissionState_init_function,  // function to initialize message memory (memory has to be allocated)
  wuta_msgs__msg__MissionState__rosidl_typesupport_introspection_c__MissionState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t wuta_msgs__msg__MissionState__rosidl_typesupport_introspection_c__MissionState_message_type_support_handle = {
  0,
  &wuta_msgs__msg__MissionState__rosidl_typesupport_introspection_c__MissionState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_wuta_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wuta_msgs, msg, MissionState)() {
  wuta_msgs__msg__MissionState__rosidl_typesupport_introspection_c__MissionState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!wuta_msgs__msg__MissionState__rosidl_typesupport_introspection_c__MissionState_message_type_support_handle.typesupport_identifier) {
    wuta_msgs__msg__MissionState__rosidl_typesupport_introspection_c__MissionState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &wuta_msgs__msg__MissionState__rosidl_typesupport_introspection_c__MissionState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
