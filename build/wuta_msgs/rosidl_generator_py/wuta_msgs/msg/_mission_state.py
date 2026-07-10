# generated from rosidl_generator_py/resource/_idl.py.em
# with input from wuta_msgs:msg/MissionState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MissionState(type):
    """Metaclass of message 'MissionState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'IDLE': 0,
        'READY': 1,
        'INSPECTION': 2,
        'EXPLORE': 3,
        'MAPPING_DONE': 4,
        'RACE': 5,
        'FINISH': 6,
        'EMERGENCY': 7,
        'MISSION_TRACKDRIVE': 0,
        'MISSION_SKIDPAD': 1,
        'MISSION_ACCELERATION': 2,
        'LOC_KISS_ICP': 0,
        'LOC_NDT': 1,
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
                'wuta_msgs.msg.MissionState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mission_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mission_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mission_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mission_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mission_state

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'IDLE': cls.__constants['IDLE'],
            'READY': cls.__constants['READY'],
            'INSPECTION': cls.__constants['INSPECTION'],
            'EXPLORE': cls.__constants['EXPLORE'],
            'MAPPING_DONE': cls.__constants['MAPPING_DONE'],
            'RACE': cls.__constants['RACE'],
            'FINISH': cls.__constants['FINISH'],
            'EMERGENCY': cls.__constants['EMERGENCY'],
            'MISSION_TRACKDRIVE': cls.__constants['MISSION_TRACKDRIVE'],
            'MISSION_SKIDPAD': cls.__constants['MISSION_SKIDPAD'],
            'MISSION_ACCELERATION': cls.__constants['MISSION_ACCELERATION'],
            'LOC_KISS_ICP': cls.__constants['LOC_KISS_ICP'],
            'LOC_NDT': cls.__constants['LOC_NDT'],
        }

    @property
    def IDLE(self):
        """Message constant 'IDLE'."""
        return Metaclass_MissionState.__constants['IDLE']

    @property
    def READY(self):
        """Message constant 'READY'."""
        return Metaclass_MissionState.__constants['READY']

    @property
    def INSPECTION(self):
        """Message constant 'INSPECTION'."""
        return Metaclass_MissionState.__constants['INSPECTION']

    @property
    def EXPLORE(self):
        """Message constant 'EXPLORE'."""
        return Metaclass_MissionState.__constants['EXPLORE']

    @property
    def MAPPING_DONE(self):
        """Message constant 'MAPPING_DONE'."""
        return Metaclass_MissionState.__constants['MAPPING_DONE']

    @property
    def RACE(self):
        """Message constant 'RACE'."""
        return Metaclass_MissionState.__constants['RACE']

    @property
    def FINISH(self):
        """Message constant 'FINISH'."""
        return Metaclass_MissionState.__constants['FINISH']

    @property
    def EMERGENCY(self):
        """Message constant 'EMERGENCY'."""
        return Metaclass_MissionState.__constants['EMERGENCY']

    @property
    def MISSION_TRACKDRIVE(self):
        """Message constant 'MISSION_TRACKDRIVE'."""
        return Metaclass_MissionState.__constants['MISSION_TRACKDRIVE']

    @property
    def MISSION_SKIDPAD(self):
        """Message constant 'MISSION_SKIDPAD'."""
        return Metaclass_MissionState.__constants['MISSION_SKIDPAD']

    @property
    def MISSION_ACCELERATION(self):
        """Message constant 'MISSION_ACCELERATION'."""
        return Metaclass_MissionState.__constants['MISSION_ACCELERATION']

    @property
    def LOC_KISS_ICP(self):
        """Message constant 'LOC_KISS_ICP'."""
        return Metaclass_MissionState.__constants['LOC_KISS_ICP']

    @property
    def LOC_NDT(self):
        """Message constant 'LOC_NDT'."""
        return Metaclass_MissionState.__constants['LOC_NDT']


class MissionState(metaclass=Metaclass_MissionState):
    """
    Message class 'MissionState'.

    Constants:
      IDLE
      READY
      INSPECTION
      EXPLORE
      MAPPING_DONE
      RACE
      FINISH
      EMERGENCY
      MISSION_TRACKDRIVE
      MISSION_SKIDPAD
      MISSION_ACCELERATION
      LOC_KISS_ICP
      LOC_NDT
    """

    __slots__ = [
        '_header',
        '_state',
        '_mission_mode',
        '_localization_mode',
        '_description',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'state': 'uint8',
        'mission_mode': 'uint8',
        'localization_mode': 'uint8',
        'description': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.state = kwargs.get('state', int())
        self.mission_mode = kwargs.get('mission_mode', int())
        self.localization_mode = kwargs.get('localization_mode', int())
        self.description = kwargs.get('description', str())

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
        if self.state != other.state:
            return False
        if self.mission_mode != other.mission_mode:
            return False
        if self.localization_mode != other.localization_mode:
            return False
        if self.description != other.description:
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
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'state' field must be an unsigned integer in [0, 255]"
        self._state = value

    @builtins.property
    def mission_mode(self):
        """Message field 'mission_mode'."""
        return self._mission_mode

    @mission_mode.setter
    def mission_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mission_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mission_mode' field must be an unsigned integer in [0, 255]"
        self._mission_mode = value

    @builtins.property
    def localization_mode(self):
        """Message field 'localization_mode'."""
        return self._localization_mode

    @localization_mode.setter
    def localization_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'localization_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'localization_mode' field must be an unsigned integer in [0, 255]"
        self._localization_mode = value

    @builtins.property
    def description(self):
        """Message field 'description'."""
        return self._description

    @description.setter
    def description(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'description' field must be of type 'str'"
        self._description = value
