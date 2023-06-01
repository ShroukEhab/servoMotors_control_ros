// Auto-generated. Do not edit!

// (in-package angle_publisher.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class Angle {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.Angle = null;
    }
    else {
      if (initObj.hasOwnProperty('Angle')) {
        this.Angle = initObj.Angle
      }
      else {
        this.Angle = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Angle
    // Serialize message field [Angle]
    bufferOffset = _serializer.int16(obj.Angle, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Angle
    let len;
    let data = new Angle(null);
    // Deserialize message field [Angle]
    data.Angle = _deserializer.int16(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 2;
  }

  static datatype() {
    // Returns string type for a message object
    return 'angle_publisher/Angle';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '9593105c156287b924070b776e5234fd';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    int16 Angle
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new Angle(null);
    if (msg.Angle !== undefined) {
      resolved.Angle = msg.Angle;
    }
    else {
      resolved.Angle = 0
    }

    return resolved;
    }
};

module.exports = Angle;
