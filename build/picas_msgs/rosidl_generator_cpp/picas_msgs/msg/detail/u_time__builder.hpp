// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from picas_msgs:msg/UTime.idl
// generated code does not contain a copyright notice

#ifndef PICAS_MSGS__MSG__DETAIL__U_TIME__BUILDER_HPP_
#define PICAS_MSGS__MSG__DETAIL__U_TIME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "picas_msgs/msg/detail/u_time__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace picas_msgs
{

namespace msg
{

namespace builder
{

class Init_UTime_usec
{
public:
  explicit Init_UTime_usec(::picas_msgs::msg::UTime & msg)
  : msg_(msg)
  {}
  ::picas_msgs::msg::UTime usec(::picas_msgs::msg::UTime::_usec_type arg)
  {
    msg_.usec = std::move(arg);
    return std::move(msg_);
  }

private:
  ::picas_msgs::msg::UTime msg_;
};

class Init_UTime_sec
{
public:
  Init_UTime_sec()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UTime_usec sec(::picas_msgs::msg::UTime::_sec_type arg)
  {
    msg_.sec = std::move(arg);
    return Init_UTime_usec(msg_);
  }

private:
  ::picas_msgs::msg::UTime msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::picas_msgs::msg::UTime>()
{
  return picas_msgs::msg::builder::Init_UTime_sec();
}

}  // namespace picas_msgs

#endif  // PICAS_MSGS__MSG__DETAIL__U_TIME__BUILDER_HPP_
