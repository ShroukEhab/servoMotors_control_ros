; Auto-generated. Do not edit!


(cl:in-package angle_publisher-msg)


;//! \htmlinclude Angle.msg.html

(cl:defclass <Angle> (roslisp-msg-protocol:ros-message)
  ((Angle
    :reader Angle
    :initarg :Angle
    :type cl:fixnum
    :initform 0))
)

(cl:defclass Angle (<Angle>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Angle>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Angle)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name angle_publisher-msg:<Angle> is deprecated: use angle_publisher-msg:Angle instead.")))

(cl:ensure-generic-function 'Angle-val :lambda-list '(m))
(cl:defmethod Angle-val ((m <Angle>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader angle_publisher-msg:Angle-val is deprecated.  Use angle_publisher-msg:Angle instead.")
  (Angle m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Angle>) ostream)
  "Serializes a message object of type '<Angle>"
  (cl:let* ((signed (cl:slot-value msg 'Angle)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Angle>) istream)
  "Deserializes a message object of type '<Angle>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'Angle) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Angle>)))
  "Returns string type for a message object of type '<Angle>"
  "angle_publisher/Angle")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Angle)))
  "Returns string type for a message object of type 'Angle"
  "angle_publisher/Angle")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Angle>)))
  "Returns md5sum for a message object of type '<Angle>"
  "9593105c156287b924070b776e5234fd")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Angle)))
  "Returns md5sum for a message object of type 'Angle"
  "9593105c156287b924070b776e5234fd")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Angle>)))
  "Returns full string definition for message of type '<Angle>"
  (cl:format cl:nil "int16 Angle~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Angle)))
  "Returns full string definition for message of type 'Angle"
  (cl:format cl:nil "int16 Angle~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Angle>))
  (cl:+ 0
     2
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Angle>))
  "Converts a ROS message object to a list"
  (cl:list 'Angle
    (cl:cons ':Angle (Angle msg))
))
