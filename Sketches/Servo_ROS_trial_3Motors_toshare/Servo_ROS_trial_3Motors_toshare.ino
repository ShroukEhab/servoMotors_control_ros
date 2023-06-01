
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
 #include <std_msgs/Int32MultiArray.h>

 

ros::NodeHandle  nh;
Servo pitch;
Servo roll;
Servo yaw;
char cstr[16];

void servo_cb(const std_msgs::Int32MultiArray& cmd_msg){
  nh.loginfo("arduino reads:");
  nh.loginfo(itoa(cmd_msg.data[0], cstr, 10));
  nh.loginfo(itoa(cmd_msg.data[1], cstr, 10));
  nh.loginfo(itoa(cmd_msg.data[2], cstr, 10));
  
  roll.write(cmd_msg.data[0]); 
  yaw.write(cmd_msg.data[1]);
  pitch.write(cmd_msg.data[2]);
 }
 
ros::Subscriber<std_msgs::Int32MultiArray> sub("rotation_angles", servo_cb);

void setup() {
  Serial.begin(9600); // open the serial port at 9600 bps:
  nh.initNode();
  nh.subscribe(sub); 
  pitch.attach(9);
  roll.attach(10);
  yaw.attach(11);
}

void loop() {
  nh.spinOnce(); 
  delay(1);
}
