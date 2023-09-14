import tf2_ros
import sys
import rospy

def echo_transform(tfBuffer, target_frame, source_frame):
    try :
        trans = tfBuffer.lookup_transform(target_frame, source_frame, rospy.Time())
        print(trans)
    except (tf2_ros.LookupException, tf2_ros.ConnectivityException, tf2_ros.ExtrapolationException) as e:
        rospy.logerr("Error: %s", e)


def main(args):
    rospy.init_node('tf_echo_node')

    if len(args) < 3:
        rospy.logerr("Usage : tf_echo.py target_frame source_frame")
        return
    target_frame =args[1]
    source_frame =args[2]

    tfBuffer = tf2_ros.Buffer()
    tfListener = tf2_ros.TransformListener(tfBuffer)
    rate =rospy.Rate(10.0)
    while not rospy.is_shutdown():
        echo_transform(tfBuffer,target_frame, source_frame)
        rate.sleep()

if __name__ == '__main__':
    main(sys.argv)