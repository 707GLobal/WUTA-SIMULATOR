#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "autoware_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__autoware_msgs__msg__Waypoint() -> *const std::ffi::c_void;
}

#[link(name = "autoware_msgs__rosidl_generator_c")]
extern "C" {
    fn autoware_msgs__msg__Waypoint__init(msg: *mut Waypoint) -> bool;
    fn autoware_msgs__msg__Waypoint__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Waypoint>, size: usize) -> bool;
    fn autoware_msgs__msg__Waypoint__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Waypoint>);
    fn autoware_msgs__msg__Waypoint__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Waypoint>, out_seq: *mut rosidl_runtime_rs::Sequence<Waypoint>) -> bool;
}

// Corresponds to autoware_msgs__msg__Waypoint
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Waypoint {

    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::rmw::PoseStamped,


    // This member is not documented.
    #[allow(missing_docs)]
    pub twist: geometry_msgs::msg::rmw::TwistStamped,

}



impl Default for Waypoint {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !autoware_msgs__msg__Waypoint__init(&mut msg as *mut _) {
        panic!("Call to autoware_msgs__msg__Waypoint__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Waypoint {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_msgs__msg__Waypoint__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_msgs__msg__Waypoint__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_msgs__msg__Waypoint__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Waypoint {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Waypoint where Self: Sized {
  const TYPE_NAME: &'static str = "autoware_msgs/msg/Waypoint";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__autoware_msgs__msg__Waypoint() }
  }
}


#[link(name = "autoware_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__autoware_msgs__msg__Lane() -> *const std::ffi::c_void;
}

#[link(name = "autoware_msgs__rosidl_generator_c")]
extern "C" {
    fn autoware_msgs__msg__Lane__init(msg: *mut Lane) -> bool;
    fn autoware_msgs__msg__Lane__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Lane>, size: usize) -> bool;
    fn autoware_msgs__msg__Lane__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Lane>);
    fn autoware_msgs__msg__Lane__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Lane>, out_seq: *mut rosidl_runtime_rs::Sequence<Lane>) -> bool;
}

// Corresponds to autoware_msgs__msg__Lane
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Lane {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub waypoints: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Waypoint>,

}



impl Default for Lane {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !autoware_msgs__msg__Lane__init(&mut msg as *mut _) {
        panic!("Call to autoware_msgs__msg__Lane__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Lane {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_msgs__msg__Lane__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_msgs__msg__Lane__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_msgs__msg__Lane__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Lane {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Lane where Self: Sized {
  const TYPE_NAME: &'static str = "autoware_msgs/msg/Lane";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__autoware_msgs__msg__Lane() }
  }
}


#[link(name = "autoware_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__autoware_msgs__msg__Command() -> *const std::ffi::c_void;
}

#[link(name = "autoware_msgs__rosidl_generator_c")]
extern "C" {
    fn autoware_msgs__msg__Command__init(msg: *mut Command) -> bool;
    fn autoware_msgs__msg__Command__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Command>, size: usize) -> bool;
    fn autoware_msgs__msg__Command__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Command>);
    fn autoware_msgs__msg__Command__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Command>, out_seq: *mut rosidl_runtime_rs::Sequence<Command>) -> bool;
}

// Corresponds to autoware_msgs__msg__Command
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Command {

    // This member is not documented.
    #[allow(missing_docs)]
    pub speed: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub angle: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dv_state: i32,

}



impl Default for Command {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !autoware_msgs__msg__Command__init(&mut msg as *mut _) {
        panic!("Call to autoware_msgs__msg__Command__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Command {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_msgs__msg__Command__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_msgs__msg__Command__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_msgs__msg__Command__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Command {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Command where Self: Sized {
  const TYPE_NAME: &'static str = "autoware_msgs/msg/Command";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__autoware_msgs__msg__Command() }
  }
}


