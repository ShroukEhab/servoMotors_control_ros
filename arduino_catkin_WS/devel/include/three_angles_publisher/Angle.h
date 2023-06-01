// Generated by gencpp from file three_angles_publisher/Angle.msg
// DO NOT EDIT!


#ifndef THREE_ANGLES_PUBLISHER_MESSAGE_ANGLE_H
#define THREE_ANGLES_PUBLISHER_MESSAGE_ANGLE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace three_angles_publisher
{
template <class ContainerAllocator>
struct Angle_
{
  typedef Angle_<ContainerAllocator> Type;

  Angle_()
    : Angle(0)  {
    }
  Angle_(const ContainerAllocator& _alloc)
    : Angle(0)  {
  (void)_alloc;
    }



   typedef int16_t _Angle_type;
  _Angle_type Angle;





  typedef boost::shared_ptr< ::three_angles_publisher::Angle_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::three_angles_publisher::Angle_<ContainerAllocator> const> ConstPtr;

}; // struct Angle_

typedef ::three_angles_publisher::Angle_<std::allocator<void> > Angle;

typedef boost::shared_ptr< ::three_angles_publisher::Angle > AnglePtr;
typedef boost::shared_ptr< ::three_angles_publisher::Angle const> AngleConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::three_angles_publisher::Angle_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::three_angles_publisher::Angle_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::three_angles_publisher::Angle_<ContainerAllocator1> & lhs, const ::three_angles_publisher::Angle_<ContainerAllocator2> & rhs)
{
  return lhs.Angle == rhs.Angle;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::three_angles_publisher::Angle_<ContainerAllocator1> & lhs, const ::three_angles_publisher::Angle_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace three_angles_publisher

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::three_angles_publisher::Angle_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::three_angles_publisher::Angle_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::three_angles_publisher::Angle_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::three_angles_publisher::Angle_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::three_angles_publisher::Angle_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::three_angles_publisher::Angle_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::three_angles_publisher::Angle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9593105c156287b924070b776e5234fd";
  }

  static const char* value(const ::three_angles_publisher::Angle_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9593105c156287b9ULL;
  static const uint64_t static_value2 = 0x24070b776e5234fdULL;
};

template<class ContainerAllocator>
struct DataType< ::three_angles_publisher::Angle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "three_angles_publisher/Angle";
  }

  static const char* value(const ::three_angles_publisher::Angle_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::three_angles_publisher::Angle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int16 Angle\n"
;
  }

  static const char* value(const ::three_angles_publisher::Angle_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::three_angles_publisher::Angle_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.Angle);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Angle_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::three_angles_publisher::Angle_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::three_angles_publisher::Angle_<ContainerAllocator>& v)
  {
    s << indent << "Angle: ";
    Printer<int16_t>::stream(s, indent + "  ", v.Angle);
  }
};

} // namespace message_operations
} // namespace ros

#endif // THREE_ANGLES_PUBLISHER_MESSAGE_ANGLE_H
