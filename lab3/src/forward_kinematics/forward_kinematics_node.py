#!/usr/bin/env python
# The line above tells Linux that this file is a Python script, and that the OS
# should use the Python interpreter in /usr/bin/env to run it. Don't forget to
# use "chmod +x [filename]" to make this script executable.

# Import the dependencies as described in example_pub.py
import rospy

from sensor_msgs.msg import JointState
from forward_kinematics import * 

# Define the callback method which is called whenever this node receives a 
# message on its subscribed topic. The received message is passed as the first
# argument to callback().
def callback(message):
    position = message.position
    baxter_forward_kinematics_from_joint_state(position)

# Define the method which contains the node's main functionality
def listener():
    

    rospy.Subscriber("/robot/joint_states", JointState, callback)

    rospy.spin()


# Python's syntax for a main() method
if __name__ == '__main__':

    rospy.init_node('joint_listener', anonymous=True)

    listener()
