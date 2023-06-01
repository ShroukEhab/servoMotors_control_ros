// Generated by gencpp from file woodpecker/Angle.msg
// DO NOT EDIT!


#ifndef WOODPECKER_MESSAGE_ANGLE_H
#define WOODPECKER_MESSAGE_ANGLE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace woodpecker
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





  typedef boost::shared_ptr< ::woodpecker::Angle_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::woodpecker::Angle_<ContainerAllocator> const> ConstPtr;

}; // struct Angle_

typedef ::woodpecker::Angle_<std::allocator<void> > Angle;

typedef boost::shared_ptr< ::woodpecker::Angle > AnglePtr;
typedef boost::shared_ptr< ::woodpecker::Angle const> AngleConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::woodpecker::Angle_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::woodpecker::Angle_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::woodpecker::Angle_<ContainerAllocator1> & lhs, const ::woodpecker::Angle_<ContainerAllocator2> & rhs)
{
  return lhs.Angle == rhs.Angle;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::woodpecker::Angle_<ContainerAllocator1> & lhs, const ::woodpecker::Angle_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace woodpecker

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::woodpecker::Angle_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::woodpecker::Angle_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::woodpecker::Angle_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::woodpecker::Angle_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::woodpecker::Angle_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::woodpecker::Angle_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::woodpecker::Angle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9593105c156287b924070b776e5234fd";
  }

  static const char* value(const ::woodpecker::Angle_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9593105c156287b9ULL;
  static const uint64_t static_value2 = 0x24070b776e5234fdULL;
};

template<class ContainerAllocator>
struct DataType< ::woodpecker::Angle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "woodpecker/Angle";
  }

  static const char* value(const ::woodpecker::Angle_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::woodpecker::Angle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int16 Angle\n"
;
  }

  static const char* value(const ::woodpecker::Angle_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::woodpecker::Angle_<ContainerAllocator> >
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
struct Printer< ::woodpecker::Angle_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::woodpecker::Angle_<ContainerAllocator>& v)
  {
    s << indent << "Angle: ";
    Printer<int16_t>::stream(s, indent + "  ", v.Angle);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WOODPECKER_MESSAGE_ANGLE_H
