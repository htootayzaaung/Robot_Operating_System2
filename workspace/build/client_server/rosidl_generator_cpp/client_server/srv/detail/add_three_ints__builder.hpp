// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from client_server:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

#ifndef CLIENT_SERVER__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_
#define CLIENT_SERVER__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "client_server/srv/detail/add_three_ints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace client_server
{

namespace srv
{

namespace builder
{

class Init_AddThreeInts_Request_c
{
public:
  explicit Init_AddThreeInts_Request_c(::client_server::srv::AddThreeInts_Request & msg)
  : msg_(msg)
  {}
  ::client_server::srv::AddThreeInts_Request c(::client_server::srv::AddThreeInts_Request::_c_type arg)
  {
    msg_.c = std::move(arg);
    return std::move(msg_);
  }

private:
  ::client_server::srv::AddThreeInts_Request msg_;
};

class Init_AddThreeInts_Request_b
{
public:
  explicit Init_AddThreeInts_Request_b(::client_server::srv::AddThreeInts_Request & msg)
  : msg_(msg)
  {}
  Init_AddThreeInts_Request_c b(::client_server::srv::AddThreeInts_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_AddThreeInts_Request_c(msg_);
  }

private:
  ::client_server::srv::AddThreeInts_Request msg_;
};

class Init_AddThreeInts_Request_a
{
public:
  Init_AddThreeInts_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddThreeInts_Request_b a(::client_server::srv::AddThreeInts_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_AddThreeInts_Request_b(msg_);
  }

private:
  ::client_server::srv::AddThreeInts_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::client_server::srv::AddThreeInts_Request>()
{
  return client_server::srv::builder::Init_AddThreeInts_Request_a();
}

}  // namespace client_server


namespace client_server
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
  ::client_server::srv::AddThreeInts_Response sum(::client_server::srv::AddThreeInts_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::client_server::srv::AddThreeInts_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::client_server::srv::AddThreeInts_Response>()
{
  return client_server::srv::builder::Init_AddThreeInts_Response_sum();
}

}  // namespace client_server

#endif  // CLIENT_SERVER__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_
