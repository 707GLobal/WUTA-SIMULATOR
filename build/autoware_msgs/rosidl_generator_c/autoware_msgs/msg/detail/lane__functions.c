// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_msgs:msg/Lane.idl
// generated code does not contain a copyright notice
#include "autoware_msgs/msg/detail/lane__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `waypoints`
#include "autoware_msgs/msg/detail/waypoint__functions.h"

bool
autoware_msgs__msg__Lane__init(autoware_msgs__msg__Lane * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autoware_msgs__msg__Lane__fini(msg);
    return false;
  }
  // waypoints
  if (!autoware_msgs__msg__Waypoint__Sequence__init(&msg->waypoints, 0)) {
    autoware_msgs__msg__Lane__fini(msg);
    return false;
  }
  return true;
}

void
autoware_msgs__msg__Lane__fini(autoware_msgs__msg__Lane * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // waypoints
  autoware_msgs__msg__Waypoint__Sequence__fini(&msg->waypoints);
}

bool
autoware_msgs__msg__Lane__are_equal(const autoware_msgs__msg__Lane * lhs, const autoware_msgs__msg__Lane * rhs)
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
  // waypoints
  if (!autoware_msgs__msg__Waypoint__Sequence__are_equal(
      &(lhs->waypoints), &(rhs->waypoints)))
  {
    return false;
  }
  return true;
}

bool
autoware_msgs__msg__Lane__copy(
  const autoware_msgs__msg__Lane * input,
  autoware_msgs__msg__Lane * output)
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
  // waypoints
  if (!autoware_msgs__msg__Waypoint__Sequence__copy(
      &(input->waypoints), &(output->waypoints)))
  {
    return false;
  }
  return true;
}

autoware_msgs__msg__Lane *
autoware_msgs__msg__Lane__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_msgs__msg__Lane * msg = (autoware_msgs__msg__Lane *)allocator.allocate(sizeof(autoware_msgs__msg__Lane), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_msgs__msg__Lane));
  bool success = autoware_msgs__msg__Lane__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_msgs__msg__Lane__destroy(autoware_msgs__msg__Lane * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_msgs__msg__Lane__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_msgs__msg__Lane__Sequence__init(autoware_msgs__msg__Lane__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_msgs__msg__Lane * data = NULL;

  if (size) {
    data = (autoware_msgs__msg__Lane *)allocator.zero_allocate(size, sizeof(autoware_msgs__msg__Lane), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_msgs__msg__Lane__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_msgs__msg__Lane__fini(&data[i - 1]);
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
autoware_msgs__msg__Lane__Sequence__fini(autoware_msgs__msg__Lane__Sequence * array)
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
      autoware_msgs__msg__Lane__fini(&array->data[i]);
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

autoware_msgs__msg__Lane__Sequence *
autoware_msgs__msg__Lane__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_msgs__msg__Lane__Sequence * array = (autoware_msgs__msg__Lane__Sequence *)allocator.allocate(sizeof(autoware_msgs__msg__Lane__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_msgs__msg__Lane__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_msgs__msg__Lane__Sequence__destroy(autoware_msgs__msg__Lane__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_msgs__msg__Lane__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_msgs__msg__Lane__Sequence__are_equal(const autoware_msgs__msg__Lane__Sequence * lhs, const autoware_msgs__msg__Lane__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_msgs__msg__Lane__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_msgs__msg__Lane__Sequence__copy(
  const autoware_msgs__msg__Lane__Sequence * input,
  autoware_msgs__msg__Lane__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_msgs__msg__Lane);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_msgs__msg__Lane * data =
      (autoware_msgs__msg__Lane *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_msgs__msg__Lane__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_msgs__msg__Lane__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_msgs__msg__Lane__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
