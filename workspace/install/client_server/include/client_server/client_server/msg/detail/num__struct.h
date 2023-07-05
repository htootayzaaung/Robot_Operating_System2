// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from client_server:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef CLIENT_SERVER__MSG__DETAIL__NUM__STRUCT_H_
#define CLIENT_SERVER__MSG__DETAIL__NUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Num in the package client_server.
typedef struct client_server__msg__Num
{
  int64_t num;
} client_server__msg__Num;

// Struct for a sequence of client_server__msg__Num.
typedef struct client_server__msg__Num__Sequence
{
  client_server__msg__Num * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} client_server__msg__Num__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CLIENT_SERVER__MSG__DETAIL__NUM__STRUCT_H_
