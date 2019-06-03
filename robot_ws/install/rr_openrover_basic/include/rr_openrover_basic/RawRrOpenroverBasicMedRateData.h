// Generated by gencpp from file rr_openrover_basic/RawRrOpenroverBasicMedRateData.msg
// DO NOT EDIT!


#ifndef RR_OPENROVER_BASIC_MESSAGE_RAWRROPENROVERBASICMEDRATEDATA_H
#define RR_OPENROVER_BASIC_MESSAGE_RAWRROPENROVERBASICMEDRATEDATA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace rr_openrover_basic
{
template <class ContainerAllocator>
struct RawRrOpenroverBasicMedRateData_
{
  typedef RawRrOpenroverBasicMedRateData_<ContainerAllocator> Type;

  RawRrOpenroverBasicMedRateData_()
    : header()
    , reg_pwr_total_current(0)
    , reg_motor_fb_rpm_left(0)
    , reg_motor_fb_rpm_right(0)
    , reg_flipper_fb_position_pot1(0)
    , reg_flipper_fb_position_pot2(0)
    , reg_motor_fb_current_left(0)
    , reg_motor_fb_current_right(0)
    , reg_motor_charger_state(0)
    , reg_power_a_current(0)
    , reg_power_b_current(0)
    , reg_motor_flipper_angle(0)
    , battery_current_a(0)
    , battery_current_b(0)  {
    }
  RawRrOpenroverBasicMedRateData_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , reg_pwr_total_current(0)
    , reg_motor_fb_rpm_left(0)
    , reg_motor_fb_rpm_right(0)
    , reg_flipper_fb_position_pot1(0)
    , reg_flipper_fb_position_pot2(0)
    , reg_motor_fb_current_left(0)
    , reg_motor_fb_current_right(0)
    , reg_motor_charger_state(0)
    , reg_power_a_current(0)
    , reg_power_b_current(0)
    , reg_motor_flipper_angle(0)
    , battery_current_a(0)
    , battery_current_b(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _reg_pwr_total_current_type;
  _reg_pwr_total_current_type reg_pwr_total_current;

   typedef int32_t _reg_motor_fb_rpm_left_type;
  _reg_motor_fb_rpm_left_type reg_motor_fb_rpm_left;

   typedef int32_t _reg_motor_fb_rpm_right_type;
  _reg_motor_fb_rpm_right_type reg_motor_fb_rpm_right;

   typedef int32_t _reg_flipper_fb_position_pot1_type;
  _reg_flipper_fb_position_pot1_type reg_flipper_fb_position_pot1;

   typedef int32_t _reg_flipper_fb_position_pot2_type;
  _reg_flipper_fb_position_pot2_type reg_flipper_fb_position_pot2;

   typedef int32_t _reg_motor_fb_current_left_type;
  _reg_motor_fb_current_left_type reg_motor_fb_current_left;

   typedef int32_t _reg_motor_fb_current_right_type;
  _reg_motor_fb_current_right_type reg_motor_fb_current_right;

   typedef int32_t _reg_motor_charger_state_type;
  _reg_motor_charger_state_type reg_motor_charger_state;

   typedef int32_t _reg_power_a_current_type;
  _reg_power_a_current_type reg_power_a_current;

   typedef int32_t _reg_power_b_current_type;
  _reg_power_b_current_type reg_power_b_current;

   typedef int32_t _reg_motor_flipper_angle_type;
  _reg_motor_flipper_angle_type reg_motor_flipper_angle;

   typedef int16_t _battery_current_a_type;
  _battery_current_a_type battery_current_a;

   typedef int16_t _battery_current_b_type;
  _battery_current_b_type battery_current_b;





  typedef boost::shared_ptr< ::rr_openrover_basic::RawRrOpenroverBasicMedRateData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rr_openrover_basic::RawRrOpenroverBasicMedRateData_<ContainerAllocator> const> ConstPtr;

}; // struct RawRrOpenroverBasicMedRateData_

typedef ::rr_openrover_basic::RawRrOpenroverBasicMedRateData_<std::allocator<void> > RawRrOpenroverBasicMedRateData;

typedef boost::shared_ptr< ::rr_openrover_basic::RawRrOpenroverBasicMedRateData > RawRrOpenroverBasicMedRateDataPtr;
typedef boost::shared_ptr< ::rr_openrover_basic::RawRrOpenroverBasicMedRateData const> RawRrOpenroverBasicMedRateDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rr_openrover_basic::RawRrOpenroverBasicMedRateData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rr_openrover_basic::RawRrOpenroverBasicMedRateData_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rr_openrover_basic

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'rr_openrover_basic': ['/home/nickp/Desktop/aws-robomaker-sample-application-roverrobotics/robot_ws/src/rr_openrover_basic/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rr_openrover_basic::RawRrOpenroverBasicMedRateData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rr_openrover_basic::RawRrOpenroverBasicMedRateData_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rr_openrover_basic::RawRrOpenroverBasicMedRateData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rr_openrover_basic::RawRrOpenroverBasicMedRateData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rr_openrover_basic::RawRrOpenroverBasicMedRateData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rr_openrover_basic::RawRrOpenroverBasicMedRateData_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rr_openrover_basic::RawRrOpenroverBasicMedRateData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8d1326600b05770e80fedaabbf1fed8a";
  }

  static const char* value(const ::rr_openrover_basic::RawRrOpenroverBasicMedRateData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8d1326600b05770eULL;
  static const uint64_t static_value2 = 0x80fedaabbf1fed8aULL;
};

template<class ContainerAllocator>
struct DataType< ::rr_openrover_basic::RawRrOpenroverBasicMedRateData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rr_openrover_basic/RawRrOpenroverBasicMedRateData";
  }

  static const char* value(const ::rr_openrover_basic::RawRrOpenroverBasicMedRateData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rr_openrover_basic::RawRrOpenroverBasicMedRateData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
int32 reg_pwr_total_current\n\
int32 reg_motor_fb_rpm_left\n\
int32 reg_motor_fb_rpm_right\n\
int32 reg_flipper_fb_position_pot1\n\
int32 reg_flipper_fb_position_pot2\n\
int32 reg_motor_fb_current_left\n\
int32 reg_motor_fb_current_right\n\
int32 reg_motor_charger_state\n\
int32 reg_power_a_current\n\
int32 reg_power_b_current\n\
int32 reg_motor_flipper_angle\n\
int16 battery_current_a\n\
int16 battery_current_b\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::rr_openrover_basic::RawRrOpenroverBasicMedRateData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rr_openrover_basic::RawRrOpenroverBasicMedRateData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.reg_pwr_total_current);
      stream.next(m.reg_motor_fb_rpm_left);
      stream.next(m.reg_motor_fb_rpm_right);
      stream.next(m.reg_flipper_fb_position_pot1);
      stream.next(m.reg_flipper_fb_position_pot2);
      stream.next(m.reg_motor_fb_current_left);
      stream.next(m.reg_motor_fb_current_right);
      stream.next(m.reg_motor_charger_state);
      stream.next(m.reg_power_a_current);
      stream.next(m.reg_power_b_current);
      stream.next(m.reg_motor_flipper_angle);
      stream.next(m.battery_current_a);
      stream.next(m.battery_current_b);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RawRrOpenroverBasicMedRateData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rr_openrover_basic::RawRrOpenroverBasicMedRateData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rr_openrover_basic::RawRrOpenroverBasicMedRateData_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "reg_pwr_total_current: ";
    Printer<int32_t>::stream(s, indent + "  ", v.reg_pwr_total_current);
    s << indent << "reg_motor_fb_rpm_left: ";
    Printer<int32_t>::stream(s, indent + "  ", v.reg_motor_fb_rpm_left);
    s << indent << "reg_motor_fb_rpm_right: ";
    Printer<int32_t>::stream(s, indent + "  ", v.reg_motor_fb_rpm_right);
    s << indent << "reg_flipper_fb_position_pot1: ";
    Printer<int32_t>::stream(s, indent + "  ", v.reg_flipper_fb_position_pot1);
    s << indent << "reg_flipper_fb_position_pot2: ";
    Printer<int32_t>::stream(s, indent + "  ", v.reg_flipper_fb_position_pot2);
    s << indent << "reg_motor_fb_current_left: ";
    Printer<int32_t>::stream(s, indent + "  ", v.reg_motor_fb_current_left);
    s << indent << "reg_motor_fb_current_right: ";
    Printer<int32_t>::stream(s, indent + "  ", v.reg_motor_fb_current_right);
    s << indent << "reg_motor_charger_state: ";
    Printer<int32_t>::stream(s, indent + "  ", v.reg_motor_charger_state);
    s << indent << "reg_power_a_current: ";
    Printer<int32_t>::stream(s, indent + "  ", v.reg_power_a_current);
    s << indent << "reg_power_b_current: ";
    Printer<int32_t>::stream(s, indent + "  ", v.reg_power_b_current);
    s << indent << "reg_motor_flipper_angle: ";
    Printer<int32_t>::stream(s, indent + "  ", v.reg_motor_flipper_angle);
    s << indent << "battery_current_a: ";
    Printer<int16_t>::stream(s, indent + "  ", v.battery_current_a);
    s << indent << "battery_current_b: ";
    Printer<int16_t>::stream(s, indent + "  ", v.battery_current_b);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RR_OPENROVER_BASIC_MESSAGE_RAWRROPENROVERBASICMEDRATEDATA_H