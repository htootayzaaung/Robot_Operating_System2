// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from client_server:msg/Sphere.idl
// generated code does not contain a copyright notice

#ifndef CLIENT_SERVER__MSG__DETAIL__SPHERE__BUILDER_HPP_
#define CLIENT_SERVER__MSG__DETAIL__SPHERE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "client_server/msg/detail/sphere__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace client_server
{

namespace msg
{

namespace builder
{

class Init_Sphere_radius
{
public:
  explicit Init_Sphere_radius(::client_server::msg::Sphere & msg)
  : msg_(msg)
  {}
  ::client_server::msg::Sphere radius(::client_server::msg::Sphere::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::client_server::msg::Sphere msg_;
};

class Init_Sphere_center
{
public:
  Init_Sphere_center()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sphere_radius center(::client_server::msg::Sphere::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_Sphere_radius(msg_);
  }

private:
  ::client_server::msg::Sphere msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::client_server::msg::Sphere>()
{
  return client_server::msg::builder::Init_Sphere_center();
}

}  // namespace client_server

#endif  // CLIENT_SERVER__MSG__DETAIL__SPHERE__BUILDER_HPP_
