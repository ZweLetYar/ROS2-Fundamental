#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "battery_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__battery_interfaces__srv__GetBatteryStatus_Request() -> *const std::ffi::c_void;
}

#[link(name = "battery_interfaces__rosidl_generator_c")]
extern "C" {
    fn battery_interfaces__srv__GetBatteryStatus_Request__init(msg: *mut GetBatteryStatus_Request) -> bool;
    fn battery_interfaces__srv__GetBatteryStatus_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetBatteryStatus_Request>, size: usize) -> bool;
    fn battery_interfaces__srv__GetBatteryStatus_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetBatteryStatus_Request>);
    fn battery_interfaces__srv__GetBatteryStatus_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetBatteryStatus_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetBatteryStatus_Request>) -> bool;
}

// Corresponds to battery_interfaces__srv__GetBatteryStatus_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetBatteryStatus_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub refresh: bool,

}



impl Default for GetBatteryStatus_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !battery_interfaces__srv__GetBatteryStatus_Request__init(&mut msg as *mut _) {
        panic!("Call to battery_interfaces__srv__GetBatteryStatus_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetBatteryStatus_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { battery_interfaces__srv__GetBatteryStatus_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { battery_interfaces__srv__GetBatteryStatus_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { battery_interfaces__srv__GetBatteryStatus_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetBatteryStatus_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetBatteryStatus_Request where Self: Sized {
  const TYPE_NAME: &'static str = "battery_interfaces/srv/GetBatteryStatus_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__battery_interfaces__srv__GetBatteryStatus_Request() }
  }
}


#[link(name = "battery_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__battery_interfaces__srv__GetBatteryStatus_Response() -> *const std::ffi::c_void;
}

#[link(name = "battery_interfaces__rosidl_generator_c")]
extern "C" {
    fn battery_interfaces__srv__GetBatteryStatus_Response__init(msg: *mut GetBatteryStatus_Response) -> bool;
    fn battery_interfaces__srv__GetBatteryStatus_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetBatteryStatus_Response>, size: usize) -> bool;
    fn battery_interfaces__srv__GetBatteryStatus_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetBatteryStatus_Response>);
    fn battery_interfaces__srv__GetBatteryStatus_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetBatteryStatus_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetBatteryStatus_Response>) -> bool;
}

// Corresponds to battery_interfaces__srv__GetBatteryStatus_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetBatteryStatus_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub voltage: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status: rosidl_runtime_rs::String,

}



impl Default for GetBatteryStatus_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !battery_interfaces__srv__GetBatteryStatus_Response__init(&mut msg as *mut _) {
        panic!("Call to battery_interfaces__srv__GetBatteryStatus_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetBatteryStatus_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { battery_interfaces__srv__GetBatteryStatus_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { battery_interfaces__srv__GetBatteryStatus_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { battery_interfaces__srv__GetBatteryStatus_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetBatteryStatus_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetBatteryStatus_Response where Self: Sized {
  const TYPE_NAME: &'static str = "battery_interfaces/srv/GetBatteryStatus_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__battery_interfaces__srv__GetBatteryStatus_Response() }
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


