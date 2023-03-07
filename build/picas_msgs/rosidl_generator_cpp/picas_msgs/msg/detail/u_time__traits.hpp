// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from picas_msgs:msg/UTime.idl
// generated code does not contain a copyright notice

#ifndef PICAS_MSGS__MSG__DETAIL__U_TIME__TRAITS_HPP_
#define PICAS_MSGS__MSG__DETAIL__U_TIME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "picas_msgs/msg/detail/u_time__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace picas_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const UTime & msg,
  std::ostream & out)
{
  out << "{";
  // member: sec
  {
    out << "sec: ";
    rosidl_generator_traits::value_to_yaml(msg.sec, out);
    out << ", ";
  }

  // member: usec
  {
    out << "usec: ";
    rosidl_generator_traits::value_to_yaml(msg.usec, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UTime & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sec: ";
    rosidl_generator_traits::value_to_yaml(msg.sec, out);
    out << "\n";
  }

  // member: usec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "usec: ";
    rosidl_generator_traits::value_to_yaml(msg.usec, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UTime & msg, bool use_flow_style = false)
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
  const picas_msgs::msg::UTime & msg,
  std::ostream & out, size_t indentation = 0)
{
  picas_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use picas_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const picas_msgs::msg::UTime & msg)
{
  return picas_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<picas_msgs::msg::UTime>()
{
  return "picas_msgs::msg::UTime";
}

template<>
inline const char * name<picas_msgs::msg::UTime>()
{
  return "picas_msgs/msg/UTime";
}

template<>
struct has_fixed_size<picas_msgs::msg::UTime>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<picas_msgs::msg::UTime>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<picas_msgs::msg::UTime>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PICAS_MSGS__MSG__DETAIL__U_TIME__TRAITS_HPP_
