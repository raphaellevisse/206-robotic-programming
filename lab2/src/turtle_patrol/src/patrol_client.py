#!/usr/bin/env python
import numpy as np
import rospy
from turtle_patrol.srv import Patrol  # Import service type
import sys

def patrol_client(turtle_name):
    # Initialize the client node
    rospy.init_node(f'{turtle_name}_patrol_client')
    # Wait until patrol service is ready
    rospy.wait_for_service(f'/{turtle_name}/patrol')
    try:
        # Acquire service proxy
        patrol_proxy = rospy.ServiceProxy(
            f'/{turtle_name}/patrol', Patrol)
        vel = 2.0  # Linear velocity
        omega = 1.0  # Angular velocity
        name = turtle_name
        rospy.loginfo(f'Command {turtle_name} to patrol')
        # Call patrol service via the proxy
        patrol_proxy(vel, omega, 1, 1, 1)
    except rospy.ServiceException as e:
        rospy.loginfo(e)


if __name__ == '__main__':
    patrol_client(sys.argv[1])

