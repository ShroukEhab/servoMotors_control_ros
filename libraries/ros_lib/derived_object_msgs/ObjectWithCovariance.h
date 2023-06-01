#ifndef _ROS_derived_object_msgs_ObjectWithCovariance_h
#define _ROS_derived_object_msgs_ObjectWithCovariance_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "geometry_msgs/PoseWithCovariance.h"
#include "geometry_msgs/TwistWithCovariance.h"
#include "geometry_msgs/AccelWithCovariance.h"
#include "geometry_msgs/Polygon.h"
#include "derived_object_msgs/SolidPrimitiveWithCovariance.h"

namespace derived_object_msgs
{

  class ObjectWithCovariance : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef uint32_t _id_type;
      _id_type id;
      typedef uint8_t _detection_level_type;
      _detection_level_type detection_level;
      typedef bool _object_classified_type;
      _object_classified_type object_classified;
      typedef geometry_msgs::PoseWithCovariance _pose_type;
      _pose_type pose;
      typedef geometry_msgs::TwistWithCovariance _twist_type;
      _twist_type twist;
      typedef geometry_msgs::AccelWithCovariance _accel_type;
      _accel_type accel;
      typedef geometry_msgs::Polygon _polygon_type;
      _polygon_type polygon;
      typedef derived_object_msgs::SolidPrimitiveWithCovariance _shape_type;
      _shape_type shape;
      typedef uint8_t _classification_type;
      _classification_type classification;
      typedef uint8_t _classification_certainty_type;
      _classification_certainty_type classification_certainty;
      typedef uint32_t _classification_age_type;
      _classification_age_type classification_age;
      enum { OBJECT_DETECTED = 0 };
      enum { OBJECT_TRACKED = 1 };
      enum { CLASSIFICATION_UNKNOWN = 0 };
      enum { CLASSIFICATION_UNKNOWN_SMALL = 1 };
      enum { CLASSIFICATION_UNKNOWN_MEDIUM = 2 };
      enum { CLASSIFICATION_UNKNOWN_BIG = 3 };
      enum { CLASSIFICATION_PEDESTRIAN = 4 };
      enum { CLASSIFICATION_BIKE = 5 };
      enum { CLASSIFICATION_CAR = 6 };
      enum { CLASSIFICATION_TRUCK = 7 };
      enum { CLASSIFICATION_MOTORCYCLE = 8 };
      enum { CLASSIFICATION_OTHER_VEHICLE = 9 };
      enum { CLASSIFICATION_BARRIER = 10 };
      enum { CLASSIFICATION_SIGN = 11 };

    ObjectWithCovariance():
      header(),
      id(0),
      detection_level(0),
      object_classified(0),
      pose(),
      twist(),
      accel(),
      polygon(),
      shape(),
      classification(0),
      classification_certainty(0),
      classification_age(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->id >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->id >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->id >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->id >> (8 * 3)) & 0xFF;
      offset += sizeof(this->id);
      *(outbuffer + offset + 0) = (this->detection_level >> (8 * 0)) & 0xFF;
      offset += sizeof(this->detection_level);
      union {
        bool real;
        uint8_t base;
      } u_object_classified;
      u_object_classified.real = this->object_classified;
      *(outbuffer + offset + 0) = (u_object_classified.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->object_classified);
      offset += this->pose.serialize(outbuffer + offset);
      offset += this->twist.serialize(outbuffer + offset);
      offset += this->accel.serialize(outbuffer + offset);
      offset += this->polygon.serialize(outbuffer + offset);
      offset += this->shape.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->classification >> (8 * 0)) & 0xFF;
      offset += sizeof(this->classification);
      *(outbuffer + offset + 0) = (this->classification_certainty >> (8 * 0)) & 0xFF;
      offset += sizeof(this->classification_certainty);
      *(outbuffer + offset + 0) = (this->classification_age >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->classification_age >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->classification_age >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->classification_age >> (8 * 3)) & 0xFF;
      offset += sizeof(this->classification_age);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      this->id =  ((uint32_t) (*(inbuffer + offset)));
      this->id |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->id |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->id |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->id);
      this->detection_level =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->detection_level);
      union {
        bool real;
        uint8_t base;
      } u_object_classified;
      u_object_classified.base = 0;
      u_object_classified.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->object_classified = u_object_classified.real;
      offset += sizeof(this->object_classified);
      offset += this->pose.deserialize(inbuffer + offset);
      offset += this->twist.deserialize(inbuffer + offset);
      offset += this->accel.deserialize(inbuffer + offset);
      offset += this->polygon.deserialize(inbuffer + offset);
      offset += this->shape.deserialize(inbuffer + offset);
      this->classification =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->classification);
      this->classification_certainty =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->classification_certainty);
      this->classification_age =  ((uint32_t) (*(inbuffer + offset)));
      this->classification_age |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->classification_age |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->classification_age |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->classification_age);
     return offset;
    }

    virtual const char * getType() override { return "derived_object_msgs/ObjectWithCovariance"; };
    virtual const char * getMD5() override { return "11c5c4e2934ae559592a68028c8fb34b"; };

  };

}
#endif
