// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from picas_msgs:msg/TestString.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "picas_msgs/msg/detail/test_string__rosidl_typesupport_introspection_c.h"
#include "picas_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "picas_msgs/msg/detail/test_string__functions.h"
#include "picas_msgs/msg/detail/test_string__struct.h"


// Include directives for member types
// Member `stamp`
#include "picas_msgs/msg/u_time.h"
// Member `stamp`
#include "picas_msgs/msg/detail/u_time__rosidl_typesupport_introspection_c.h"
// Member `data`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void picas_msgs__msg__TestString__rosidl_typesupport_introspection_c__TestString_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  picas_msgs__msg__TestString__init(message_memory);
}

void picas_msgs__msg__TestString__rosidl_typesupport_introspection_c__TestString_fini_function(void * message_memory)
{
  picas_msgs__msg__TestString__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember picas_msgs__msg__TestString__rosidl_typesupport_introspection_c__TestString_message_member_array[2] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(picas_msgs__msg__TestString, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(picas_msgs__msg__TestString, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers picas_msgs__msg__TestString__rosidl_typesupport_introspection_c__TestString_message_members = {
  "picas_msgs__msg",  // message namespace
  "TestString",  // message name
  2,  // number of fields
  sizeof(picas_msgs__msg__TestString),
  picas_msgs__msg__TestString__rosidl_typesupport_introspection_c__TestString_message_member_array,  // message members
  picas_msgs__msg__TestString__rosidl_typesupport_introspection_c__TestString_init_function,  // function to initialize message memory (memory has to be allocated)
  picas_msgs__msg__TestString__rosidl_typesupport_introspection_c__TestString_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t picas_msgs__msg__TestString__rosidl_typesupport_introspection_c__TestString_message_type_support_handle = {
  0,
  &picas_msgs__msg__TestString__rosidl_typesupport_introspection_c__TestString_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_picas_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, picas_msgs, msg, TestString)() {
  picas_msgs__msg__TestString__rosidl_typesupport_introspection_c__TestString_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, picas_msgs, msg, UTime)();
  if (!picas_msgs__msg__TestString__rosidl_typesupport_introspection_c__TestString_message_type_support_handle.typesupport_identifier) {
    picas_msgs__msg__TestString__rosidl_typesupport_introspection_c__TestString_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &picas_msgs__msg__TestString__rosidl_typesupport_introspection_c__TestString_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
