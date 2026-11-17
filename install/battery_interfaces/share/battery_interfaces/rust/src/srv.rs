#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to battery_interfaces__srv__GetBatteryStatus_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetBatteryStatus_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub refresh: bool,

}



impl Default for GetBatteryStatus_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetBatteryStatus_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetBatteryStatus_Request {
  type RmwMsg = super::srv::rmw::GetBatteryStatus_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        refresh: msg.refresh,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      refresh: msg.refresh,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      refresh: msg.refresh,
    }
  }
}


// Corresponds to battery_interfaces__srv__GetBatteryStatus_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetBatteryStatus_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub voltage: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status: std::string::String,

}



impl Default for GetBatteryStatus_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetBatteryStatus_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetBatteryStatus_Response {
  type RmwMsg = super::srv::rmw::GetBatteryStatus_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        voltage: msg.voltage,
        status: msg.status.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      voltage: msg.voltage,
        status: msg.status.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      voltage: msg.voltage,
      status: msg.status.to_string(),
    }
  }
}






#[link(name = "battery_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__battery_interfaces__srv__GetBatteryStatus() -> *const std::ffi::c_void;
}

// Corresponds to battery_interfaces__srv__GetBatteryStatus
#[allow(missing_docs, non_camel_case_types)]
pub struct GetBatteryStatus;

impl rosidl_runtime_rs::Service for GetBatteryStatus {
    type Request = GetBatteryStatus_Request;
    type Response = GetBatteryStatus_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__battery_interfaces__srv__GetBatteryStatus() }
    }
}


