// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from picas_msgs:msg/UTime.idl
// generated code does not contain a copyright notice

#ifndef PICAS_MSGS__MSG__DETAIL__U_TIME__STRUCT_H_
#define PICAS_MSGS__MSG__DETAIL__U_TIME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/UTime in the package picas_msgs.
typedef struct picas_msgs__msg__UTime
{
  int32_t sec;
  uint32_t usec;
} picas_msgs__msg__UTime;

// Struct for a sequence of picas_msgs__msg__UTime.
typedef struct picas_msgs__msg__UTime__Sequence
{
  picas_msgs__msg__UTime * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} picas_msgs__msg__UTime__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PICAS_MSGS__MSG__DETAIL__U_TIME__STRUCT_H_
