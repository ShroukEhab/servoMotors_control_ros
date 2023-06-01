
(cl:in-package :asdf)

(defsystem "woodpecker-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "Angle" :depends-on ("_package_Angle"))
    (:file "_package_Angle" :depends-on ("_package"))
  ))