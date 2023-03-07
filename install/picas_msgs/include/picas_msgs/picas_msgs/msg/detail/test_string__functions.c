// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from picas_msgs:msg/TestString.idl
// generated code does not contain a copyright notice
#include "picas_msgs/msg/detail/test_string__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "picas_msgs/msg/detail/u_time__functions.h"
// Member `data`
#include "rosidl_runtime_c/string_functions.h"

bool
picas_msgs__msg__TestString__init(picas_msgs__msg__TestString * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!picas_msgs__msg__UTime__init(&msg->stamp)) {
    picas_msgs__msg__TestString__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__init(&msg->data)) {
    picas_msgs__msg__TestString__fini(msg);
    return false;
  }
  return true;
}

void
picas_msgs__msg__TestString__fini(picas_msgs__msg__TestString * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  picas_msgs__msg__UTime__fini(&msg->stamp);
  // data
  rosidl_runtime_c__String__fini(&msg->data);
}

bool
picas_msgs__msg__TestString__are_equal(const picas_msgs__msg__TestString * lhs, const picas_msgs__msg__TestString * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!picas_msgs__msg__UTime__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
picas_msgs__msg__TestString__copy(
  const picas_msgs__msg__TestString * input,
  picas_msgs__msg__TestString * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!picas_msgs__msg__UTime__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

picas_msgs__msg__TestString *
picas_msgs__msg__TestString__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  picas_msgs__msg__TestString * msg = (picas_msgs__msg__TestString *)allocator.allocate(sizeof(picas_msgs__msg__TestString), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(picas_msgs__msg__TestString));
  bool success = picas_msgs__msg__TestString__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
picas_msgs__msg__TestString__destroy(picas_msgs__msg__TestString * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    picas_msgs__msg__TestString__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
picas_msgs__msg__TestString__Sequence__init(picas_msgs__msg__TestString__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  picas_msgs__msg__TestString * data = NULL;

  if (size) {
    data = (picas_msgs__msg__TestString *)allocator.zero_allocate(size, sizeof(picas_msgs__msg__TestString), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = picas_msgs__msg__TestString__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        picas_msgs__msg__TestString__fini(&data[i - 1]);
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
picas_msgs__msg__TestString__Sequence__fini(picas_msgs__msg__TestString__Sequence * array)
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
      picas_msgs__msg__TestString__fini(&array->data[i]);
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

picas_msgs__msg__TestString__Sequence *
picas_msgs__msg__TestString__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  picas_msgs__msg__TestString__Sequence * array = (picas_msgs__msg__TestString__Sequence *)allocator.allocate(sizeof(picas_msgs__msg__TestString__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = picas_msgs__msg__TestString__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
picas_msgs__msg__TestString__Sequence__destroy(picas_msgs__msg__TestString__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    picas_msgs__msg__TestString__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
picas_msgs__msg__TestString__Sequence__are_equal(const picas_msgs__msg__TestString__Sequence * lhs, const picas_msgs__msg__TestString__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!picas_msgs__msg__TestString__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
picas_msgs__msg__TestString__Sequence__copy(
  const picas_msgs__msg__TestString__Sequence * input,
  picas_msgs__msg__TestString__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(picas_msgs__msg__TestString);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    picas_msgs__msg__TestString * data =
      (picas_msgs__msg__TestString *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!picas_msgs__msg__TestString__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          picas_msgs__msg__TestString__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!picas_msgs__msg__TestString__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
