// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from battery_interfaces:srv/GetBatteryStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "battery_interfaces/srv/get_battery_status.hpp"


#ifndef BATTERY_INTERFACES__SRV__DETAIL__GET_BATTERY_STATUS__BUILDER_HPP_
#define BATTERY_INTERFACES__SRV__DETAIL__GET_BATTERY_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "battery_interfaces/srv/detail/get_battery_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace battery_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetBatteryStatus_Request_refresh
{
public:
  Init_GetBatteryStatus_Request_refresh()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::battery_interfaces::srv::GetBatteryStatus_Request refresh(::battery_interfaces::srv::GetBatteryStatus_Request::_refresh_type arg)
  {
    msg_.refresh = std::move(arg);
    return std::move(msg_);
  }

private:
  ::battery_interfaces::srv::GetBatteryStatus_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::battery_interfaces::srv::GetBatteryStatus_Request>()
{
  return battery_interfaces::srv::builder::Init_GetBatteryStatus_Request_refresh();
}

}  // namespace battery_interfaces


namespace battery_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetBatteryStatus_Response_status
{
public:
  explicit Init_GetBatteryStatus_Response_status(::battery_interfaces::srv::GetBatteryStatus_Response & msg)
  : msg_(msg)
  {}
  ::battery_interfaces::srv::GetBatteryStatus_Response status(::battery_interfaces::srv::GetBatteryStatus_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::battery_interfaces::srv::GetBatteryStatus_Response msg_;
};

class Init_GetBatteryStatus_Response_voltage
{
public:
  Init_GetBatteryStatus_Response_voltage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetBatteryStatus_Response_status voltage(::battery_interfaces::srv::GetBatteryStatus_Response::_voltage_type arg)
  {
    msg_.voltage = std::move(arg);
    return Init_GetBatteryStatus_Response_status(msg_);
  }

private:
  ::battery_interfaces::srv::GetBatteryStatus_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::battery_interfaces::srv::GetBatteryStatus_Response>()
{
  return battery_interfaces::srv::builder::Init_GetBatteryStatus_Response_voltage();
}

}  // namespace battery_interfaces


namespace battery_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetBatteryStatus_Event_response
{
public:
  explicit Init_GetBatteryStatus_Event_response(::battery_interfaces::srv::GetBatteryStatus_Event & msg)
  : msg_(msg)
  {}
  ::battery_interfaces::srv::GetBatteryStatus_Event response(::battery_interfaces::srv::GetBatteryStatus_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::battery_interfaces::srv::GetBatteryStatus_Event msg_;
};

class Init_GetBatteryStatus_Event_request
{
public:
  explicit Init_GetBatteryStatus_Event_request(::battery_interfaces::srv::GetBatteryStatus_Event & msg)
  : msg_(msg)
  {}
  Init_GetBatteryStatus_Event_response request(::battery_interfaces::srv::GetBatteryStatus_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetBatteryStatus_Event_response(msg_);
  }

private:
  ::battery_interfaces::srv::GetBatteryStatus_Event msg_;
};

class Init_GetBatteryStatus_Event_info
{
public:
  Init_GetBatteryStatus_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetBatteryStatus_Event_request info(::battery_interfaces::srv::GetBatteryStatus_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetBatteryStatus_Event_request(msg_);
  }

private:
  ::battery_interfaces::srv::GetBatteryStatus_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::battery_interfaces::srv::GetBatteryStatus_Event>()
{
  return battery_interfaces::srv::builder::Init_GetBatteryStatus_Event_info();
}

}  // namespace battery_interfaces

#endif  // BATTERY_INTERFACES__SRV__DETAIL__GET_BATTERY_STATUS__BUILDER_HPP_
