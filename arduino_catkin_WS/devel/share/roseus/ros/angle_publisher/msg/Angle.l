;; Auto-generated. Do not edit!


(when (boundp 'angle_publisher::Angle)
  (if (not (find-package "ANGLE_PUBLISHER"))
    (make-package "ANGLE_PUBLISHER"))
  (shadow 'Angle (find-package "ANGLE_PUBLISHER")))
(unless (find-package "ANGLE_PUBLISHER::ANGLE")
  (make-package "ANGLE_PUBLISHER::ANGLE"))

(in-package "ROS")
;;//! \htmlinclude Angle.msg.html


(defclass angle_publisher::Angle
  :super ros::object
  :slots (_Angle ))

(defmethod angle_publisher::Angle
  (:init
   (&key
    ((:Angle __Angle) 0)
    )
   (send-super :init)
   (setq _Angle (round __Angle))
   self)
  (:Angle
   (&optional __Angle)
   (if __Angle (setq _Angle __Angle)) _Angle)
  (:serialization-length
   ()
   (+
    ;; int16 _Angle
    2
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int16 _Angle
       (write-word _Angle s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int16 _Angle
     (setq _Angle (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;;
   self)
  )

(setf (get angle_publisher::Angle :md5sum-) "9593105c156287b924070b776e5234fd")
(setf (get angle_publisher::Angle :datatype-) "angle_publisher/Angle")
(setf (get angle_publisher::Angle :definition-)
      "int16 Angle

")



(provide :angle_publisher/Angle "9593105c156287b924070b776e5234fd")


