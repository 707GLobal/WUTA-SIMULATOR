# generated from rosidl_generator_py/resource/_idl.py.em
# with input from wuta_msgs:msg/ConeMap.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ConeMap(type):
    """Metaclass of message 'ConeMap'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('wuta_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'wuta_msgs.msg.ConeMap')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__cone_map
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__cone_map
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__cone_map
            cls._TYPE_SUPPORT = module.type_support_msg__msg__cone_map
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__cone_map

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from wuta_msgs.msg import Cone
            if Cone.__class__._TYPE_SUPPORT is None:
                Cone.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ConeMap(metaclass=Metaclass_ConeMap):
    """Message class 'ConeMap'."""

    __slots__ = [
        '_header',
        '_blue_cones',
        '_yellow_cones',
        '_orange_cones',
        '_unknown_cones',
        '_is_closed',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'blue_cones': 'sequence<wuta_msgs/Cone>',
        'yellow_cones': 'sequence<wuta_msgs/Cone>',
        'orange_cones': 'sequence<wuta_msgs/Cone>',
        'unknown_cones': 'sequence<wuta_msgs/Cone>',
        'is_closed': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['wuta_msgs', 'msg'], 'Cone')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['wuta_msgs', 'msg'], 'Cone')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['wuta_msgs', 'msg'], 'Cone')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['wuta_msgs', 'msg'], 'Cone')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.blue_cones = kwargs.get('blue_cones', [])
        self.yellow_cones = kwargs.get('yellow_cones', [])
        self.orange_cones = kwargs.get('orange_cones', [])
        self.unknown_cones = kwargs.get('unknown_cones', [])
        self.is_closed = kwargs.get('is_closed', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.blue_cones != other.blue_cones:
            return False
        if self.yellow_cones != other.yellow_cones:
            return False
        if self.orange_cones != other.orange_cones:
            return False
        if self.unknown_cones != other.unknown_cones:
            return False
        if self.is_closed != other.is_closed:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def blue_cones(self):
        """Message field 'blue_cones'."""
        return self._blue_cones

    @blue_cones.setter
    def blue_cones(self, value):
        if __debug__:
            from wuta_msgs.msg import Cone
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Cone) for v in value) and
                 True), \
                "The 'blue_cones' field must be a set or sequence and each value of type 'Cone'"
        self._blue_cones = value

    @builtins.property
    def yellow_cones(self):
        """Message field 'yellow_cones'."""
        return self._yellow_cones

    @yellow_cones.setter
    def yellow_cones(self, value):
        if __debug__:
            from wuta_msgs.msg import Cone
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Cone) for v in value) and
                 True), \
                "The 'yellow_cones' field must be a set or sequence and each value of type 'Cone'"
        self._yellow_cones = value

    @builtins.property
    def orange_cones(self):
        """Message field 'orange_cones'."""
        return self._orange_cones

    @orange_cones.setter
    def orange_cones(self, value):
        if __debug__:
            from wuta_msgs.msg import Cone
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Cone) for v in value) and
                 True), \
                "The 'orange_cones' field must be a set or sequence and each value of type 'Cone'"
        self._orange_cones = value

    @builtins.property
    def unknown_cones(self):
        """Message field 'unknown_cones'."""
        return self._unknown_cones

    @unknown_cones.setter
    def unknown_cones(self, value):
        if __debug__:
            from wuta_msgs.msg import Cone
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Cone) for v in value) and
                 True), \
                "The 'unknown_cones' field must be a set or sequence and each value of type 'Cone'"
        self._unknown_cones = value

    @builtins.property
    def is_closed(self):
        """Message field 'is_closed'."""
        return self._is_closed

    @is_closed.setter
    def is_closed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_closed' field must be of type 'bool'"
        self._is_closed = value
