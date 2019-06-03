// Generated by gencpp from file bno055_usb_stick_msgs/Output.msg
// DO NOT EDIT!


#ifndef BNO055_USB_STICK_MSGS_MESSAGE_OUTPUT_H
#define BNO055_USB_STICK_MSGS_MESSAGE_OUTPUT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>
#include <bno055_usb_stick_msgs/EulerAngles.h>
#include <geometry_msgs/Quaternion.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>
#include <bno055_usb_stick_msgs/CalibrationStatus.h>

namespace bno055_usb_stick_msgs
{
template <class ContainerAllocator>
struct Output_
{
  typedef Output_<ContainerAllocator> Type;

  Output_()
    : header()
    , acceleration()
    , magnetometer()
    , gyroscope()
    , euler_angles()
    , quaternion()
    , linear_acceleration()
    , gravity_vector()
    , temperature(0.0)
    , calibration_status()  {
    }
  Output_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , acceleration(_alloc)
    , magnetometer(_alloc)
    , gyroscope(_alloc)
    , euler_angles(_alloc)
    , quaternion(_alloc)
    , linear_acceleration(_alloc)
    , gravity_vector(_alloc)
    , temperature(0.0)
    , calibration_status(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _acceleration_type;
  _acceleration_type acceleration;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _magnetometer_type;
  _magnetometer_type magnetometer;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _gyroscope_type;
  _gyroscope_type gyroscope;

   typedef  ::bno055_usb_stick_msgs::EulerAngles_<ContainerAllocator>  _euler_angles_type;
  _euler_angles_type euler_angles;

   typedef  ::geometry_msgs::Quaternion_<ContainerAllocator>  _quaternion_type;
  _quaternion_type quaternion;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _linear_acceleration_type;
  _linear_acceleration_type linear_acceleration;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _gravity_vector_type;
  _gravity_vector_type gravity_vector;

   typedef double _temperature_type;
  _temperature_type temperature;

   typedef  ::bno055_usb_stick_msgs::CalibrationStatus_<ContainerAllocator>  _calibration_status_type;
  _calibration_status_type calibration_status;





  typedef boost::shared_ptr< ::bno055_usb_stick_msgs::Output_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bno055_usb_stick_msgs::Output_<ContainerAllocator> const> ConstPtr;

}; // struct Output_

typedef ::bno055_usb_stick_msgs::Output_<std::allocator<void> > Output;

typedef boost::shared_ptr< ::bno055_usb_stick_msgs::Output > OutputPtr;
typedef boost::shared_ptr< ::bno055_usb_stick_msgs::Output const> OutputConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bno055_usb_stick_msgs::Output_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bno055_usb_stick_msgs::Output_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace bno055_usb_stick_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'bno055_usb_stick_msgs': ['/home/nickp/Desktop/aws-robomaker-sample-application-roverrobotics/robot_ws/src/bno055_usb_stick_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::bno055_usb_stick_msgs::Output_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bno055_usb_stick_msgs::Output_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bno055_usb_stick_msgs::Output_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bno055_usb_stick_msgs::Output_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bno055_usb_stick_msgs::Output_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bno055_usb_stick_msgs::Output_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bno055_usb_stick_msgs::Output_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1189549f30b7c0d425e89b36006afea6";
  }

  static const char* value(const ::bno055_usb_stick_msgs::Output_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1189549f30b7c0d4ULL;
  static const uint64_t static_value2 = 0x25e89b36006afea6ULL;
};

template<class ContainerAllocator>
struct DataType< ::bno055_usb_stick_msgs::Output_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bno055_usb_stick_msgs/Output";
  }

  static const char* value(const ::bno055_usb_stick_msgs::Output_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bno055_usb_stick_msgs::Output_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
geometry_msgs/Vector3 acceleration\n\
geometry_msgs/Vector3 magnetometer\n\
geometry_msgs/Vector3 gyroscope\n\
bno055_usb_stick_msgs/EulerAngles euler_angles\n\
geometry_msgs/Quaternion quaternion\n\
geometry_msgs/Vector3 linear_acceleration\n\
geometry_msgs/Vector3 gravity_vector\n\
float64 temperature\n\
bno055_usb_stick_msgs/CalibrationStatus calibration_status\n\
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
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
================================================================================\n\
MSG: bno055_usb_stick_msgs/EulerAngles\n\
float64 heading\n\
float64 roll\n\
float64 pitch\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: bno055_usb_stick_msgs/CalibrationStatus\n\
# 3 indicates fully calibrated; 0 indicates not calibrated\n\
\n\
uint16 system\n\
uint16 gyroscope\n\
uint16 accelerometer\n\
uint16 magnetometer\n\
";
  }

  static const char* value(const ::bno055_usb_stick_msgs::Output_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bno055_usb_stick_msgs::Output_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.acceleration);
      stream.next(m.magnetometer);
      stream.next(m.gyroscope);
      stream.next(m.euler_angles);
      stream.next(m.quaternion);
      stream.next(m.linear_acceleration);
      stream.next(m.gravity_vector);
      stream.next(m.temperature);
      stream.next(m.calibration_status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Output_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bno055_usb_stick_msgs::Output_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bno055_usb_stick_msgs::Output_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "acceleration: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.acceleration);
    s << indent << "magnetometer: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.magnetometer);
    s << indent << "gyroscope: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.gyroscope);
    s << indent << "euler_angles: ";
    s << std::endl;
    Printer< ::bno055_usb_stick_msgs::EulerAngles_<ContainerAllocator> >::stream(s, indent + "  ", v.euler_angles);
    s << indent << "quaternion: ";
    s << std::endl;
    Printer< ::geometry_msgs::Quaternion_<ContainerAllocator> >::stream(s, indent + "  ", v.quaternion);
    s << indent << "linear_acceleration: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.linear_acceleration);
    s << indent << "gravity_vector: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.gravity_vector);
    s << indent << "temperature: ";
    Printer<double>::stream(s, indent + "  ", v.temperature);
    s << indent << "calibration_status: ";
    s << std::endl;
    Printer< ::bno055_usb_stick_msgs::CalibrationStatus_<ContainerAllocator> >::stream(s, indent + "  ", v.calibration_status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BNO055_USB_STICK_MSGS_MESSAGE_OUTPUT_H