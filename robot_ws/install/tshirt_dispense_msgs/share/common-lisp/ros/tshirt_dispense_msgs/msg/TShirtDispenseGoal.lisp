; Auto-generated. Do not edit!


(cl:in-package tshirt_dispense_msgs-msg)


;//! \htmlinclude TShirtDispenseGoal.msg.html

(cl:defclass <TShirtDispenseGoal> (roslisp-msg-protocol:ros-message)
  ((size
    :reader size
    :initarg :size
    :type cl:integer
    :initform 0))
)

(cl:defclass TShirtDispenseGoal (<TShirtDispenseGoal>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <TShirtDispenseGoal>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'TShirtDispenseGoal)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name tshirt_dispense_msgs-msg:<TShirtDispenseGoal> is deprecated: use tshirt_dispense_msgs-msg:TShirtDispenseGoal instead.")))

(cl:ensure-generic-function 'size-val :lambda-list '(m))
(cl:defmethod size-val ((m <TShirtDispenseGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader tshirt_dispense_msgs-msg:size-val is deprecated.  Use tshirt_dispense_msgs-msg:size instead.")
  (size m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <TShirtDispenseGoal>) ostream)
  "Serializes a message object of type '<TShirtDispenseGoal>"
  (cl:let* ((signed (cl:slot-value msg 'size)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <TShirtDispenseGoal>) istream)
  "Deserializes a message object of type '<TShirtDispenseGoal>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'size) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<TShirtDispenseGoal>)))
  "Returns string type for a message object of type '<TShirtDispenseGoal>"
  "tshirt_dispense_msgs/TShirtDispenseGoal")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'TShirtDispenseGoal)))
  "Returns string type for a message object of type 'TShirtDispenseGoal"
  "tshirt_dispense_msgs/TShirtDispenseGoal")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<TShirtDispenseGoal>)))
  "Returns md5sum for a message object of type '<TShirtDispenseGoal>"
  "97da5de9999c5ce84f539773c8d0b2a3")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'TShirtDispenseGoal)))
  "Returns md5sum for a message object of type 'TShirtDispenseGoal"
  "97da5de9999c5ce84f539773c8d0b2a3")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<TShirtDispenseGoal>)))
  "Returns full string definition for message of type '<TShirtDispenseGoal>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#goal~%int32 size~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'TShirtDispenseGoal)))
  "Returns full string definition for message of type 'TShirtDispenseGoal"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#goal~%int32 size~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <TShirtDispenseGoal>))
  (cl:+ 0
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <TShirtDispenseGoal>))
  "Converts a ROS message object to a list"
  (cl:list 'TShirtDispenseGoal
    (cl:cons ':size (size msg))
))