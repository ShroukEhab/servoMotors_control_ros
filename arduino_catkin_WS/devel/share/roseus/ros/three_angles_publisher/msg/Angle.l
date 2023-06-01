;; Auto-generated. Do not edit!


(when (boundp 'three_angles_publisher::Angle)
  (if (not (find-package "THREE_ANGLES_PUBLISHER"))
    (make-package "THREE_ANGLES_PUBLISHER"))
  (shadow 'Angle (find-package "THREE_ANGLES_PUBLISHER")))
(unless (find-package "THREE_ANGLES_PUBLISHER::ANGLE")
  (make-package "THREE_ANGLES_PUBLISHER::ANGLE"))

(in-package "ROS")
;;//! \htmlinclude Angle.msg.html


(defclass three_angles_publisher::Angle
  :super ros::object
  :slots (_Angle ))

(defmethod three_angles_publisher::Angle
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

(setf (get three_angles_publisher::Angle :md5sum-) "9593105c156287b924070b776e5234fd")
(setf (get three_angles_publisher::Angle :datatype-) "three_angles_publisher/Angle")
(setf (get three_angles_publisher::Angle :definition-)
      "int16 Angle

")



(provide :three_angles_publisher/Angle "9593105c156287b924070b776e5234fd")


