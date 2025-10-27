// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from srv:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef SRV__MSG__DETAIL__NUM__BUILDER_HPP_
#define SRV__MSG__DETAIL__NUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "srv/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace srv
{

namespace msg
{

namespace builder
{

class Init_Num_num
{
public:
  Init_Num_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::srv::msg::Num num(::srv::msg::Num::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::srv::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::srv::msg::Num>()
{
  return srv::msg::builder::Init_Num_num();
}

}  // namespace srv

#endif  // SRV__MSG__DETAIL__NUM__BUILDER_HPP_
