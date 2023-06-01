
/*
 * This code is just a trial to send data from ROS to arduino 
 * its reference is mostly from rosserial servo control example
 */
 #if (ARDUINO >= 100)
 #include <Arduino.h>
#else
 #include <WProgram.h>
#endif
 //**libraries included**//
 #include <Servo.h>
 #include <ros.h>
 //#include <angle_publisher/Angle.h>
 #include <std_msgs/UInt16.h>
 //#include <std_msgs/String.h>
 
 /**for testing
 *#include <ros_arduino_msgs/Test.h>
 #include <ros_arduino_msgs/TestRequest.h>*/

ros::NodeHandle  nh;
Servo servo;
void servo_cb(const std_msgs::UInt16& cmd_msg){
  servo.write(cmd_msg.data); //set servo angle, should be from 0-180  
 }
ros::Subscriber<std_msgs::UInt16> sub("rotation_angles", servo_cb);

void setup() {
  // put your setup code here, to run once:
  nh.initNode();
  nh.subscribe(sub); 
  servo.attach(9);
}

void loop() {
  nh.spinOnce(); 
  delay(1);
}
