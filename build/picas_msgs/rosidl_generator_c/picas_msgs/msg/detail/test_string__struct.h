// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from picas_msgs:msg/TestString.idl
// generated code does not contain a copyright notice

#ifndef PICAS_MSGS__MSG__DETAIL__TEST_STRING__STRUCT_H_
#define PICAS_MSGS__MSG__DETAIL__TEST_STRING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "picas_msgs/msg/detail/u_time__struct.h"
// Member 'data'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TestString in the package picas_msgs.
typedef struct picas_msgs__msg__TestString
{
  picas_msgs__msg__UTime stamp;
  rosidl_runtime_c__String data;
} picas_msgs__msg__TestString;

// Struct for a sequence of picas_msgs__msg__TestString.
typedef struct picas_msgs__msg__TestString__Sequence
{
  picas_msgs__msg__TestString * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} picas_msgs__msg__TestString__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PICAS_MSGS__MSG__DETAIL__TEST_STRING__STRUCT_H_
