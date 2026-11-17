// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from battery_interfaces:srv/GetBatteryStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "battery_interfaces/srv/get_battery_status.hpp"


#ifndef BATTERY_INTERFACES__SRV__DETAIL__GET_BATTERY_STATUS__TRAITS_HPP_
#define BATTERY_INTERFACES__SRV__DETAIL__GET_BATTERY_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "battery_interfaces/srv/detail/get_battery_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace battery_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetBatteryStatus_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: refresh
  {
    out << "refresh: ";
    rosidl_generator_traits::value_to_yaml(msg.refresh, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetBatteryStatus_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: refresh
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "refresh: ";
    rosidl_generator_traits::value_to_yaml(msg.refresh, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetBatteryStatus_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace battery_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use battery_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const battery_interfaces::srv::GetBatteryStatus_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  battery_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use battery_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const battery_interfaces::srv::GetBatteryStatus_Request & msg)
{
  return battery_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<battery_interfaces::srv::GetBatteryStatus_Request>()
{
  return "battery_interfaces::srv::GetBatteryStatus_Request";
}

template<>
inline const char * name<battery_interfaces::srv::GetBatteryStatus_Request>()
{
  return "battery_interfaces/srv/GetBatteryStatus_Request";
}

template<>
struct has_fixed_size<battery_interfaces::srv::GetBatteryStatus_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<battery_interfaces::srv::GetBatteryStatus_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<battery_interfaces::srv::GetBatteryStatus_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace battery_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetBatteryStatus_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: voltage
  {
    out << "voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetBatteryStatus_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetBatteryStatus_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace battery_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use battery_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const battery_interfaces::srv::GetBatteryStatus_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  battery_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use battery_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const battery_interfaces::srv::GetBatteryStatus_Response & msg)
{
  return battery_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<battery_interfaces::srv::GetBatteryStatus_Response>()
{
  return "battery_interfaces::srv::GetBatteryStatus_Response";
}

template<>
inline const char * name<battery_interfaces::srv::GetBatteryStatus_Response>()
{
  return "battery_interfaces/srv/GetBatteryStatus_Response";
}

template<>
struct has_fixed_size<battery_interfaces::srv::GetBatteryStatus_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<battery_interfaces::srv::GetBatteryStatus_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<battery_interfaces::srv::GetBatteryStatus_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace battery_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetBatteryStatus_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetBatteryStatus_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetBatteryStatus_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace battery_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use battery_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const battery_interfaces::srv::GetBatteryStatus_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  battery_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use battery_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const battery_interfaces::srv::GetBatteryStatus_Event & msg)
{
  return battery_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<battery_interfaces::srv::GetBatteryStatus_Event>()
{
  return "battery_interfaces::srv::GetBatteryStatus_Event";
}

template<>
inline const char * name<battery_interfaces::srv::GetBatteryStatus_Event>()
{
  return "battery_interfaces/srv/GetBatteryStatus_Event";
}

template<>
struct has_fixed_size<battery_interfaces::srv::GetBatteryStatus_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<battery_interfaces::srv::GetBatteryStatus_Event>
  : std::integral_constant<bool, has_bounded_size<battery_interfaces::srv::GetBatteryStatus_Request>::value && has_bounded_size<battery_interfaces::srv::GetBatteryStatus_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<battery_interfaces::srv::GetBatteryStatus_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<battery_interfaces::srv::GetBatteryStatus>()
{
  return "battery_interfaces::srv::GetBatteryStatus";
}

template<>
inline const char * name<battery_interfaces::srv::GetBatteryStatus>()
{
  return "battery_interfaces/srv/GetBatteryStatus";
}

template<>
struct has_fixed_size<battery_interfaces::srv::GetBatteryStatus>
  : std::integral_constant<
    bool,
    has_fixed_size<battery_interfaces::srv::GetBatteryStatus_Request>::value &&
    has_fixed_size<battery_interfaces::srv::GetBatteryStatus_Response>::value
  >
{
};

template<>
struct has_bounded_size<battery_interfaces::srv::GetBatteryStatus>
  : std::integral_constant<
    bool,
    has_bounded_size<battery_interfaces::srv::GetBatteryStatus_Request>::value &&
    has_bounded_size<battery_interfaces::srv::GetBatteryStatus_Response>::value
  >
{
};

template<>
struct is_service<battery_interfaces::srv::GetBatteryStatus>
  : std::true_type
{
};

template<>
struct is_service_request<battery_interfaces::srv::GetBatteryStatus_Request>
  : std::true_type
{
};

template<>
struct is_service_response<battery_interfaces::srv::GetBatteryStatus_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BATTERY_INTERFACES__SRV__DETAIL__GET_BATTERY_STATUS__TRAITS_HPP_
