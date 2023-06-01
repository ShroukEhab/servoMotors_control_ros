#!/usr/bin/env python3

import rospy
import numpy as np
from std_msgs.msg import UInt16MultiArray

def main():

    pub = rospy.Publisher("rotation_angles", UInt16MultiArray, queue_size=10)
    rospy.init_node("pseudo_headset", anonymous=True)
    rate = rospy.Rate(5)  # 10hz

    #rot_angles = np.array([0, 0, 0], dtype=np.uint16)
    rot_angles = np.random.randint(low=0, high=180, size=(3), dtype=np.uint16)
    # rot_angles = listen_from_topic()
 
    increment = np.array([9.3, 9.3, 9.3], dtype=np.uint16)
    while not rospy.is_shutdown():
        # print(rot_angles)
        # print(increment)
        rot_angles += increment

        cond0 = rot_angles >= 180
        cond1 = rot_angles <= 0
        increment = increment * ((cond0 + cond1) * -2 + 1)
        increment = increment.astype(np.uint16) 

        rot_angles = np.clip(rot_angles, 0, 180)

        msg = UInt16MultiArray(data=rot_angles)
        
        pub.publish(msg)
        rate.sleep()
        
if __name__ == "__main__":
    try:
        main()
    except rospy.ROSInterruptException:
        pass
