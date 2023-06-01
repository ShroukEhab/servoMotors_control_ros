;; Auto-generated. Do not edit!


(when (boundp 'woodpecker::Angle)
  (if (not (find-package "WOODPECKER"))
    (make-package "WOODPECKER"))
  (shadow 'Angle (find-package "WOODPECKER")))
(unless (find-package "WOODPECKER::ANGLE")
  (make-package "WOODPECKER::ANGLE"))

(in-package "ROS")
;;//! \htmlinclude Angle.msg.html


(defclass woodpecker::Angle
  :super ros::object
  :slots (_Angle ))

(defmethod woodpecker::Angle
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

(setf (get woodpecker::Angle :md5sum-) "9593105c156287b924070b776e5234fd")
(setf (get woodpecker::Angle :datatype-) "woodpecker/Angle")
(setf (get woodpecker::Angle :definition-)
      "int16 Angle

")



(provide :woodpecker/Angle "9593105c156287b924070b776e5234fd")


