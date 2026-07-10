// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_msgs:msg/Command.idl
// generated code does not contain a copyright notice
#include "autoware_msgs/msg/detail/command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
autoware_msgs__msg__Command__init(autoware_msgs__msg__Command * msg)
{
  if (!msg) {
    return false;
  }
  // speed
  // angle
  // dv_state
  return true;
}

void
autoware_msgs__msg__Command__fini(autoware_msgs__msg__Command * msg)
{
  if (!msg) {
    return;
  }
  // speed
  // angle
  // dv_state
}

bool
autoware_msgs__msg__Command__are_equal(const autoware_msgs__msg__Command * lhs, const autoware_msgs__msg__Command * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // angle
  if (lhs->angle != rhs->angle) {
    return false;
  }
  // dv_state
  if (lhs->dv_state != rhs->dv_state) {
    return false;
  }
  return true;
}

bool
autoware_msgs__msg__Command__copy(
  const autoware_msgs__msg__Command * input,
  autoware_msgs__msg__Command * output)
{
  if (!input || !output) {
    return false;
  }
  // speed
  output->speed = input->speed;
  // angle
  output->angle = input->angle;
  // dv_state
  output->dv_state = input->dv_state;
  return true;
}

autoware_msgs__msg__Command *
autoware_msgs__msg__Command__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_msgs__msg__Command * msg = (autoware_msgs__msg__Command *)allocator.allocate(sizeof(autoware_msgs__msg__Command), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_msgs__msg__Command));
  bool success = autoware_msgs__msg__Command__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_msgs__msg__Command__destroy(autoware_msgs__msg__Command * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_msgs__msg__Command__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_msgs__msg__Command__Sequence__init(autoware_msgs__msg__Command__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_msgs__msg__Command * data = NULL;

  if (size) {
    data = (autoware_msgs__msg__Command *)allocator.zero_allocate(size, sizeof(autoware_msgs__msg__Command), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_msgs__msg__Command__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_msgs__msg__Command__fini(&data[i - 1]);
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
autoware_msgs__msg__Command__Sequence__fini(autoware_msgs__msg__Command__Sequence * array)
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
      autoware_msgs__msg__Command__fini(&array->data[i]);
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

autoware_msgs__msg__Command__Sequence *
autoware_msgs__msg__Command__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_msgs__msg__Command__Sequence * array = (autoware_msgs__msg__Command__Sequence *)allocator.allocate(sizeof(autoware_msgs__msg__Command__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_msgs__msg__Command__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_msgs__msg__Command__Sequence__destroy(autoware_msgs__msg__Command__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_msgs__msg__Command__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_msgs__msg__Command__Sequence__are_equal(const autoware_msgs__msg__Command__Sequence * lhs, const autoware_msgs__msg__Command__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_msgs__msg__Command__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_msgs__msg__Command__Sequence__copy(
  const autoware_msgs__msg__Command__Sequence * input,
  autoware_msgs__msg__Command__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_msgs__msg__Command);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_msgs__msg__Command * data =
      (autoware_msgs__msg__Command *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_msgs__msg__Command__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_msgs__msg__Command__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_msgs__msg__Command__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
