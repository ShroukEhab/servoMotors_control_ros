#ifndef _ROS_derived_object_msgs_LaneModels_h
#define _ROS_derived_object_msgs_LaneModels_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "derived_object_msgs/Lane.h"

namespace derived_object_msgs
{

  class LaneModels : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef derived_object_msgs::Lane _left_lane_type;
      _left_lane_type left_lane;
      typedef derived_object_msgs::Lane _right_lane_type;
      _right_lane_type right_lane;
      uint32_t additional_lanes_length;
      typedef derived_object_msgs::Lane _additional_lanes_type;
      _additional_lanes_type st_additional_lanes;
      _additional_lanes_type * additional_lanes;

    LaneModels():
      header(),
      left_lane(),
      right_lane(),
      additional_lanes_length(0), st_additional_lanes(), additional_lanes(nullptr)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      offset += this->left_lane.serialize(outbuffer + offset);
      offset += this->right_lane.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->additional_lanes_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->additional_lanes_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->additional_lanes_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->additional_lanes_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->additional_lanes_length);
      for( uint32_t i = 0; i < additional_lanes_length; i++){
      offset += this->additional_lanes[i].serialize(outbuffer + offset);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      offset += this->left_lane.deserialize(inbuffer + offset);
      offset += this->right_lane.deserialize(inbuffer + offset);
      uint32_t additional_lanes_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      additional_lanes_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      additional_lanes_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      additional_lanes_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->additional_lanes_length);
      if(additional_lanes_lengthT > additional_lanes_length)
        this->additional_lanes = (derived_object_msgs::Lane*)realloc(this->additional_lanes, additional_lanes_lengthT * sizeof(derived_object_msgs::Lane));
      additional_lanes_length = additional_lanes_lengthT;
      for( uint32_t i = 0; i < additional_lanes_length; i++){
      offset += this->st_additional_lanes.deserialize(inbuffer + offset);
        memcpy( &(this->additional_lanes[i]), &(this->st_additional_lanes), sizeof(derived_object_msgs::Lane));
      }
     return offset;
    }

    virtual const char * getType() override { return "derived_object_msgs/LaneModels"; };
    virtual const char * getMD5() override { return "0c7a9d0cc35a8e5d0d677034bfc4d18b"; };

  };

}
#endif
