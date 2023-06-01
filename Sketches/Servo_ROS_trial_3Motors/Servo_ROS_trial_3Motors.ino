
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
 #include <std_msgs/Int32MultiArray.h>
 //#include <std_msgs/String.h>
 
 /**for testing
 *#include <ros_arduino_msgs/Test.h>
 #include <ros_arduino_msgs/TestRequest.h>*/

ros::NodeHandle  nh;
Servo pitch;
Servo roll;
Servo yaw;
char cstr[16];

void servo_cb(const std_msgs::Int32MultiArray& cmd_msg){
//  Serial.print("the values from the topic /rotation angles are: ");
//  Serial.print(cmd_msg.data[0]);
//  Serial.print(",");
//  Serial.print(cmd_msg.data[1]);
//  Serial.print(",");
//  Serial.print(cmd_msg.data[2]);
//  Serial.println("");
//  ROS_INFO("arduino reads: %d, %d, %d", cmd_msg.data[0], cmd_msg.data[1], cmd_msg.data[2]);
  nh.loginfo("arduino reads:");
//  nh.loginfo(itoa(cmd_msg.data[0], cstr, 10));
//  nh.loginfo(itoa(cmd_msg.data[1], cstr, 10));
//  nh.loginfo(itoa(cmd_msg.data[2], cstr, 10));
  //Scaling the input values from 0-180 degrees
//  int angle1 = map(cmd_msg.data[0], -360, 360, 0, 180);
//  int angle2 = map(cmd_msg.data[1], -360, 360, 360, -360);
//  int angle3 = map(cmd_msg.data[2], -360, 360, 360, -360);
  nh.loginfo(itoa(cmd_msg.data[0], cstr, 10));
  nh.loginfo(itoa(cmd_msg.data[1], cstr, 10));
  nh.loginfo(itoa(cmd_msg.data[2], cstr, 10));
  
//  servo1.write(angle1); //set servo angle, should be from 0-180
//  servo2.write(angle2);
//  servo3.write(angle3); 
  roll.write(cmd_msg.data[0]); //set servo angle, should be from 0-180
  yaw.write(cmd_msg.data[1]);
  pitch.write(cmd_msg.data[2]);
 }
 
ros::Subscriber<std_msgs::Int32MultiArray> sub("rotation_angles", servo_cb);

void setup() {
  Serial.begin(9600); // open the serial port at 9600 bps:
  // put your setup code here, to run once:
  nh.initNode();
  nh.subscribe(sub); 
  pitch.attach(9);
  roll.attach(10);
  yaw.attach(11);
  Serial.print("I'm here");
}

void loop() {
  nh.spinOnce(); 
  delay(1);
}
