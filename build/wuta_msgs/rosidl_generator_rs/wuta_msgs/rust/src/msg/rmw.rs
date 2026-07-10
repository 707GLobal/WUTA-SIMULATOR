#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "wuta_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__wuta_msgs__msg__Cone() -> *const std::ffi::c_void;
}

#[link(name = "wuta_msgs__rosidl_generator_c")]
extern "C" {
    fn wuta_msgs__msg__Cone__init(msg: *mut Cone) -> bool;
    fn wuta_msgs__msg__Cone__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Cone>, size: usize) -> bool;
    fn wuta_msgs__msg__Cone__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Cone>);
    fn wuta_msgs__msg__Cone__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Cone>, out_seq: *mut rosidl_runtime_rs::Sequence<Cone>) -> bool;
}

// Corresponds to wuta_msgs__msg__Cone
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Single cone detection
/// Color constants

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Cone {
    /// 3D position in sensor/map frame
    pub position: geometry_msgs::msg::rmw::Point,

    /// Cone color (see constants above)
    pub color: u8,

    /// Detection confidence [0.0, 1.0]
    pub confidence: f32,

}

impl Cone {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COLOR_UNKNOWN: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COLOR_BLUE: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COLOR_YELLOW: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COLOR_ORANGE: u8 = 3;

}


impl Default for Cone {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !wuta_msgs__msg__Cone__init(&mut msg as *mut _) {
        panic!("Call to wuta_msgs__msg__Cone__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Cone {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { wuta_msgs__msg__Cone__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { wuta_msgs__msg__Cone__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { wuta_msgs__msg__Cone__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Cone {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Cone where Self: Sized {
  const TYPE_NAME: &'static str = "wuta_msgs/msg/Cone";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__wuta_msgs__msg__Cone() }
  }
}


#[link(name = "wuta_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__wuta_msgs__msg__ConeArray() -> *const std::ffi::c_void;
}

#[link(name = "wuta_msgs__rosidl_generator_c")]
extern "C" {
    fn wuta_msgs__msg__ConeArray__init(msg: *mut ConeArray) -> bool;
    fn wuta_msgs__msg__ConeArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ConeArray>, size: usize) -> bool;
    fn wuta_msgs__msg__ConeArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ConeArray>);
    fn wuta_msgs__msg__ConeArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ConeArray>, out_seq: *mut rosidl_runtime_rs::Sequence<ConeArray>) -> bool;
}

// Corresponds to wuta_msgs__msg__ConeArray
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Array of cone detections from a single source (LiDAR or camera)

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ConeArray {
    /// frame_id: sensor frame or map frame
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cones: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Cone>,

}



impl Default for ConeArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !wuta_msgs__msg__ConeArray__init(&mut msg as *mut _) {
        panic!("Call to wuta_msgs__msg__ConeArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ConeArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { wuta_msgs__msg__ConeArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { wuta_msgs__msg__ConeArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { wuta_msgs__msg__ConeArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ConeArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ConeArray where Self: Sized {
  const TYPE_NAME: &'static str = "wuta_msgs/msg/ConeArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__wuta_msgs__msg__ConeArray() }
  }
}


#[link(name = "wuta_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__wuta_msgs__msg__ConeMap() -> *const std::ffi::c_void;
}

#[link(name = "wuta_msgs__rosidl_generator_c")]
extern "C" {
    fn wuta_msgs__msg__ConeMap__init(msg: *mut ConeMap) -> bool;
    fn wuta_msgs__msg__ConeMap__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ConeMap>, size: usize) -> bool;
    fn wuta_msgs__msg__ConeMap__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ConeMap>);
    fn wuta_msgs__msg__ConeMap__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ConeMap>, out_seq: *mut rosidl_runtime_rs::Sequence<ConeMap>) -> bool;
}

// Corresponds to wuta_msgs__msg__ConeMap
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Global cone map in map frame, organized by color

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ConeMap {
    /// frame_id: "map"
    pub header: std_msgs::msg::rmw::Header,

    /// Left boundary (blue)
    pub blue_cones: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Cone>,

    /// Right boundary (yellow)
    pub yellow_cones: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Cone>,

    /// Start/finish line
    pub orange_cones: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Cone>,

    /// Unclassified
    pub unknown_cones: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Cone>,

    /// True when track loop is closed
    pub is_closed: bool,

}



impl Default for ConeMap {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !wuta_msgs__msg__ConeMap__init(&mut msg as *mut _) {
        panic!("Call to wuta_msgs__msg__ConeMap__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ConeMap {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { wuta_msgs__msg__ConeMap__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { wuta_msgs__msg__ConeMap__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { wuta_msgs__msg__ConeMap__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ConeMap {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ConeMap where Self: Sized {
  const TYPE_NAME: &'static str = "wuta_msgs/msg/ConeMap";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__wuta_msgs__msg__ConeMap() }
  }
}


#[link(name = "wuta_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__wuta_msgs__msg__MissionState() -> *const std::ffi::c_void;
}

#[link(name = "wuta_msgs__rosidl_generator_c")]
extern "C" {
    fn wuta_msgs__msg__MissionState__init(msg: *mut MissionState) -> bool;
    fn wuta_msgs__msg__MissionState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MissionState>, size: usize) -> bool;
    fn wuta_msgs__msg__MissionState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MissionState>);
    fn wuta_msgs__msg__MissionState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MissionState>, out_seq: *mut rosidl_runtime_rs::Sequence<MissionState>) -> bool;
}

// Corresponds to wuta_msgs__msg__MissionState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Mission and system state for Mission Manager
/// State constants

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MissionState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_mode: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub localization_mode: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub description: rosidl_runtime_rs::String,

}

impl MissionState {
    /// System initializing
    pub const IDLE: u8 = 0;

    /// All sensors online, waiting for start
    pub const READY: u8 = 1;

    /// Vehicle inspection: sensor check + VCU CAN test
    pub const INSPECTION: u8 = 2;

    /// First lap: KISS-ICP + building cone map
    pub const EXPLORE: u8 = 3;

    /// Map complete, switching to race mode
    pub const MAPPING_DONE: u8 = 4;

    /// High-speed: NDT map matching
    pub const RACE: u8 = 5;

    /// Mission complete
    pub const FINISH: u8 = 6;

    /// E-stop / fault
    pub const EMERGENCY: u8 = 7;

    /// Mission mode constants (which event)
    pub const MISSION_TRACKDRIVE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MISSION_SKIDPAD: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MISSION_ACCELERATION: u8 = 2;

    /// Localization mode constants
    pub const LOC_KISS_ICP: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const LOC_NDT: u8 = 1;

}


impl Default for MissionState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !wuta_msgs__msg__MissionState__init(&mut msg as *mut _) {
        panic!("Call to wuta_msgs__msg__MissionState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MissionState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { wuta_msgs__msg__MissionState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { wuta_msgs__msg__MissionState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { wuta_msgs__msg__MissionState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MissionState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MissionState where Self: Sized {
  const TYPE_NAME: &'static str = "wuta_msgs/msg/MissionState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__wuta_msgs__msg__MissionState() }
  }
}


