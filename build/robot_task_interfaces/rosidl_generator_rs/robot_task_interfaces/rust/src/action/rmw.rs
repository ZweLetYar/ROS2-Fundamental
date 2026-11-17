
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "robot_task_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_task_interfaces__action__MoveDistance_Goal() -> *const std::ffi::c_void;
}

#[link(name = "robot_task_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_task_interfaces__action__MoveDistance_Goal__init(msg: *mut MoveDistance_Goal) -> bool;
    fn robot_task_interfaces__action__MoveDistance_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveDistance_Goal>, size: usize) -> bool;
    fn robot_task_interfaces__action__MoveDistance_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveDistance_Goal>);
    fn robot_task_interfaces__action__MoveDistance_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveDistance_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveDistance_Goal>) -> bool;
}

// Corresponds to robot_task_interfaces__action__MoveDistance_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveDistance_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub distance_m: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub speed_mps: f32,

}



impl Default for MoveDistance_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_task_interfaces__action__MoveDistance_Goal__init(&mut msg as *mut _) {
        panic!("Call to robot_task_interfaces__action__MoveDistance_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveDistance_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_task_interfaces__action__MoveDistance_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_task_interfaces__action__MoveDistance_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_task_interfaces__action__MoveDistance_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveDistance_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveDistance_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "robot_task_interfaces/action/MoveDistance_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_task_interfaces__action__MoveDistance_Goal() }
  }
}


#[link(name = "robot_task_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_task_interfaces__action__MoveDistance_Result() -> *const std::ffi::c_void;
}

#[link(name = "robot_task_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_task_interfaces__action__MoveDistance_Result__init(msg: *mut MoveDistance_Result) -> bool;
    fn robot_task_interfaces__action__MoveDistance_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveDistance_Result>, size: usize) -> bool;
    fn robot_task_interfaces__action__MoveDistance_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveDistance_Result>);
    fn robot_task_interfaces__action__MoveDistance_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveDistance_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveDistance_Result>) -> bool;
}

// Corresponds to robot_task_interfaces__action__MoveDistance_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveDistance_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub distance_traveled_m: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for MoveDistance_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_task_interfaces__action__MoveDistance_Result__init(&mut msg as *mut _) {
        panic!("Call to robot_task_interfaces__action__MoveDistance_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveDistance_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_task_interfaces__action__MoveDistance_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_task_interfaces__action__MoveDistance_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_task_interfaces__action__MoveDistance_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveDistance_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveDistance_Result where Self: Sized {
  const TYPE_NAME: &'static str = "robot_task_interfaces/action/MoveDistance_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_task_interfaces__action__MoveDistance_Result() }
  }
}


#[link(name = "robot_task_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_task_interfaces__action__MoveDistance_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "robot_task_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_task_interfaces__action__MoveDistance_Feedback__init(msg: *mut MoveDistance_Feedback) -> bool;
    fn robot_task_interfaces__action__MoveDistance_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveDistance_Feedback>, size: usize) -> bool;
    fn robot_task_interfaces__action__MoveDistance_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveDistance_Feedback>);
    fn robot_task_interfaces__action__MoveDistance_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveDistance_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveDistance_Feedback>) -> bool;
}

// Corresponds to robot_task_interfaces__action__MoveDistance_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveDistance_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub distance_remaining_m: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub percent_complete: f32,

}



impl Default for MoveDistance_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_task_interfaces__action__MoveDistance_Feedback__init(&mut msg as *mut _) {
        panic!("Call to robot_task_interfaces__action__MoveDistance_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveDistance_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_task_interfaces__action__MoveDistance_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_task_interfaces__action__MoveDistance_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_task_interfaces__action__MoveDistance_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveDistance_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveDistance_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "robot_task_interfaces/action/MoveDistance_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_task_interfaces__action__MoveDistance_Feedback() }
  }
}


#[link(name = "robot_task_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_task_interfaces__action__MoveDistance_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "robot_task_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_task_interfaces__action__MoveDistance_FeedbackMessage__init(msg: *mut MoveDistance_FeedbackMessage) -> bool;
    fn robot_task_interfaces__action__MoveDistance_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveDistance_FeedbackMessage>, size: usize) -> bool;
    fn robot_task_interfaces__action__MoveDistance_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveDistance_FeedbackMessage>);
    fn robot_task_interfaces__action__MoveDistance_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveDistance_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveDistance_FeedbackMessage>) -> bool;
}

// Corresponds to robot_task_interfaces__action__MoveDistance_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveDistance_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::MoveDistance_Feedback,

}



impl Default for MoveDistance_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_task_interfaces__action__MoveDistance_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to robot_task_interfaces__action__MoveDistance_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveDistance_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_task_interfaces__action__MoveDistance_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_task_interfaces__action__MoveDistance_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_task_interfaces__action__MoveDistance_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveDistance_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveDistance_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "robot_task_interfaces/action/MoveDistance_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_task_interfaces__action__MoveDistance_FeedbackMessage() }
  }
}




#[link(name = "robot_task_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_task_interfaces__action__MoveDistance_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "robot_task_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_task_interfaces__action__MoveDistance_SendGoal_Request__init(msg: *mut MoveDistance_SendGoal_Request) -> bool;
    fn robot_task_interfaces__action__MoveDistance_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveDistance_SendGoal_Request>, size: usize) -> bool;
    fn robot_task_interfaces__action__MoveDistance_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveDistance_SendGoal_Request>);
    fn robot_task_interfaces__action__MoveDistance_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveDistance_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveDistance_SendGoal_Request>) -> bool;
}

// Corresponds to robot_task_interfaces__action__MoveDistance_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveDistance_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::MoveDistance_Goal,

}



impl Default for MoveDistance_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_task_interfaces__action__MoveDistance_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to robot_task_interfaces__action__MoveDistance_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveDistance_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_task_interfaces__action__MoveDistance_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_task_interfaces__action__MoveDistance_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_task_interfaces__action__MoveDistance_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveDistance_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveDistance_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "robot_task_interfaces/action/MoveDistance_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_task_interfaces__action__MoveDistance_SendGoal_Request() }
  }
}


#[link(name = "robot_task_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_task_interfaces__action__MoveDistance_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "robot_task_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_task_interfaces__action__MoveDistance_SendGoal_Response__init(msg: *mut MoveDistance_SendGoal_Response) -> bool;
    fn robot_task_interfaces__action__MoveDistance_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveDistance_SendGoal_Response>, size: usize) -> bool;
    fn robot_task_interfaces__action__MoveDistance_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveDistance_SendGoal_Response>);
    fn robot_task_interfaces__action__MoveDistance_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveDistance_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveDistance_SendGoal_Response>) -> bool;
}

// Corresponds to robot_task_interfaces__action__MoveDistance_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveDistance_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for MoveDistance_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_task_interfaces__action__MoveDistance_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to robot_task_interfaces__action__MoveDistance_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveDistance_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_task_interfaces__action__MoveDistance_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_task_interfaces__action__MoveDistance_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_task_interfaces__action__MoveDistance_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveDistance_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveDistance_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "robot_task_interfaces/action/MoveDistance_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_task_interfaces__action__MoveDistance_SendGoal_Response() }
  }
}


#[link(name = "robot_task_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_task_interfaces__action__MoveDistance_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "robot_task_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_task_interfaces__action__MoveDistance_GetResult_Request__init(msg: *mut MoveDistance_GetResult_Request) -> bool;
    fn robot_task_interfaces__action__MoveDistance_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveDistance_GetResult_Request>, size: usize) -> bool;
    fn robot_task_interfaces__action__MoveDistance_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveDistance_GetResult_Request>);
    fn robot_task_interfaces__action__MoveDistance_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveDistance_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveDistance_GetResult_Request>) -> bool;
}

// Corresponds to robot_task_interfaces__action__MoveDistance_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveDistance_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for MoveDistance_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_task_interfaces__action__MoveDistance_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to robot_task_interfaces__action__MoveDistance_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveDistance_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_task_interfaces__action__MoveDistance_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_task_interfaces__action__MoveDistance_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_task_interfaces__action__MoveDistance_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveDistance_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveDistance_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "robot_task_interfaces/action/MoveDistance_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_task_interfaces__action__MoveDistance_GetResult_Request() }
  }
}


#[link(name = "robot_task_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_task_interfaces__action__MoveDistance_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "robot_task_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_task_interfaces__action__MoveDistance_GetResult_Response__init(msg: *mut MoveDistance_GetResult_Response) -> bool;
    fn robot_task_interfaces__action__MoveDistance_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveDistance_GetResult_Response>, size: usize) -> bool;
    fn robot_task_interfaces__action__MoveDistance_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveDistance_GetResult_Response>);
    fn robot_task_interfaces__action__MoveDistance_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveDistance_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveDistance_GetResult_Response>) -> bool;
}

// Corresponds to robot_task_interfaces__action__MoveDistance_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveDistance_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::MoveDistance_Result,

}



impl Default for MoveDistance_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_task_interfaces__action__MoveDistance_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to robot_task_interfaces__action__MoveDistance_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveDistance_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_task_interfaces__action__MoveDistance_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_task_interfaces__action__MoveDistance_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_task_interfaces__action__MoveDistance_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveDistance_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveDistance_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "robot_task_interfaces/action/MoveDistance_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_task_interfaces__action__MoveDistance_GetResult_Response() }
  }
}






#[link(name = "robot_task_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__robot_task_interfaces__action__MoveDistance_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to robot_task_interfaces__action__MoveDistance_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct MoveDistance_SendGoal;

impl rosidl_runtime_rs::Service for MoveDistance_SendGoal {
    type Request = MoveDistance_SendGoal_Request;
    type Response = MoveDistance_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__robot_task_interfaces__action__MoveDistance_SendGoal() }
    }
}




#[link(name = "robot_task_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__robot_task_interfaces__action__MoveDistance_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to robot_task_interfaces__action__MoveDistance_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct MoveDistance_GetResult;

impl rosidl_runtime_rs::Service for MoveDistance_GetResult {
    type Request = MoveDistance_GetResult_Request;
    type Response = MoveDistance_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__robot_task_interfaces__action__MoveDistance_GetResult() }
    }
}


