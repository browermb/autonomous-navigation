// Generated by gencpp from file navigation_msgs/VelAngle.msg
// DO NOT EDIT!


#ifndef NAVIGATION_MSGS_MESSAGE_VELANGLE_H
#define NAVIGATION_MSGS_MESSAGE_VELANGLE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace navigation_msgs
{
template <class ContainerAllocator>
struct VelAngle_
{
  typedef VelAngle_<ContainerAllocator> Type;

  VelAngle_()
    : header()
    , vel(0.0)
    , angle(0.0)
    , vel_curr(0.0)  {
    }
  VelAngle_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , vel(0.0)
    , angle(0.0)
    , vel_curr(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _vel_type;
  _vel_type vel;

   typedef double _angle_type;
  _angle_type angle;

   typedef double _vel_curr_type;
  _vel_curr_type vel_curr;





  typedef boost::shared_ptr< ::navigation_msgs::VelAngle_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::navigation_msgs::VelAngle_<ContainerAllocator> const> ConstPtr;

}; // struct VelAngle_

typedef ::navigation_msgs::VelAngle_<std::allocator<void> > VelAngle;

typedef boost::shared_ptr< ::navigation_msgs::VelAngle > VelAnglePtr;
typedef boost::shared_ptr< ::navigation_msgs::VelAngle const> VelAngleConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::navigation_msgs::VelAngle_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::navigation_msgs::VelAngle_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace navigation_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'navigation_msgs': ['/home/browermb/jmuautonomous/autonomous-navigation/catkin_ws/src/navigation_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::navigation_msgs::VelAngle_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::navigation_msgs::VelAngle_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::navigation_msgs::VelAngle_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::navigation_msgs::VelAngle_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::navigation_msgs::VelAngle_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::navigation_msgs::VelAngle_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::navigation_msgs::VelAngle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b6d78569f7e4cb35a5565b9ea70cb7e5";
  }

  static const char* value(const ::navigation_msgs::VelAngle_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb6d78569f7e4cb35ULL;
  static const uint64_t static_value2 = 0xa5565b9ea70cb7e5ULL;
};

template<class ContainerAllocator>
struct DataType< ::navigation_msgs::VelAngle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "navigation_msgs/VelAngle";
  }

  static const char* value(const ::navigation_msgs::VelAngle_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::navigation_msgs::VelAngle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
float64 vel\n\
float64 angle\n\
float64 vel_curr\n\
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

  static const char* value(const ::navigation_msgs::VelAngle_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::navigation_msgs::VelAngle_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.vel);
      stream.next(m.angle);
      stream.next(m.vel_curr);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VelAngle_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::navigation_msgs::VelAngle_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::navigation_msgs::VelAngle_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "vel: ";
    Printer<double>::stream(s, indent + "  ", v.vel);
    s << indent << "angle: ";
    Printer<double>::stream(s, indent + "  ", v.angle);
    s << indent << "vel_curr: ";
    Printer<double>::stream(s, indent + "  ", v.vel_curr);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NAVIGATION_MSGS_MESSAGE_VELANGLE_H