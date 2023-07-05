// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from client_server:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef CLIENT_SERVER__MSG__DETAIL__NUM__BUILDER_HPP_
#define CLIENT_SERVER__MSG__DETAIL__NUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "client_server/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace client_server
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
  ::client_server::msg::Num num(::client_server::msg::Num::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::client_server::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::client_server::msg::Num>()
{
  return client_server::msg::builder::Init_Num_num();
}

}  // namespace client_server

#endif  // CLIENT_SERVER__MSG__DETAIL__NUM__BUILDER_HPP_
