// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from picas_msgs:msg/TestString.idl
// generated code does not contain a copyright notice

#ifndef PICAS_MSGS__MSG__DETAIL__TEST_STRING__STRUCT_HPP_
#define PICAS_MSGS__MSG__DETAIL__TEST_STRING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "picas_msgs/msg/detail/u_time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__picas_msgs__msg__TestString __attribute__((deprecated))
#else
# define DEPRECATED__picas_msgs__msg__TestString __declspec(deprecated)
#endif

namespace picas_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TestString_
{
  using Type = TestString_<ContainerAllocator>;

  explicit TestString_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = "";
    }
  }

  explicit TestString_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = "";
    }
  }

  // field types and members
  using _stamp_type =
    picas_msgs::msg::UTime_<ContainerAllocator>;
  _stamp_type stamp;
  using _data_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__stamp(
    const picas_msgs::msg::UTime_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__data(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    picas_msgs::msg::TestString_<ContainerAllocator> *;
  using ConstRawPtr =
    const picas_msgs::msg::TestString_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<picas_msgs::msg::TestString_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<picas_msgs::msg::TestString_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      picas_msgs::msg::TestString_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<picas_msgs::msg::TestString_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      picas_msgs::msg::TestString_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<picas_msgs::msg::TestString_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<picas_msgs::msg::TestString_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<picas_msgs::msg::TestString_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__picas_msgs__msg__TestString
    std::shared_ptr<picas_msgs::msg::TestString_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__picas_msgs__msg__TestString
    std::shared_ptr<picas_msgs::msg::TestString_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestString_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const TestString_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestString_

// alias to use template instance with default allocator
using TestString =
  picas_msgs::msg::TestString_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace picas_msgs

#endif  // PICAS_MSGS__MSG__DETAIL__TEST_STRING__STRUCT_HPP_
