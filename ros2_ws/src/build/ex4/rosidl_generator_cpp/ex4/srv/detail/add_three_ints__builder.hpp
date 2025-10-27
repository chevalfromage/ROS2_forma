// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ex4:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

#ifndef EX4__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_
#define EX4__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ex4/srv/detail/add_three_ints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ex4
{

namespace srv
{

namespace builder
{

class Init_AddThreeInts_Request_c
{
public:
  explicit Init_AddThreeInts_Request_c(::ex4::srv::AddThreeInts_Request & msg)
  : msg_(msg)
  {}
  ::ex4::srv::AddThreeInts_Request c(::ex4::srv::AddThreeInts_Request::_c_type arg)
  {
    msg_.c = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ex4::srv::AddThreeInts_Request msg_;
};

class Init_AddThreeInts_Request_b
{
public:
  explicit Init_AddThreeInts_Request_b(::ex4::srv::AddThreeInts_Request & msg)
  : msg_(msg)
  {}
  Init_AddThreeInts_Request_c b(::ex4::srv::AddThreeInts_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_AddThreeInts_Request_c(msg_);
  }

private:
  ::ex4::srv::AddThreeInts_Request msg_;
};

class Init_AddThreeInts_Request_a
{
public:
  Init_AddThreeInts_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddThreeInts_Request_b a(::ex4::srv::AddThreeInts_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_AddThreeInts_Request_b(msg_);
  }

private:
  ::ex4::srv::AddThreeInts_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ex4::srv::AddThreeInts_Request>()
{
  return ex4::srv::builder::Init_AddThreeInts_Request_a();
}

}  // namespace ex4


namespace ex4
{

namespace srv
{

namespace builder
{

class Init_AddThreeInts_Response_sum
{
public:
  Init_AddThreeInts_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ex4::srv::AddThreeInts_Response sum(::ex4::srv::AddThreeInts_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ex4::srv::AddThreeInts_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ex4::srv::AddThreeInts_Response>()
{
  return ex4::srv::builder::Init_AddThreeInts_Response_sum();
}

}  // namespace ex4

#endif  // EX4__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_
