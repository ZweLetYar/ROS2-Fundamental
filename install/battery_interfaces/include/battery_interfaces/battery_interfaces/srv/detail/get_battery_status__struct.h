// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from battery_interfaces:srv/GetBatteryStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "battery_interfaces/srv/get_battery_status.h"


#ifndef BATTERY_INTERFACES__SRV__DETAIL__GET_BATTERY_STATUS__STRUCT_H_
#define BATTERY_INTERFACES__SRV__DETAIL__GET_BATTERY_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetBatteryStatus in the package battery_interfaces.
typedef struct battery_interfaces__srv__GetBatteryStatus_Request
{
  bool refresh;
} battery_interfaces__srv__GetBatteryStatus_Request;

// Struct for a sequence of battery_interfaces__srv__GetBatteryStatus_Request.
typedef struct battery_interfaces__srv__GetBatteryStatus_Request__Sequence
{
  battery_interfaces__srv__GetBatteryStatus_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} battery_interfaces__srv__GetBatteryStatus_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetBatteryStatus in the package battery_interfaces.
typedef struct battery_interfaces__srv__GetBatteryStatus_Response
{
  float voltage;
  rosidl_runtime_c__String status;
} battery_interfaces__srv__GetBatteryStatus_Response;

// Struct for a sequence of battery_interfaces__srv__GetBatteryStatus_Response.
typedef struct battery_interfaces__srv__GetBatteryStatus_Response__Sequence
{
  battery_interfaces__srv__GetBatteryStatus_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} battery_interfaces__srv__GetBatteryStatus_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  battery_interfaces__srv__GetBatteryStatus_Event__request__MAX_SIZE = 1
};
// response
enum
{
  battery_interfaces__srv__GetBatteryStatus_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetBatteryStatus in the package battery_interfaces.
typedef struct battery_interfaces__srv__GetBatteryStatus_Event
{
  service_msgs__msg__ServiceEventInfo info;
  battery_interfaces__srv__GetBatteryStatus_Request__Sequence request;
  battery_interfaces__srv__GetBatteryStatus_Response__Sequence response;
} battery_interfaces__srv__GetBatteryStatus_Event;

// Struct for a sequence of battery_interfaces__srv__GetBatteryStatus_Event.
typedef struct battery_interfaces__srv__GetBatteryStatus_Event__Sequence
{
  battery_interfaces__srv__GetBatteryStatus_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} battery_interfaces__srv__GetBatteryStatus_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BATTERY_INTERFACES__SRV__DETAIL__GET_BATTERY_STATUS__STRUCT_H_
