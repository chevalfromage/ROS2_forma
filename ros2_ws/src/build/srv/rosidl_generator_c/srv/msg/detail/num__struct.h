// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from srv:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef SRV__MSG__DETAIL__NUM__STRUCT_H_
#define SRV__MSG__DETAIL__NUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Num in the package srv.
typedef struct srv__msg__Num
{
  int64_t num;
} srv__msg__Num;

// Struct for a sequence of srv__msg__Num.
typedef struct srv__msg__Num__Sequence
{
  srv__msg__Num * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} srv__msg__Num__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SRV__MSG__DETAIL__NUM__STRUCT_H_
