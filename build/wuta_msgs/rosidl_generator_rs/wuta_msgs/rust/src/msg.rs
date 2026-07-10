#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to wuta_msgs__msg__Cone
/// Single cone detection
/// Color constants

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Cone {
    /// 3D position in sensor/map frame
    pub position: geometry_msgs::msg::Point,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Cone::default())
  }
}

impl rosidl_runtime_rs::Message for Cone {
  type RmwMsg = super::msg::rmw::Cone;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.position)).into_owned(),
        color: msg.color,
        confidence: msg.confidence,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.position)).into_owned(),
      color: msg.color,
      confidence: msg.confidence,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      position: geometry_msgs::msg::Point::from_rmw_message(msg.position),
      color: msg.color,
      confidence: msg.confidence,
    }
  }
}


// Corresponds to wuta_msgs__msg__ConeArray
/// Array of cone detections from a single source (LiDAR or camera)

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ConeArray {
    /// frame_id: sensor frame or map frame
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cones: Vec<super::msg::Cone>,

}



impl Default for ConeArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ConeArray::default())
  }
}

impl rosidl_runtime_rs::Message for ConeArray {
  type RmwMsg = super::msg::rmw::ConeArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        cones: msg.cones
          .into_iter()
          .map(|elem| super::msg::Cone::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        cones: msg.cones
          .iter()
          .map(|elem| super::msg::Cone::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      cones: msg.cones
          .into_iter()
          .map(super::msg::Cone::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to wuta_msgs__msg__ConeMap
/// Global cone map in map frame, organized by color

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ConeMap {
    /// frame_id: "map"
    pub header: std_msgs::msg::Header,

    /// Left boundary (blue)
    pub blue_cones: Vec<super::msg::Cone>,

    /// Right boundary (yellow)
    pub yellow_cones: Vec<super::msg::Cone>,

    /// Start/finish line
    pub orange_cones: Vec<super::msg::Cone>,

    /// Unclassified
    pub unknown_cones: Vec<super::msg::Cone>,

    /// True when track loop is closed
    pub is_closed: bool,

}



impl Default for ConeMap {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ConeMap::default())
  }
}

impl rosidl_runtime_rs::Message for ConeMap {
  type RmwMsg = super::msg::rmw::ConeMap;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        blue_cones: msg.blue_cones
          .into_iter()
          .map(|elem| super::msg::Cone::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        yellow_cones: msg.yellow_cones
          .into_iter()
          .map(|elem| super::msg::Cone::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        orange_cones: msg.orange_cones
          .into_iter()
          .map(|elem| super::msg::Cone::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        unknown_cones: msg.unknown_cones
          .into_iter()
          .map(|elem| super::msg::Cone::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        is_closed: msg.is_closed,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        blue_cones: msg.blue_cones
          .iter()
          .map(|elem| super::msg::Cone::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        yellow_cones: msg.yellow_cones
          .iter()
          .map(|elem| super::msg::Cone::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        orange_cones: msg.orange_cones
          .iter()
          .map(|elem| super::msg::Cone::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        unknown_cones: msg.unknown_cones
          .iter()
          .map(|elem| super::msg::Cone::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      is_closed: msg.is_closed,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      blue_cones: msg.blue_cones
          .into_iter()
          .map(super::msg::Cone::from_rmw_message)
          .collect(),
      yellow_cones: msg.yellow_cones
          .into_iter()
          .map(super::msg::Cone::from_rmw_message)
          .collect(),
      orange_cones: msg.orange_cones
          .into_iter()
          .map(super::msg::Cone::from_rmw_message)
          .collect(),
      unknown_cones: msg.unknown_cones
          .into_iter()
          .map(super::msg::Cone::from_rmw_message)
          .collect(),
      is_closed: msg.is_closed,
    }
  }
}


// Corresponds to wuta_msgs__msg__MissionState
/// Mission and system state for Mission Manager
/// State constants

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MissionState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


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
    pub description: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MissionState::default())
  }
}

impl rosidl_runtime_rs::Message for MissionState {
  type RmwMsg = super::msg::rmw::MissionState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        state: msg.state,
        mission_mode: msg.mission_mode,
        localization_mode: msg.localization_mode,
        description: msg.description.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      state: msg.state,
      mission_mode: msg.mission_mode,
      localization_mode: msg.localization_mode,
        description: msg.description.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      state: msg.state,
      mission_mode: msg.mission_mode,
      localization_mode: msg.localization_mode,
      description: msg.description.to_string(),
    }
  }
}


