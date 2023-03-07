// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from picas_msgs:msg/TestString.idl
// generated code does not contain a copyright notice

#ifndef PICAS_MSGS__MSG__DETAIL__TEST_STRING__TRAITS_HPP_
#define PICAS_MSGS__MSG__DETAIL__TEST_STRING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "picas_msgs/msg/detail/test_string__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "picas_msgs/msg/detail/u_time__traits.hpp"

namespace picas_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TestString & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: data
  {
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TestString & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TestString & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace picas_msgs

namespace rosidl_generator_traits
{

[[deprecated("use picas_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const picas_msgs::msg::TestString & msg,
  std::ostream & out, size_t indentation = 0)
{
  picas_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use picas_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const picas_msgs::msg::TestString & msg)
{
  return picas_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<picas_msgs::msg::TestString>()
{
  return "picas_msgs::msg::TestString";
}

template<>
inline const char * name<picas_msgs::msg::TestString>()
{
  return "picas_msgs/msg/TestString";
}

template<>
struct has_fixed_size<picas_msgs::msg::TestString>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<picas_msgs::msg::TestString>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<picas_msgs::msg::TestString>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PICAS_MSGS__MSG__DETAIL__TEST_STRING__TRAITS_HPP_
