#ifndef _ROS_angle_publisher_Angle_h
#define _ROS_angle_publisher_Angle_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace angle_publisher
{

  class Angle : public ros::Msg
  {
    public:
      typedef int16_t _Angle_type;
      _Angle_type Angle;

    Angle():
      Angle(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        int16_t real;
        uint16_t base;
      } u_Angle;
      u_Angle.real = this->Angle;
      *(outbuffer + offset + 0) = (u_Angle.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_Angle.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->Angle);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        int16_t real;
        uint16_t base;
      } u_Angle;
      u_Angle.base = 0;
      u_Angle.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_Angle.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->Angle = u_Angle.real;
      offset += sizeof(this->Angle);
     return offset;
    }

    virtual const char * getType() override { return "angle_publisher/Angle"; };
    virtual const char * getMD5() override { return "9593105c156287b924070b776e5234fd"; };

  };

}
#endif
