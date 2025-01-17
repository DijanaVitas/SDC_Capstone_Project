// Generated by gencpp from file dbw_mkz_msgs/BrakeCmd.msg
// DO NOT EDIT!


#ifndef DBW_MKZ_MSGS_MESSAGE_BRAKECMD_H
#define DBW_MKZ_MSGS_MESSAGE_BRAKECMD_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dbw_mkz_msgs
{
template <class ContainerAllocator>
struct BrakeCmd_
{
  typedef BrakeCmd_<ContainerAllocator> Type;

  BrakeCmd_()
    : pedal_cmd(0.0)
    , pedal_cmd_type(0)
    , boo_cmd(false)
    , enable(false)
    , clear(false)
    , ignore(false)
    , count(0)  {
    }
  BrakeCmd_(const ContainerAllocator& _alloc)
    : pedal_cmd(0.0)
    , pedal_cmd_type(0)
    , boo_cmd(false)
    , enable(false)
    , clear(false)
    , ignore(false)
    , count(0)  {
  (void)_alloc;
    }



   typedef float _pedal_cmd_type;
  _pedal_cmd_type pedal_cmd;

   typedef uint8_t _pedal_cmd_type_type;
  _pedal_cmd_type_type pedal_cmd_type;

   typedef uint8_t _boo_cmd_type;
  _boo_cmd_type boo_cmd;

   typedef uint8_t _enable_type;
  _enable_type enable;

   typedef uint8_t _clear_type;
  _clear_type clear;

   typedef uint8_t _ignore_type;
  _ignore_type ignore;

   typedef uint8_t _count_type;
  _count_type count;



  enum {
    CMD_NONE = 0u,
    CMD_PEDAL = 1u,
    CMD_PERCENT = 2u,
    CMD_TORQUE = 3u,
  };

  static const float TORQUE_BOO;
  static const float TORQUE_MAX;

  typedef boost::shared_ptr< ::dbw_mkz_msgs::BrakeCmd_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dbw_mkz_msgs::BrakeCmd_<ContainerAllocator> const> ConstPtr;

}; // struct BrakeCmd_

typedef ::dbw_mkz_msgs::BrakeCmd_<std::allocator<void> > BrakeCmd;

typedef boost::shared_ptr< ::dbw_mkz_msgs::BrakeCmd > BrakeCmdPtr;
typedef boost::shared_ptr< ::dbw_mkz_msgs::BrakeCmd const> BrakeCmdConstPtr;

// constants requiring out of line definition

   

   

   

   

   
   template<typename ContainerAllocator> const float
      BrakeCmd_<ContainerAllocator>::TORQUE_BOO =
        
          520.0
        
        ;
   

   
   template<typename ContainerAllocator> const float
      BrakeCmd_<ContainerAllocator>::TORQUE_MAX =
        
          3412.0
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dbw_mkz_msgs::BrakeCmd_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dbw_mkz_msgs::BrakeCmd_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dbw_mkz_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'dbw_mkz_msgs': ['/home/guilins/catkin_ws/src/SDC_Capstone_Project/ros/src/dbw_mkz_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dbw_mkz_msgs::BrakeCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dbw_mkz_msgs::BrakeCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dbw_mkz_msgs::BrakeCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dbw_mkz_msgs::BrakeCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dbw_mkz_msgs::BrakeCmd_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dbw_mkz_msgs::BrakeCmd_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dbw_mkz_msgs::BrakeCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c0d20e1056976680942e85ab0959826c";
  }

  static const char* value(const ::dbw_mkz_msgs::BrakeCmd_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc0d20e1056976680ULL;
  static const uint64_t static_value2 = 0x942e85ab0959826cULL;
};

template<class ContainerAllocator>
struct DataType< ::dbw_mkz_msgs::BrakeCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dbw_mkz_msgs/BrakeCmd";
  }

  static const char* value(const ::dbw_mkz_msgs::BrakeCmd_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dbw_mkz_msgs::BrakeCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Brake pedal\n\
# Options defined below\n\
float32 pedal_cmd\n\
uint8 pedal_cmd_type\n\
\n\
# Brake On Off (BOO), brake lights\n\
bool boo_cmd\n\
\n\
# Enable\n\
bool enable\n\
\n\
# Clear driver overrides\n\
bool clear\n\
\n\
# Ignore driver overrides\n\
bool ignore\n\
\n\
# Watchdog counter (optional)\n\
uint8 count\n\
\n\
uint8 CMD_NONE=0\n\
uint8 CMD_PEDAL=1   # Unitless, range 0.15 to 0.50\n\
uint8 CMD_PERCENT=2 # Percent of maximum torque, range 0 to 1\n\
uint8 CMD_TORQUE=3  # Nm, range 0 to 3250\n\
\n\
float32 TORQUE_BOO=520  # Nm, brake lights threshold\n\
float32 TORQUE_MAX=3412 # Nm, maximum torque\n\
";
  }

  static const char* value(const ::dbw_mkz_msgs::BrakeCmd_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dbw_mkz_msgs::BrakeCmd_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pedal_cmd);
      stream.next(m.pedal_cmd_type);
      stream.next(m.boo_cmd);
      stream.next(m.enable);
      stream.next(m.clear);
      stream.next(m.ignore);
      stream.next(m.count);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BrakeCmd_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dbw_mkz_msgs::BrakeCmd_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dbw_mkz_msgs::BrakeCmd_<ContainerAllocator>& v)
  {
    s << indent << "pedal_cmd: ";
    Printer<float>::stream(s, indent + "  ", v.pedal_cmd);
    s << indent << "pedal_cmd_type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.pedal_cmd_type);
    s << indent << "boo_cmd: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.boo_cmd);
    s << indent << "enable: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.enable);
    s << indent << "clear: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.clear);
    s << indent << "ignore: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ignore);
    s << indent << "count: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.count);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DBW_MKZ_MSGS_MESSAGE_BRAKECMD_H
