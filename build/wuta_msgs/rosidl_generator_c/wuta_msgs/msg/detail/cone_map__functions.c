// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wuta_msgs:msg/ConeMap.idl
// generated code does not contain a copyright notice
#include "wuta_msgs/msg/detail/cone_map__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `blue_cones`
// Member `yellow_cones`
// Member `orange_cones`
// Member `unknown_cones`
#include "wuta_msgs/msg/detail/cone__functions.h"

bool
wuta_msgs__msg__ConeMap__init(wuta_msgs__msg__ConeMap * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    wuta_msgs__msg__ConeMap__fini(msg);
    return false;
  }
  // blue_cones
  if (!wuta_msgs__msg__Cone__Sequence__init(&msg->blue_cones, 0)) {
    wuta_msgs__msg__ConeMap__fini(msg);
    return false;
  }
  // yellow_cones
  if (!wuta_msgs__msg__Cone__Sequence__init(&msg->yellow_cones, 0)) {
    wuta_msgs__msg__ConeMap__fini(msg);
    return false;
  }
  // orange_cones
  if (!wuta_msgs__msg__Cone__Sequence__init(&msg->orange_cones, 0)) {
    wuta_msgs__msg__ConeMap__fini(msg);
    return false;
  }
  // unknown_cones
  if (!wuta_msgs__msg__Cone__Sequence__init(&msg->unknown_cones, 0)) {
    wuta_msgs__msg__ConeMap__fini(msg);
    return false;
  }
  // is_closed
  return true;
}

void
wuta_msgs__msg__ConeMap__fini(wuta_msgs__msg__ConeMap * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // blue_cones
  wuta_msgs__msg__Cone__Sequence__fini(&msg->blue_cones);
  // yellow_cones
  wuta_msgs__msg__Cone__Sequence__fini(&msg->yellow_cones);
  // orange_cones
  wuta_msgs__msg__Cone__Sequence__fini(&msg->orange_cones);
  // unknown_cones
  wuta_msgs__msg__Cone__Sequence__fini(&msg->unknown_cones);
  // is_closed
}

bool
wuta_msgs__msg__ConeMap__are_equal(const wuta_msgs__msg__ConeMap * lhs, const wuta_msgs__msg__ConeMap * rhs)
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
  // blue_cones
  if (!wuta_msgs__msg__Cone__Sequence__are_equal(
      &(lhs->blue_cones), &(rhs->blue_cones)))
  {
    return false;
  }
  // yellow_cones
  if (!wuta_msgs__msg__Cone__Sequence__are_equal(
      &(lhs->yellow_cones), &(rhs->yellow_cones)))
  {
    return false;
  }
  // orange_cones
  if (!wuta_msgs__msg__Cone__Sequence__are_equal(
      &(lhs->orange_cones), &(rhs->orange_cones)))
  {
    return false;
  }
  // unknown_cones
  if (!wuta_msgs__msg__Cone__Sequence__are_equal(
      &(lhs->unknown_cones), &(rhs->unknown_cones)))
  {
    return false;
  }
  // is_closed
  if (lhs->is_closed != rhs->is_closed) {
    return false;
  }
  return true;
}

bool
wuta_msgs__msg__ConeMap__copy(
  const wuta_msgs__msg__ConeMap * input,
  wuta_msgs__msg__ConeMap * output)
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
  // blue_cones
  if (!wuta_msgs__msg__Cone__Sequence__copy(
      &(input->blue_cones), &(output->blue_cones)))
  {
    return false;
  }
  // yellow_cones
  if (!wuta_msgs__msg__Cone__Sequence__copy(
      &(input->yellow_cones), &(output->yellow_cones)))
  {
    return false;
  }
  // orange_cones
  if (!wuta_msgs__msg__Cone__Sequence__copy(
      &(input->orange_cones), &(output->orange_cones)))
  {
    return false;
  }
  // unknown_cones
  if (!wuta_msgs__msg__Cone__Sequence__copy(
      &(input->unknown_cones), &(output->unknown_cones)))
  {
    return false;
  }
  // is_closed
  output->is_closed = input->is_closed;
  return true;
}

wuta_msgs__msg__ConeMap *
wuta_msgs__msg__ConeMap__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wuta_msgs__msg__ConeMap * msg = (wuta_msgs__msg__ConeMap *)allocator.allocate(sizeof(wuta_msgs__msg__ConeMap), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wuta_msgs__msg__ConeMap));
  bool success = wuta_msgs__msg__ConeMap__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wuta_msgs__msg__ConeMap__destroy(wuta_msgs__msg__ConeMap * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wuta_msgs__msg__ConeMap__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wuta_msgs__msg__ConeMap__Sequence__init(wuta_msgs__msg__ConeMap__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wuta_msgs__msg__ConeMap * data = NULL;

  if (size) {
    data = (wuta_msgs__msg__ConeMap *)allocator.zero_allocate(size, sizeof(wuta_msgs__msg__ConeMap), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wuta_msgs__msg__ConeMap__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wuta_msgs__msg__ConeMap__fini(&data[i - 1]);
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
wuta_msgs__msg__ConeMap__Sequence__fini(wuta_msgs__msg__ConeMap__Sequence * array)
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
      wuta_msgs__msg__ConeMap__fini(&array->data[i]);
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

wuta_msgs__msg__ConeMap__Sequence *
wuta_msgs__msg__ConeMap__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wuta_msgs__msg__ConeMap__Sequence * array = (wuta_msgs__msg__ConeMap__Sequence *)allocator.allocate(sizeof(wuta_msgs__msg__ConeMap__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wuta_msgs__msg__ConeMap__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wuta_msgs__msg__ConeMap__Sequence__destroy(wuta_msgs__msg__ConeMap__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wuta_msgs__msg__ConeMap__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wuta_msgs__msg__ConeMap__Sequence__are_equal(const wuta_msgs__msg__ConeMap__Sequence * lhs, const wuta_msgs__msg__ConeMap__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wuta_msgs__msg__ConeMap__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wuta_msgs__msg__ConeMap__Sequence__copy(
  const wuta_msgs__msg__ConeMap__Sequence * input,
  wuta_msgs__msg__ConeMap__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wuta_msgs__msg__ConeMap);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wuta_msgs__msg__ConeMap * data =
      (wuta_msgs__msg__ConeMap *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wuta_msgs__msg__ConeMap__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wuta_msgs__msg__ConeMap__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wuta_msgs__msg__ConeMap__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
