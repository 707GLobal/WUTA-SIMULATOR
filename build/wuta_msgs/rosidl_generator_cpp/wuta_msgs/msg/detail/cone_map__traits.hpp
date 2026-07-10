// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wuta_msgs:msg/ConeMap.idl
// generated code does not contain a copyright notice

#ifndef WUTA_MSGS__MSG__DETAIL__CONE_MAP__TRAITS_HPP_
#define WUTA_MSGS__MSG__DETAIL__CONE_MAP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wuta_msgs/msg/detail/cone_map__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'blue_cones'
// Member 'yellow_cones'
// Member 'orange_cones'
// Member 'unknown_cones'
#include "wuta_msgs/msg/detail/cone__traits.hpp"

namespace wuta_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ConeMap & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: blue_cones
  {
    if (msg.blue_cones.size() == 0) {
      out << "blue_cones: []";
    } else {
      out << "blue_cones: [";
      size_t pending_items = msg.blue_cones.size();
      for (auto item : msg.blue_cones) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: yellow_cones
  {
    if (msg.yellow_cones.size() == 0) {
      out << "yellow_cones: []";
    } else {
      out << "yellow_cones: [";
      size_t pending_items = msg.yellow_cones.size();
      for (auto item : msg.yellow_cones) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: orange_cones
  {
    if (msg.orange_cones.size() == 0) {
      out << "orange_cones: []";
    } else {
      out << "orange_cones: [";
      size_t pending_items = msg.orange_cones.size();
      for (auto item : msg.orange_cones) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: unknown_cones
  {
    if (msg.unknown_cones.size() == 0) {
      out << "unknown_cones: []";
    } else {
      out << "unknown_cones: [";
      size_t pending_items = msg.unknown_cones.size();
      for (auto item : msg.unknown_cones) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: is_closed
  {
    out << "is_closed: ";
    rosidl_generator_traits::value_to_yaml(msg.is_closed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ConeMap & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: blue_cones
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.blue_cones.size() == 0) {
      out << "blue_cones: []\n";
    } else {
      out << "blue_cones:\n";
      for (auto item : msg.blue_cones) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: yellow_cones
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.yellow_cones.size() == 0) {
      out << "yellow_cones: []\n";
    } else {
      out << "yellow_cones:\n";
      for (auto item : msg.yellow_cones) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: orange_cones
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.orange_cones.size() == 0) {
      out << "orange_cones: []\n";
    } else {
      out << "orange_cones:\n";
      for (auto item : msg.orange_cones) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: unknown_cones
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.unknown_cones.size() == 0) {
      out << "unknown_cones: []\n";
    } else {
      out << "unknown_cones:\n";
      for (auto item : msg.unknown_cones) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: is_closed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_closed: ";
    rosidl_generator_traits::value_to_yaml(msg.is_closed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ConeMap & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace wuta_msgs

namespace rosidl_generator_traits
{

[[deprecated("use wuta_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const wuta_msgs::msg::ConeMap & msg,
  std::ostream & out, size_t indentation = 0)
{
  wuta_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wuta_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const wuta_msgs::msg::ConeMap & msg)
{
  return wuta_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wuta_msgs::msg::ConeMap>()
{
  return "wuta_msgs::msg::ConeMap";
}

template<>
inline const char * name<wuta_msgs::msg::ConeMap>()
{
  return "wuta_msgs/msg/ConeMap";
}

template<>
struct has_fixed_size<wuta_msgs::msg::ConeMap>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<wuta_msgs::msg::ConeMap>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<wuta_msgs::msg::ConeMap>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WUTA_MSGS__MSG__DETAIL__CONE_MAP__TRAITS_HPP_
