import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/student/Documents/formation_ros2/ros2_ws/src/install/ex1'
