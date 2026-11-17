// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_task_interfaces:action/MoveDistance.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_task_interfaces/action/move_distance.h"


#ifndef ROBOT_TASK_INTERFACES__ACTION__DETAIL__MOVE_DISTANCE__STRUCT_H_
#define ROBOT_TASK_INTERFACES__ACTION__DETAIL__MOVE_DISTANCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/MoveDistance in the package robot_task_interfaces.
typedef struct robot_task_interfaces__action__MoveDistance_Goal
{
  float distance_m;
  float speed_mps;
} robot_task_interfaces__action__MoveDistance_Goal;

// Struct for a sequence of robot_task_interfaces__action__MoveDistance_Goal.
typedef struct robot_task_interfaces__action__MoveDistance_Goal__Sequence
{
  robot_task_interfaces__action__MoveDistance_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_task_interfaces__action__MoveDistance_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/MoveDistance in the package robot_task_interfaces.
typedef struct robot_task_interfaces__action__MoveDistance_Result
{
  bool success;
  float distance_traveled_m;
  rosidl_runtime_c__String message;
} robot_task_interfaces__action__MoveDistance_Result;

// Struct for a sequence of robot_task_interfaces__action__MoveDistance_Result.
typedef struct robot_task_interfaces__action__MoveDistance_Result__Sequence
{
  robot_task_interfaces__action__MoveDistance_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_task_interfaces__action__MoveDistance_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/MoveDistance in the package robot_task_interfaces.
typedef struct robot_task_interfaces__action__MoveDistance_Feedback
{
  float distance_remaining_m;
  float percent_complete;
} robot_task_interfaces__action__MoveDistance_Feedback;

// Struct for a sequence of robot_task_interfaces__action__MoveDistance_Feedback.
typedef struct robot_task_interfaces__action__MoveDistance_Feedback__Sequence
{
  robot_task_interfaces__action__MoveDistance_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_task_interfaces__action__MoveDistance_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "robot_task_interfaces/action/detail/move_distance__struct.h"

/// Struct defined in action/MoveDistance in the package robot_task_interfaces.
typedef struct robot_task_interfaces__action__MoveDistance_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  robot_task_interfaces__action__MoveDistance_Goal goal;
} robot_task_interfaces__action__MoveDistance_SendGoal_Request;

// Struct for a sequence of robot_task_interfaces__action__MoveDistance_SendGoal_Request.
typedef struct robot_task_interfaces__action__MoveDistance_SendGoal_Request__Sequence
{
  robot_task_interfaces__action__MoveDistance_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_task_interfaces__action__MoveDistance_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MoveDistance in the package robot_task_interfaces.
typedef struct robot_task_interfaces__action__MoveDistance_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} robot_task_interfaces__action__MoveDistance_SendGoal_Response;

// Struct for a sequence of robot_task_interfaces__action__MoveDistance_SendGoal_Response.
typedef struct robot_task_interfaces__action__MoveDistance_SendGoal_Response__Sequence
{
  robot_task_interfaces__action__MoveDistance_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_task_interfaces__action__MoveDistance_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  robot_task_interfaces__action__MoveDistance_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  robot_task_interfaces__action__MoveDistance_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/MoveDistance in the package robot_task_interfaces.
typedef struct robot_task_interfaces__action__MoveDistance_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  robot_task_interfaces__action__MoveDistance_SendGoal_Request__Sequence request;
  robot_task_interfaces__action__MoveDistance_SendGoal_Response__Sequence response;
} robot_task_interfaces__action__MoveDistance_SendGoal_Event;

// Struct for a sequence of robot_task_interfaces__action__MoveDistance_SendGoal_Event.
typedef struct robot_task_interfaces__action__MoveDistance_SendGoal_Event__Sequence
{
  robot_task_interfaces__action__MoveDistance_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_task_interfaces__action__MoveDistance_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MoveDistance in the package robot_task_interfaces.
typedef struct robot_task_interfaces__action__MoveDistance_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} robot_task_interfaces__action__MoveDistance_GetResult_Request;

// Struct for a sequence of robot_task_interfaces__action__MoveDistance_GetResult_Request.
typedef struct robot_task_interfaces__action__MoveDistance_GetResult_Request__Sequence
{
  robot_task_interfaces__action__MoveDistance_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_task_interfaces__action__MoveDistance_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "robot_task_interfaces/action/detail/move_distance__struct.h"

/// Struct defined in action/MoveDistance in the package robot_task_interfaces.
typedef struct robot_task_interfaces__action__MoveDistance_GetResult_Response
{
  int8_t status;
  robot_task_interfaces__action__MoveDistance_Result result;
} robot_task_interfaces__action__MoveDistance_GetResult_Response;

// Struct for a sequence of robot_task_interfaces__action__MoveDistance_GetResult_Response.
typedef struct robot_task_interfaces__action__MoveDistance_GetResult_Response__Sequence
{
  robot_task_interfaces__action__MoveDistance_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_task_interfaces__action__MoveDistance_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  robot_task_interfaces__action__MoveDistance_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  robot_task_interfaces__action__MoveDistance_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/MoveDistance in the package robot_task_interfaces.
typedef struct robot_task_interfaces__action__MoveDistance_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  robot_task_interfaces__action__MoveDistance_GetResult_Request__Sequence request;
  robot_task_interfaces__action__MoveDistance_GetResult_Response__Sequence response;
} robot_task_interfaces__action__MoveDistance_GetResult_Event;

// Struct for a sequence of robot_task_interfaces__action__MoveDistance_GetResult_Event.
typedef struct robot_task_interfaces__action__MoveDistance_GetResult_Event__Sequence
{
  robot_task_interfaces__action__MoveDistance_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_task_interfaces__action__MoveDistance_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "robot_task_interfaces/action/detail/move_distance__struct.h"

/// Struct defined in action/MoveDistance in the package robot_task_interfaces.
typedef struct robot_task_interfaces__action__MoveDistance_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  robot_task_interfaces__action__MoveDistance_Feedback feedback;
} robot_task_interfaces__action__MoveDistance_FeedbackMessage;

// Struct for a sequence of robot_task_interfaces__action__MoveDistance_FeedbackMessage.
typedef struct robot_task_interfaces__action__MoveDistance_FeedbackMessage__Sequence
{
  robot_task_interfaces__action__MoveDistance_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_task_interfaces__action__MoveDistance_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_TASK_INTERFACES__ACTION__DETAIL__MOVE_DISTANCE__STRUCT_H_
