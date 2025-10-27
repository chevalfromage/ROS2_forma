// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ex4:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

#ifndef EX4__SRV__DETAIL__ADD_THREE_INTS__STRUCT_H_
#define EX4__SRV__DETAIL__ADD_THREE_INTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/AddThreeInts in the package ex4.
typedef struct ex4__srv__AddThreeInts_Request
{
  int64_t a;
  int64_t b;
  int64_t c;
} ex4__srv__AddThreeInts_Request;

// Struct for a sequence of ex4__srv__AddThreeInts_Request.
typedef struct ex4__srv__AddThreeInts_Request__Sequence
{
  ex4__srv__AddThreeInts_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ex4__srv__AddThreeInts_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/AddThreeInts in the package ex4.
typedef struct ex4__srv__AddThreeInts_Response
{
  int64_t sum;
} ex4__srv__AddThreeInts_Response;

// Struct for a sequence of ex4__srv__AddThreeInts_Response.
typedef struct ex4__srv__AddThreeInts_Response__Sequence
{
  ex4__srv__AddThreeInts_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ex4__srv__AddThreeInts_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EX4__SRV__DETAIL__ADD_THREE_INTS__STRUCT_H_
