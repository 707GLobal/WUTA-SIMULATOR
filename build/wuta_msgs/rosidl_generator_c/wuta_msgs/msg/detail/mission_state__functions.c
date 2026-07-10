// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wuta_msgs:msg/MissionState.idl
// generated code does not contain a copyright notice
#include "wuta_msgs/msg/detail/mission_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `description`
#include "rosidl_runtime_c/string_functions.h"

bool
wuta_msgs__msg__MissionState__init(wuta_msgs__msg__MissionState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    wuta_msgs__msg__MissionState__fini(msg);
    return false;
  }
  // state
  // mission_mode
  // localization_mode
  // description
  if (!rosidl_runtime_c__String__init(&msg->description)) {
    wuta_msgs__msg__MissionState__fini(msg);
    return false;
  }
  return true;
}

void
wuta_msgs__msg__MissionState__fini(wuta_msgs__msg__MissionState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // state
  // mission_mode
  // localization_mode
  // description
  rosidl_runtime_c__String__fini(&msg->description);
}

bool
wuta_msgs__msg__MissionState__are_equal(const wuta_msgs__msg__MissionState * lhs, const wuta_msgs__msg__MissionState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  // mission_mode
  if (lhs->mission_mode != rhs->mission_mode) {
    return false;
  }
  // localization_mode
  if (lhs->localization_mode != rhs->localization_mode) {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->description), &(rhs->description)))
  {
    return false;
  }
  return true;
}

bool
wuta_msgs__msg__MissionState__copy(
  const wuta_msgs__msg__MissionState * input,
  wuta_msgs__msg__MissionState * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // state
  output->state = input->state;
  // mission_mode
  output->mission_mode = input->mission_mode;
  // localization_mode
  output->localization_mode = input->localization_mode;
  // description
  if (!rosidl_runtime_c__String__copy(
      &(input->description), &(output->description)))
  {
    return false;
  }
  return true;
}

wuta_msgs__msg__MissionState *
wuta_msgs__msg__MissionState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wuta_msgs__msg__MissionState * msg = (wuta_msgs__msg__MissionState *)allocator.allocate(sizeof(wuta_msgs__msg__MissionState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wuta_msgs__msg__MissionState));
  bool success = wuta_msgs__msg__MissionState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wuta_msgs__msg__MissionState__destroy(wuta_msgs__msg__MissionState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wuta_msgs__msg__MissionState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wuta_msgs__msg__MissionState__Sequence__init(wuta_msgs__msg__MissionState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wuta_msgs__msg__MissionState * data = NULL;

  if (size) {
    data = (wuta_msgs__msg__MissionState *)allocator.zero_allocate(size, sizeof(wuta_msgs__msg__MissionState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wuta_msgs__msg__MissionState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wuta_msgs__msg__MissionState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
wuta_msgs__msg__MissionState__Sequence__fini(wuta_msgs__msg__MissionState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      wuta_msgs__msg__MissionState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

wuta_msgs__msg__MissionState__Sequence *
wuta_msgs__msg__MissionState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wuta_msgs__msg__MissionState__Sequence * array = (wuta_msgs__msg__MissionState__Sequence *)allocator.allocate(sizeof(wuta_msgs__msg__MissionState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wuta_msgs__msg__MissionState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wuta_msgs__msg__MissionState__Sequence__destroy(wuta_msgs__msg__MissionState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wuta_msgs__msg__MissionState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wuta_msgs__msg__MissionState__Sequence__are_equal(const wuta_msgs__msg__MissionState__Sequence * lhs, const wuta_msgs__msg__MissionState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wuta_msgs__msg__MissionState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wuta_msgs__msg__MissionState__Sequence__copy(
  const wuta_msgs__msg__MissionState__Sequence * input,
  wuta_msgs__msg__MissionState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wuta_msgs__msg__MissionState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wuta_msgs__msg__MissionState * data =
      (wuta_msgs__msg__MissionState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wuta_msgs__msg__MissionState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wuta_msgs__msg__MissionState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wuta_msgs__msg__MissionState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
