// Generated by gencpp from file rr_openrover_basic/RawRrOpenroverBasicFastRateData.msg
// DO NOT EDIT!


#ifndef RR_OPENROVER_BASIC_MESSAGE_RAWRROPENROVERBASICFASTRATEDATA_H
#define RR_OPENROVER_BASIC_MESSAGE_RAWRROPENROVERBASICFASTRATEDATA_H


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
struct RawRrOpenroverBasicFastRateData_
{
  typedef RawRrOpenroverBasicFastRateData_<ContainerAllocator> Type;

  RawRrOpenroverBasicFastRateData_()
    : header()
    , left_motor(0)
    , right_motor(0)
    , flipper_motor(0)  {
    }
  RawRrOpenroverBasicFastRateData_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , left_motor(0)
    , right_motor(0)
    , flipper_motor(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _left_motor_type;
  _left_motor_type left_motor;

   typedef int32_t _right_motor_type;
  _right_motor_type right_motor;

   typedef int32_t _flipper_motor_type;
  _flipper_motor_type flipper_motor;





  typedef boost::shared_ptr< ::rr_openrover_basic::RawRrOpenroverBasicFastRateData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rr_openrover_basic::RawRrOpenroverBasicFastRateData_<ContainerAllocator> const> ConstPtr;

}; // struct RawRrOpenroverBasicFastRateData_

typedef ::rr_openrover_basic::RawRrOpenroverBasicFastRateData_<std::allocator<void> > RawRrOpenroverBasicFastRateData;

typedef boost::shared_ptr< ::rr_openrover_basic::RawRrOpenroverBasicFastRateData > RawRrOpenroverBasicFastRateDataPtr;
typedef boost::shared_ptr< ::rr_openrover_basic::RawRrOpenroverBasicFastRateData const> RawRrOpenroverBasicFastRateDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rr_openrover_basic::RawRrOpenroverBasicFastRateData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rr_openrover_basic::RawRrOpenroverBasicFastRateData_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::rr_openrover_basic::RawRrOpenroverBasicFastRateData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rr_openrover_basic::RawRrOpenroverBasicFastRateData_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rr_openrover_basic::RawRrOpenroverBasicFastRateData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rr_openrover_basic::RawRrOpenroverBasicFastRateData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rr_openrover_basic::RawRrOpenroverBasicFastRateData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rr_openrover_basic::RawRrOpenroverBasicFastRateData_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rr_openrover_basic::RawRrOpenroverBasicFastRateData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ac325592ef354d083265d71820563c4b";
  }

  static const char* value(const ::rr_openrover_basic::RawRrOpenroverBasicFastRateData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xac325592ef354d08ULL;
  static const uint64_t static_value2 = 0x3265d71820563c4bULL;
};

template<class ContainerAllocator>
struct DataType< ::rr_openrover_basic::RawRrOpenroverBasicFastRateData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rr_openrover_basic/RawRrOpenroverBasicFastRateData";
  }

  static const char* value(const ::rr_openrover_basic::RawRrOpenroverBasicFastRateData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rr_openrover_basic::RawRrOpenroverBasicFastRateData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
int32 left_motor\n\
int32 right_motor\n\
int32 flipper_motor\n\
\n\
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

  static const char* value(const ::rr_openrover_basic::RawRrOpenroverBasicFastRateData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rr_openrover_basic::RawRrOpenroverBasicFastRateData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.left_motor);
      stream.next(m.right_motor);
      stream.next(m.flipper_motor);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RawRrOpenroverBasicFastRateData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rr_openrover_basic::RawRrOpenroverBasicFastRateData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rr_openrover_basic::RawRrOpenroverBasicFastRateData_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "left_motor: ";
    Printer<int32_t>::stream(s, indent + "  ", v.left_motor);
    s << indent << "right_motor: ";
    Printer<int32_t>::stream(s, indent + "  ", v.right_motor);
    s << indent << "flipper_motor: ";
    Printer<int32_t>::stream(s, indent + "  ", v.flipper_motor);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RR_OPENROVER_BASIC_MESSAGE_RAWRROPENROVERBASICFASTRATEDATA_H