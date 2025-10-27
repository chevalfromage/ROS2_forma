// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ex4:msg/Sphere.idl
// generated code does not contain a copyright notice

#ifndef EX4__MSG__DETAIL__SPHERE__BUILDER_HPP_
#define EX4__MSG__DETAIL__SPHERE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ex4/msg/detail/sphere__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ex4
{

namespace msg
{

namespace builder
{

class Init_Sphere_radius
{
public:
  explicit Init_Sphere_radius(::ex4::msg::Sphere & msg)
  : msg_(msg)
  {}
  ::ex4::msg::Sphere radius(::ex4::msg::Sphere::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ex4::msg::Sphere msg_;
};

class Init_Sphere_center
{
public:
  Init_Sphere_center()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sphere_radius center(::ex4::msg::Sphere::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_Sphere_radius(msg_);
  }

private:
  ::ex4::msg::Sphere msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ex4::msg::Sphere>()
{
  return ex4::msg::builder::Init_Sphere_center();
}

}  // namespace ex4

#endif  // EX4__MSG__DETAIL__SPHERE__BUILDER_HPP_
