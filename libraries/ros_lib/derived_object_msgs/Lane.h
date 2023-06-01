#ifndef _ROS_derived_object_msgs_Lane_h
#define _ROS_derived_object_msgs_Lane_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace derived_object_msgs
{

  class Lane : public ros::Msg
  {
    public:
      typedef uint8_t _quality_type;
      _quality_type quality;
      typedef uint8_t _marker_kind_type;
      _marker_kind_type marker_kind;
      typedef uint8_t _curve_model_kind_type;
      _curve_model_kind_type curve_model_kind;
      typedef float _marker_offset_type;
      _marker_offset_type marker_offset;
      typedef float _heading_angle_type;
      _heading_angle_type heading_angle;
      typedef float _curvature_type;
      _curvature_type curvature;
      typedef float _curvature_derivative_type;
      _curvature_derivative_type curvature_derivative;
      typedef float _marker_width_type;
      _marker_width_type marker_width;
      typedef float _view_range_type;
      _view_range_type view_range;
      enum { LANE_QUALITY_INVALID =  0 };
      enum { LANE_QUALITY_UNKNOWN =  1 };
      enum { LANE_QUALITY_NOT_AVAILABLE =  2 };
      enum { LANE_QUALITY_0 =  3 };
      enum { LANE_QUALITY_1 =  4 };
      enum { LANE_QUALITY_2 =  5 };
      enum { LANE_QUALITY_3 =  6 };
      enum { LANE_QUALITY_4 =  7 };
      enum { LANE_QUALITY_5 =  8 };
      enum { LANE_QUALITY_6 =  9 };
      enum { LANE_QUALITY_7 =  10 };
      enum { LANE_QUALITY_8 =  11 };
      enum { LANE_QUALITY_9 =  12 };
      enum { LANE_QUALITY_KIND_COUNT =  13 };
      enum { LANE_MARKER_INVALID =  0 };
      enum { LANE_MARKER_UNKNOWN =  1 };
      enum { LANE_MARKER_NOT_AVAILABLE =  2 };
      enum { LANE_MARKER_NONE =  3 };
      enum { LANE_MARKER_SOLID =  4 };
      enum { LANE_MARKER_DASHED =  5 };
      enum { LANE_MARKER_VIRTUAL =  6 };
      enum { LANE_MARKER_DOTS =  7 };
      enum { LANE_MARKER_ROAD_EDGE =  8 };
      enum { LANE_MARKER_DOUBLE_LINE =  9 };
      enum { LANE_MARKER_KIND_COUNT =  10 };
      enum { LANE_CURVE_MODEL_INVALID =  0 };
      enum { LANE_CURVE_MODEL_UNKNOWN =  1 };
      enum { LANE_CURVE_MODEL_NOT_AVAILABLE =  2 };
      enum { LANE_CURVE_MODEL_LINEAR =  3 };
      enum { LANE_CURVE_MODEL_PARABOLIC =  4 };
      enum { LANE_CURVE_MODEL_3D =  5 };
      enum { LANE_CURVE_MODEL_KIND_COUNT =  6 };

    Lane():
      quality(0),
      marker_kind(0),
      curve_model_kind(0),
      marker_offset(0),
      heading_angle(0),
      curvature(0),
      curvature_derivative(0),
      marker_width(0),
      view_range(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->quality >> (8 * 0)) & 0xFF;
      offset += sizeof(this->quality);
      *(outbuffer + offset + 0) = (this->marker_kind >> (8 * 0)) & 0xFF;
      offset += sizeof(this->marker_kind);
      *(outbuffer + offset + 0) = (this->curve_model_kind >> (8 * 0)) & 0xFF;
      offset += sizeof(this->curve_model_kind);
      offset += serializeAvrFloat64(outbuffer + offset, this->marker_offset);
      offset += serializeAvrFloat64(outbuffer + offset, this->heading_angle);
      offset += serializeAvrFloat64(outbuffer + offset, this->curvature);
      offset += serializeAvrFloat64(outbuffer + offset, this->curvature_derivative);
      offset += serializeAvrFloat64(outbuffer + offset, this->marker_width);
      offset += serializeAvrFloat64(outbuffer + offset, this->view_range);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      this->quality =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->quality);
      this->marker_kind =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->marker_kind);
      this->curve_model_kind =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->curve_model_kind);
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->marker_offset));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->heading_angle));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->curvature));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->curvature_derivative));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->marker_width));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->view_range));
     return offset;
    }

    virtual const char * getType() override { return "derived_object_msgs/Lane"; };
    virtual const char * getMD5() override { return "62e190c228d8919a0a759f831c966092"; };

  };

}
#endif
