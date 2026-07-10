// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from wuta_msgs:msg/ConeMap.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "wuta_msgs/msg/detail/cone_map__rosidl_typesupport_introspection_c.h"
#include "wuta_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "wuta_msgs/msg/detail/cone_map__functions.h"
#include "wuta_msgs/msg/detail/cone_map__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `blue_cones`
// Member `yellow_cones`
// Member `orange_cones`
// Member `unknown_cones`
#include "wuta_msgs/msg/cone.h"
// Member `blue_cones`
// Member `yellow_cones`
// Member `orange_cones`
// Member `unknown_cones`
#include "wuta_msgs/msg/detail/cone__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__ConeMap_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  wuta_msgs__msg__ConeMap__init(message_memory);
}

void wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__ConeMap_fini_function(void * message_memory)
{
  wuta_msgs__msg__ConeMap__fini(message_memory);
}

size_t wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__size_function__ConeMap__blue_cones(
  const void * untyped_member)
{
  const wuta_msgs__msg__Cone__Sequence * member =
    (const wuta_msgs__msg__Cone__Sequence *)(untyped_member);
  return member->size;
}

const void * wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__get_const_function__ConeMap__blue_cones(
  const void * untyped_member, size_t index)
{
  const wuta_msgs__msg__Cone__Sequence * member =
    (const wuta_msgs__msg__Cone__Sequence *)(untyped_member);
  return &member->data[index];
}

void * wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__get_function__ConeMap__blue_cones(
  void * untyped_member, size_t index)
{
  wuta_msgs__msg__Cone__Sequence * member =
    (wuta_msgs__msg__Cone__Sequence *)(untyped_member);
  return &member->data[index];
}

void wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__fetch_function__ConeMap__blue_cones(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const wuta_msgs__msg__Cone * item =
    ((const wuta_msgs__msg__Cone *)
    wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__get_const_function__ConeMap__blue_cones(untyped_member, index));
  wuta_msgs__msg__Cone * value =
    (wuta_msgs__msg__Cone *)(untyped_value);
  *value = *item;
}

void wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__assign_function__ConeMap__blue_cones(
  void * untyped_member, size_t index, const void * untyped_value)
{
  wuta_msgs__msg__Cone * item =
    ((wuta_msgs__msg__Cone *)
    wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__get_function__ConeMap__blue_cones(untyped_member, index));
  const wuta_msgs__msg__Cone * value =
    (const wuta_msgs__msg__Cone *)(untyped_value);
  *item = *value;
}

bool wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__resize_function__ConeMap__blue_cones(
  void * untyped_member, size_t size)
{
  wuta_msgs__msg__Cone__Sequence * member =
    (wuta_msgs__msg__Cone__Sequence *)(untyped_member);
  wuta_msgs__msg__Cone__Sequence__fini(member);
  return wuta_msgs__msg__Cone__Sequence__init(member, size);
}

size_t wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__size_function__ConeMap__yellow_cones(
  const void * untyped_member)
{
  const wuta_msgs__msg__Cone__Sequence * member =
    (const wuta_msgs__msg__Cone__Sequence *)(untyped_member);
  return member->size;
}

const void * wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__get_const_function__ConeMap__yellow_cones(
  const void * untyped_member, size_t index)
{
  const wuta_msgs__msg__Cone__Sequence * member =
    (const wuta_msgs__msg__Cone__Sequence *)(untyped_member);
  return &member->data[index];
}

void * wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__get_function__ConeMap__yellow_cones(
  void * untyped_member, size_t index)
{
  wuta_msgs__msg__Cone__Sequence * member =
    (wuta_msgs__msg__Cone__Sequence *)(untyped_member);
  return &member->data[index];
}

void wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__fetch_function__ConeMap__yellow_cones(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const wuta_msgs__msg__Cone * item =
    ((const wuta_msgs__msg__Cone *)
    wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__get_const_function__ConeMap__yellow_cones(untyped_member, index));
  wuta_msgs__msg__Cone * value =
    (wuta_msgs__msg__Cone *)(untyped_value);
  *value = *item;
}

void wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__assign_function__ConeMap__yellow_cones(
  void * untyped_member, size_t index, const void * untyped_value)
{
  wuta_msgs__msg__Cone * item =
    ((wuta_msgs__msg__Cone *)
    wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__get_function__ConeMap__yellow_cones(untyped_member, index));
  const wuta_msgs__msg__Cone * value =
    (const wuta_msgs__msg__Cone *)(untyped_value);
  *item = *value;
}

bool wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__resize_function__ConeMap__yellow_cones(
  void * untyped_member, size_t size)
{
  wuta_msgs__msg__Cone__Sequence * member =
    (wuta_msgs__msg__Cone__Sequence *)(untyped_member);
  wuta_msgs__msg__Cone__Sequence__fini(member);
  return wuta_msgs__msg__Cone__Sequence__init(member, size);
}

size_t wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__size_function__ConeMap__orange_cones(
  const void * untyped_member)
{
  const wuta_msgs__msg__Cone__Sequence * member =
    (const wuta_msgs__msg__Cone__Sequence *)(untyped_member);
  return member->size;
}

const void * wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__get_const_function__ConeMap__orange_cones(
  const void * untyped_member, size_t index)
{
  const wuta_msgs__msg__Cone__Sequence * member =
    (const wuta_msgs__msg__Cone__Sequence *)(untyped_member);
  return &member->data[index];
}

void * wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__get_function__ConeMap__orange_cones(
  void * untyped_member, size_t index)
{
  wuta_msgs__msg__Cone__Sequence * member =
    (wuta_msgs__msg__Cone__Sequence *)(untyped_member);
  return &member->data[index];
}

void wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__fetch_function__ConeMap__orange_cones(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const wuta_msgs__msg__Cone * item =
    ((const wuta_msgs__msg__Cone *)
    wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__get_const_function__ConeMap__orange_cones(untyped_member, index));
  wuta_msgs__msg__Cone * value =
    (wuta_msgs__msg__Cone *)(untyped_value);
  *value = *item;
}

void wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__assign_function__ConeMap__orange_cones(
  void * untyped_member, size_t index, const void * untyped_value)
{
  wuta_msgs__msg__Cone * item =
    ((wuta_msgs__msg__Cone *)
    wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__get_function__ConeMap__orange_cones(untyped_member, index));
  const wuta_msgs__msg__Cone * value =
    (const wuta_msgs__msg__Cone *)(untyped_value);
  *item = *value;
}

bool wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__resize_function__ConeMap__orange_cones(
  void * untyped_member, size_t size)
{
  wuta_msgs__msg__Cone__Sequence * member =
    (wuta_msgs__msg__Cone__Sequence *)(untyped_member);
  wuta_msgs__msg__Cone__Sequence__fini(member);
  return wuta_msgs__msg__Cone__Sequence__init(member, size);
}

size_t wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__size_function__ConeMap__unknown_cones(
  const void * untyped_member)
{
  const wuta_msgs__msg__Cone__Sequence * member =
    (const wuta_msgs__msg__Cone__Sequence *)(untyped_member);
  return member->size;
}

const void * wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__get_const_function__ConeMap__unknown_cones(
  const void * untyped_member, size_t index)
{
  const wuta_msgs__msg__Cone__Sequence * member =
    (const wuta_msgs__msg__Cone__Sequence *)(untyped_member);
  return &member->data[index];
}

void * wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__get_function__ConeMap__unknown_cones(
  void * untyped_member, size_t index)
{
  wuta_msgs__msg__Cone__Sequence * member =
    (wuta_msgs__msg__Cone__Sequence *)(untyped_member);
  return &member->data[index];
}

void wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__fetch_function__ConeMap__unknown_cones(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const wuta_msgs__msg__Cone * item =
    ((const wuta_msgs__msg__Cone *)
    wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__get_const_function__ConeMap__unknown_cones(untyped_member, index));
  wuta_msgs__msg__Cone * value =
    (wuta_msgs__msg__Cone *)(untyped_value);
  *value = *item;
}

void wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__assign_function__ConeMap__unknown_cones(
  void * untyped_member, size_t index, const void * untyped_value)
{
  wuta_msgs__msg__Cone * item =
    ((wuta_msgs__msg__Cone *)
    wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__get_function__ConeMap__unknown_cones(untyped_member, index));
  const wuta_msgs__msg__Cone * value =
    (const wuta_msgs__msg__Cone *)(untyped_value);
  *item = *value;
}

bool wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__resize_function__ConeMap__unknown_cones(
  void * untyped_member, size_t size)
{
  wuta_msgs__msg__Cone__Sequence * member =
    (wuta_msgs__msg__Cone__Sequence *)(untyped_member);
  wuta_msgs__msg__Cone__Sequence__fini(member);
  return wuta_msgs__msg__Cone__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__ConeMap_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wuta_msgs__msg__ConeMap, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "blue_cones",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wuta_msgs__msg__ConeMap, blue_cones),  // bytes offset in struct
    NULL,  // default value
    wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__size_function__ConeMap__blue_cones,  // size() function pointer
    wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__get_const_function__ConeMap__blue_cones,  // get_const(index) function pointer
    wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__get_function__ConeMap__blue_cones,  // get(index) function pointer
    wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__fetch_function__ConeMap__blue_cones,  // fetch(index, &value) function pointer
    wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__assign_function__ConeMap__blue_cones,  // assign(index, value) function pointer
    wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__resize_function__ConeMap__blue_cones  // resize(index) function pointer
  },
  {
    "yellow_cones",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wuta_msgs__msg__ConeMap, yellow_cones),  // bytes offset in struct
    NULL,  // default value
    wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__size_function__ConeMap__yellow_cones,  // size() function pointer
    wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__get_const_function__ConeMap__yellow_cones,  // get_const(index) function pointer
    wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__get_function__ConeMap__yellow_cones,  // get(index) function pointer
    wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__fetch_function__ConeMap__yellow_cones,  // fetch(index, &value) function pointer
    wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__assign_function__ConeMap__yellow_cones,  // assign(index, value) function pointer
    wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__resize_function__ConeMap__yellow_cones  // resize(index) function pointer
  },
  {
    "orange_cones",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wuta_msgs__msg__ConeMap, orange_cones),  // bytes offset in struct
    NULL,  // default value
    wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__size_function__ConeMap__orange_cones,  // size() function pointer
    wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__get_const_function__ConeMap__orange_cones,  // get_const(index) function pointer
    wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__get_function__ConeMap__orange_cones,  // get(index) function pointer
    wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__fetch_function__ConeMap__orange_cones,  // fetch(index, &value) function pointer
    wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__assign_function__ConeMap__orange_cones,  // assign(index, value) function pointer
    wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__resize_function__ConeMap__orange_cones  // resize(index) function pointer
  },
  {
    "unknown_cones",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wuta_msgs__msg__ConeMap, unknown_cones),  // bytes offset in struct
    NULL,  // default value
    wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__size_function__ConeMap__unknown_cones,  // size() function pointer
    wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__get_const_function__ConeMap__unknown_cones,  // get_const(index) function pointer
    wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__get_function__ConeMap__unknown_cones,  // get(index) function pointer
    wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__fetch_function__ConeMap__unknown_cones,  // fetch(index, &value) function pointer
    wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__assign_function__ConeMap__unknown_cones,  // assign(index, value) function pointer
    wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__resize_function__ConeMap__unknown_cones  // resize(index) function pointer
  },
  {
    "is_closed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wuta_msgs__msg__ConeMap, is_closed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__ConeMap_message_members = {
  "wuta_msgs__msg",  // message namespace
  "ConeMap",  // message name
  6,  // number of fields
  sizeof(wuta_msgs__msg__ConeMap),
  wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__ConeMap_message_member_array,  // message members
  wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__ConeMap_init_function,  // function to initialize message memory (memory has to be allocated)
  wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__ConeMap_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__ConeMap_message_type_support_handle = {
  0,
  &wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__ConeMap_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_wuta_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wuta_msgs, msg, ConeMap)() {
  wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__ConeMap_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__ConeMap_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wuta_msgs, msg, Cone)();
  wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__ConeMap_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wuta_msgs, msg, Cone)();
  wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__ConeMap_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wuta_msgs, msg, Cone)();
  wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__ConeMap_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wuta_msgs, msg, Cone)();
  if (!wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__ConeMap_message_type_support_handle.typesupport_identifier) {
    wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__ConeMap_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &wuta_msgs__msg__ConeMap__rosidl_typesupport_introspection_c__ConeMap_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
