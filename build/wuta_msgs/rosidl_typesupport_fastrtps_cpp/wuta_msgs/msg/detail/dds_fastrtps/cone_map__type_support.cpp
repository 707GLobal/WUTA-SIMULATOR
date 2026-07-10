// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from wuta_msgs:msg/ConeMap.idl
// generated code does not contain a copyright notice
#include "wuta_msgs/msg/detail/cone_map__rosidl_typesupport_fastrtps_cpp.hpp"
#include "wuta_msgs/msg/detail/cone_map__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace wuta_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const wuta_msgs::msg::Cone &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  wuta_msgs::msg::Cone &);
size_t get_serialized_size(
  const wuta_msgs::msg::Cone &,
  size_t current_alignment);
size_t
max_serialized_size_Cone(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace wuta_msgs

// functions for wuta_msgs::msg::Cone already declared above

// functions for wuta_msgs::msg::Cone already declared above

// functions for wuta_msgs::msg::Cone already declared above


namespace wuta_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wuta_msgs
cdr_serialize(
  const wuta_msgs::msg::ConeMap & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: blue_cones
  {
    size_t size = ros_message.blue_cones.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      wuta_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.blue_cones[i],
        cdr);
    }
  }
  // Member: yellow_cones
  {
    size_t size = ros_message.yellow_cones.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      wuta_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.yellow_cones[i],
        cdr);
    }
  }
  // Member: orange_cones
  {
    size_t size = ros_message.orange_cones.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      wuta_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.orange_cones[i],
        cdr);
    }
  }
  // Member: unknown_cones
  {
    size_t size = ros_message.unknown_cones.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      wuta_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.unknown_cones[i],
        cdr);
    }
  }
  // Member: is_closed
  cdr << (ros_message.is_closed ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wuta_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  wuta_msgs::msg::ConeMap & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: blue_cones
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    ros_message.blue_cones.resize(size);
    for (size_t i = 0; i < size; i++) {
      wuta_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.blue_cones[i]);
    }
  }

  // Member: yellow_cones
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    ros_message.yellow_cones.resize(size);
    for (size_t i = 0; i < size; i++) {
      wuta_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.yellow_cones[i]);
    }
  }

  // Member: orange_cones
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    ros_message.orange_cones.resize(size);
    for (size_t i = 0; i < size; i++) {
      wuta_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.orange_cones[i]);
    }
  }

  // Member: unknown_cones
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    ros_message.unknown_cones.resize(size);
    for (size_t i = 0; i < size; i++) {
      wuta_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.unknown_cones[i]);
    }
  }

  // Member: is_closed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_closed = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wuta_msgs
get_serialized_size(
  const wuta_msgs::msg::ConeMap & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: blue_cones
  {
    size_t array_size = ros_message.blue_cones.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        wuta_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.blue_cones[index], current_alignment);
    }
  }
  // Member: yellow_cones
  {
    size_t array_size = ros_message.yellow_cones.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        wuta_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.yellow_cones[index], current_alignment);
    }
  }
  // Member: orange_cones
  {
    size_t array_size = ros_message.orange_cones.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        wuta_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.orange_cones[index], current_alignment);
    }
  }
  // Member: unknown_cones
  {
    size_t array_size = ros_message.unknown_cones.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        wuta_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.unknown_cones[index], current_alignment);
    }
  }
  // Member: is_closed
  {
    size_t item_size = sizeof(ros_message.is_closed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wuta_msgs
max_serialized_size_ConeMap(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: blue_cones
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        wuta_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Cone(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: yellow_cones
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        wuta_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Cone(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: orange_cones
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        wuta_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Cone(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: unknown_cones
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        wuta_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Cone(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: is_closed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = wuta_msgs::msg::ConeMap;
    is_plain =
      (
      offsetof(DataType, is_closed) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ConeMap__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const wuta_msgs::msg::ConeMap *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ConeMap__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<wuta_msgs::msg::ConeMap *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ConeMap__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const wuta_msgs::msg::ConeMap *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ConeMap__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ConeMap(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ConeMap__callbacks = {
  "wuta_msgs::msg",
  "ConeMap",
  _ConeMap__cdr_serialize,
  _ConeMap__cdr_deserialize,
  _ConeMap__get_serialized_size,
  _ConeMap__max_serialized_size
};

static rosidl_message_type_support_t _ConeMap__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ConeMap__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace wuta_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_wuta_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<wuta_msgs::msg::ConeMap>()
{
  return &wuta_msgs::msg::typesupport_fastrtps_cpp::_ConeMap__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, wuta_msgs, msg, ConeMap)() {
  return &wuta_msgs::msg::typesupport_fastrtps_cpp::_ConeMap__handle;
}

#ifdef __cplusplus
}
#endif
