#!/usr/bin/env python3

import rospy
# Import necessary message class from rospy
from std_msgs.msg import UInt16MultiArray


def talker():
    # Define a variable called pub of type rospy.Publisher
    # Which would accepts first argument for topic name, which is 'chatter'
    # Second argument is for the topic message type, in this case UInt16MultiArray
    # Third argument is queue_size
    pub = rospy.Publisher("rotation_angles", UInt16MultiArray, queue_size=10)
    # Initialize a node, named with the first argument
    rospy.init_node("my_node", anonymous=True)
    # Define a rate variable with type rospy.Rate
    rate = rospy.Rate(30)  # 10hz

    # Define a variable, posAngles, of type UInt16MultiArray
    # which we will send to the topic as a message
    posAngles = UInt16MultiArray()
    # Populate data attribute of the message with some initial values
    posAngles.data = [0, 0, 0]
    # Note: Right side of the above expression is a list, but in this case
    # UInt16MultiArray.data accepts a list

    # Define a variable, inc, which would be of int type although it is not
    # explicitly stated
    #inc = 10
    #direction = True
    # Start a while loop which will run until the logical expression is false
    # in this case rospy.is_shutdown() will return false while rospy is running
    # without interruption, and the `not` operator will negate it so the while loop 
    # will run while rospy is running, effectively
    while not rospy.is_shutdown():

        for i in range(len(posAngles.data)):

            print(f"Motor number: {i+1}")

            if posAngles.data[i] >= 180:
                posAngles.data[i] = 180
                posAngles.data[i] -= 10
                print(f"current angle: {posAngles.data[i]}")

            elif posAngles.data[i] <= 0:
                posAngles.data[i] = 0
                posAngles.data[i] += 10
                print(f"current angle: {posAngles.data[i]}")
            else:
                posAngles.data[i] += 10
                print(f"current angle: {posAngles.data[i]}")
            #if direction:
             #   posAngles.data[i]+=10
              #  print(f"current angle: {posAngles.data[i]}") 
               # if posAngles.data[i]>=180:
                #    posAngles.data[i]=180
                 #   print(f"current angle: {posAngles.data[i]}") 
                  #  direction=False
                #print(f"current angle: {posAngles.data[i]}") 
            #else:
             #   posAngles.data[i]-=10
              #  print(f"current angle: {posAngles.data[i]}") 
               # if posAngles.data[i]<=0:
                #    posAngles.data[i]=0
                 #   print(f"current angle: {posAngles.data[i]}") 
                  #  direction=True
                #print(f"current angle: {posAngles.data[i]}") 
    # Publish the posAngles msg via the publisher
    pub.publish(posAngles)
    # Wait until we have the required rate of looping
    rate.sleep()
        
        
        # If the first element of the data inside the posAngles message
        # reaches to 180, reverse the sign of the increment to start decreasing
        ##if posAngles.data[0] >= 180:
          ##  print(f"it is equal to 180 now")
            ##posAngles.data[0]=180
            ##posAngles.data[0] = posAngles.data[0] - inc
            ##direction != direction
        ##elif posAngles.data[0] <= 0:
          ##  print(f"it is equal to 0 now")
            ##posAngles.data[0]=0
            ##posAngles.data[0] = posAngles.data[0] + inc
            ##direction != direction
        ##else:
            # Increment the first element of posAngles.data by inc
          ##  posAngles.data[0] = posAngles.data[0] + inc
            ##direction=True
            #inc = inc * -1
        #print(f"current angle is {posAngles.data[0]}")
        
        
# This is a boiler-plate part of the script
# When you execute this script from the commandline, it will actually run this part
# which will call the rest of the script via a func.
if __name__ == "__main__":
    try:
        talker()
    except rospy.ROSInterruptException:
        pass
