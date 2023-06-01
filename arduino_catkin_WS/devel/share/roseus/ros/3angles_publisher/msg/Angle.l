;; Auto-generated. Do not edit!


(when (boundp '3angles_publisher::Angle)
  (if (not (find-package "3ANGLES_PUBLISHER"))
    (make-package "3ANGLES_PUBLISHER"))
  (shadow 'Angle (find-package "3ANGLES_PUBLISHER")))
(unless (find-package "3ANGLES_PUBLISHER::ANGLE")
  (make-package "3ANGLES_PUBLISHER::ANGLE"))

(in-package "ROS")
;;//! \htmlinclude Angle.msg.html


(defclass 3angles_publisher::Angle
  :super ros::object
  :slots (_Angle ))

(defmethod 3angles_publisher::Angle
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

(setf (get 3angles_publisher::Angle :md5sum-) "9593105c156287b924070b776e5234fd")
(setf (get 3angles_publisher::Angle :datatype-) "3angles_publisher/Angle")
(setf (get 3angles_publisher::Angle :definition-)
      "int16 Angle

")



(provide :3angles_publisher/Angle "9593105c156287b924070b776e5234fd")


