// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_task_interfaces:action/MoveDistance.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_task_interfaces/action/move_distance.hpp"


#ifndef ROBOT_TASK_INTERFACES__ACTION__DETAIL__MOVE_DISTANCE__BUILDER_HPP_
#define ROBOT_TASK_INTERFACES__ACTION__DETAIL__MOVE_DISTANCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_task_interfaces/action/detail/move_distance__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_task_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveDistance_Goal_speed_mps
{
public:
  explicit Init_MoveDistance_Goal_speed_mps(::robot_task_interfaces::action::MoveDistance_Goal & msg)
  : msg_(msg)
  {}
  ::robot_task_interfaces::action::MoveDistance_Goal speed_mps(::robot_task_interfaces::action::MoveDistance_Goal::_speed_mps_type arg)
  {
    msg_.speed_mps = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_task_interfaces::action::MoveDistance_Goal msg_;
};

class Init_MoveDistance_Goal_distance_m
{
public:
  Init_MoveDistance_Goal_distance_m()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveDistance_Goal_speed_mps distance_m(::robot_task_interfaces::action::MoveDistance_Goal::_distance_m_type arg)
  {
    msg_.distance_m = std::move(arg);
    return Init_MoveDistance_Goal_speed_mps(msg_);
  }

private:
  ::robot_task_interfaces::action::MoveDistance_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_task_interfaces::action::MoveDistance_Goal>()
{
  return robot_task_interfaces::action::builder::Init_MoveDistance_Goal_distance_m();
}

}  // namespace robot_task_interfaces


namespace robot_task_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveDistance_Result_message
{
public:
  explicit Init_MoveDistance_Result_message(::robot_task_interfaces::action::MoveDistance_Result & msg)
  : msg_(msg)
  {}
  ::robot_task_interfaces::action::MoveDistance_Result message(::robot_task_interfaces::action::MoveDistance_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_task_interfaces::action::MoveDistance_Result msg_;
};

class Init_MoveDistance_Result_distance_traveled_m
{
public:
  explicit Init_MoveDistance_Result_distance_traveled_m(::robot_task_interfaces::action::MoveDistance_Result & msg)
  : msg_(msg)
  {}
  Init_MoveDistance_Result_message distance_traveled_m(::robot_task_interfaces::action::MoveDistance_Result::_distance_traveled_m_type arg)
  {
    msg_.distance_traveled_m = std::move(arg);
    return Init_MoveDistance_Result_message(msg_);
  }

private:
  ::robot_task_interfaces::action::MoveDistance_Result msg_;
};

class Init_MoveDistance_Result_success
{
public:
  Init_MoveDistance_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveDistance_Result_distance_traveled_m success(::robot_task_interfaces::action::MoveDistance_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_MoveDistance_Result_distance_traveled_m(msg_);
  }

private:
  ::robot_task_interfaces::action::MoveDistance_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_task_interfaces::action::MoveDistance_Result>()
{
  return robot_task_interfaces::action::builder::Init_MoveDistance_Result_success();
}

}  // namespace robot_task_interfaces


namespace robot_task_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveDistance_Feedback_percent_complete
{
public:
  explicit Init_MoveDistance_Feedback_percent_complete(::robot_task_interfaces::action::MoveDistance_Feedback & msg)
  : msg_(msg)
  {}
  ::robot_task_interfaces::action::MoveDistance_Feedback percent_complete(::robot_task_interfaces::action::MoveDistance_Feedback::_percent_complete_type arg)
  {
    msg_.percent_complete = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_task_interfaces::action::MoveDistance_Feedback msg_;
};

class Init_MoveDistance_Feedback_distance_remaining_m
{
public:
  Init_MoveDistance_Feedback_distance_remaining_m()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveDistance_Feedback_percent_complete distance_remaining_m(::robot_task_interfaces::action::MoveDistance_Feedback::_distance_remaining_m_type arg)
  {
    msg_.distance_remaining_m = std::move(arg);
    return Init_MoveDistance_Feedback_percent_complete(msg_);
  }

private:
  ::robot_task_interfaces::action::MoveDistance_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_task_interfaces::action::MoveDistance_Feedback>()
{
  return robot_task_interfaces::action::builder::Init_MoveDistance_Feedback_distance_remaining_m();
}

}  // namespace robot_task_interfaces


namespace robot_task_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveDistance_SendGoal_Request_goal
{
public:
  explicit Init_MoveDistance_SendGoal_Request_goal(::robot_task_interfaces::action::MoveDistance_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::robot_task_interfaces::action::MoveDistance_SendGoal_Request goal(::robot_task_interfaces::action::MoveDistance_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_task_interfaces::action::MoveDistance_SendGoal_Request msg_;
};

class Init_MoveDistance_SendGoal_Request_goal_id
{
public:
  Init_MoveDistance_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveDistance_SendGoal_Request_goal goal_id(::robot_task_interfaces::action::MoveDistance_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveDistance_SendGoal_Request_goal(msg_);
  }

private:
  ::robot_task_interfaces::action::MoveDistance_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_task_interfaces::action::MoveDistance_SendGoal_Request>()
{
  return robot_task_interfaces::action::builder::Init_MoveDistance_SendGoal_Request_goal_id();
}

}  // namespace robot_task_interfaces


namespace robot_task_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveDistance_SendGoal_Response_stamp
{
public:
  explicit Init_MoveDistance_SendGoal_Response_stamp(::robot_task_interfaces::action::MoveDistance_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::robot_task_interfaces::action::MoveDistance_SendGoal_Response stamp(::robot_task_interfaces::action::MoveDistance_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_task_interfaces::action::MoveDistance_SendGoal_Response msg_;
};

class Init_MoveDistance_SendGoal_Response_accepted
{
public:
  Init_MoveDistance_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveDistance_SendGoal_Response_stamp accepted(::robot_task_interfaces::action::MoveDistance_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MoveDistance_SendGoal_Response_stamp(msg_);
  }

private:
  ::robot_task_interfaces::action::MoveDistance_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_task_interfaces::action::MoveDistance_SendGoal_Response>()
{
  return robot_task_interfaces::action::builder::Init_MoveDistance_SendGoal_Response_accepted();
}

}  // namespace robot_task_interfaces


namespace robot_task_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveDistance_SendGoal_Event_response
{
public:
  explicit Init_MoveDistance_SendGoal_Event_response(::robot_task_interfaces::action::MoveDistance_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::robot_task_interfaces::action::MoveDistance_SendGoal_Event response(::robot_task_interfaces::action::MoveDistance_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_task_interfaces::action::MoveDistance_SendGoal_Event msg_;
};

class Init_MoveDistance_SendGoal_Event_request
{
public:
  explicit Init_MoveDistance_SendGoal_Event_request(::robot_task_interfaces::action::MoveDistance_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_MoveDistance_SendGoal_Event_response request(::robot_task_interfaces::action::MoveDistance_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MoveDistance_SendGoal_Event_response(msg_);
  }

private:
  ::robot_task_interfaces::action::MoveDistance_SendGoal_Event msg_;
};

class Init_MoveDistance_SendGoal_Event_info
{
public:
  Init_MoveDistance_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveDistance_SendGoal_Event_request info(::robot_task_interfaces::action::MoveDistance_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MoveDistance_SendGoal_Event_request(msg_);
  }

private:
  ::robot_task_interfaces::action::MoveDistance_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_task_interfaces::action::MoveDistance_SendGoal_Event>()
{
  return robot_task_interfaces::action::builder::Init_MoveDistance_SendGoal_Event_info();
}

}  // namespace robot_task_interfaces


namespace robot_task_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveDistance_GetResult_Request_goal_id
{
public:
  Init_MoveDistance_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_task_interfaces::action::MoveDistance_GetResult_Request goal_id(::robot_task_interfaces::action::MoveDistance_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_task_interfaces::action::MoveDistance_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_task_interfaces::action::MoveDistance_GetResult_Request>()
{
  return robot_task_interfaces::action::builder::Init_MoveDistance_GetResult_Request_goal_id();
}

}  // namespace robot_task_interfaces


namespace robot_task_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveDistance_GetResult_Response_result
{
public:
  explicit Init_MoveDistance_GetResult_Response_result(::robot_task_interfaces::action::MoveDistance_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::robot_task_interfaces::action::MoveDistance_GetResult_Response result(::robot_task_interfaces::action::MoveDistance_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_task_interfaces::action::MoveDistance_GetResult_Response msg_;
};

class Init_MoveDistance_GetResult_Response_status
{
public:
  Init_MoveDistance_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveDistance_GetResult_Response_result status(::robot_task_interfaces::action::MoveDistance_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MoveDistance_GetResult_Response_result(msg_);
  }

private:
  ::robot_task_interfaces::action::MoveDistance_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_task_interfaces::action::MoveDistance_GetResult_Response>()
{
  return robot_task_interfaces::action::builder::Init_MoveDistance_GetResult_Response_status();
}

}  // namespace robot_task_interfaces


namespace robot_task_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveDistance_GetResult_Event_response
{
public:
  explicit Init_MoveDistance_GetResult_Event_response(::robot_task_interfaces::action::MoveDistance_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::robot_task_interfaces::action::MoveDistance_GetResult_Event response(::robot_task_interfaces::action::MoveDistance_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_task_interfaces::action::MoveDistance_GetResult_Event msg_;
};

class Init_MoveDistance_GetResult_Event_request
{
public:
  explicit Init_MoveDistance_GetResult_Event_request(::robot_task_interfaces::action::MoveDistance_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_MoveDistance_GetResult_Event_response request(::robot_task_interfaces::action::MoveDistance_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MoveDistance_GetResult_Event_response(msg_);
  }

private:
  ::robot_task_interfaces::action::MoveDistance_GetResult_Event msg_;
};

class Init_MoveDistance_GetResult_Event_info
{
public:
  Init_MoveDistance_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveDistance_GetResult_Event_request info(::robot_task_interfaces::action::MoveDistance_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MoveDistance_GetResult_Event_request(msg_);
  }

private:
  ::robot_task_interfaces::action::MoveDistance_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_task_interfaces::action::MoveDistance_GetResult_Event>()
{
  return robot_task_interfaces::action::builder::Init_MoveDistance_GetResult_Event_info();
}

}  // namespace robot_task_interfaces


namespace robot_task_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveDistance_FeedbackMessage_feedback
{
public:
  explicit Init_MoveDistance_FeedbackMessage_feedback(::robot_task_interfaces::action::MoveDistance_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::robot_task_interfaces::action::MoveDistance_FeedbackMessage feedback(::robot_task_interfaces::action::MoveDistance_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_task_interfaces::action::MoveDistance_FeedbackMessage msg_;
};

class Init_MoveDistance_FeedbackMessage_goal_id
{
public:
  Init_MoveDistance_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveDistance_FeedbackMessage_feedback goal_id(::robot_task_interfaces::action::MoveDistance_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveDistance_FeedbackMessage_feedback(msg_);
  }

private:
  ::robot_task_interfaces::action::MoveDistance_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_task_interfaces::action::MoveDistance_FeedbackMessage>()
{
  return robot_task_interfaces::action::builder::Init_MoveDistance_FeedbackMessage_goal_id();
}

}  // namespace robot_task_interfaces

#endif  // ROBOT_TASK_INTERFACES__ACTION__DETAIL__MOVE_DISTANCE__BUILDER_HPP_
