#!/usr/bin/env python3
"""Publish periodic Hello World messages on /py_example_topic."""

import rclpy
from rclpy.node import Node
from std_msgs.msg import String


class MinimalPyPublisher(Node):
    """Create a node that periodically publishes String messages."""

    def __init__(self):
        super().__init__('minimal_py_publisher')
        self.publisher_1 = self.create_publisher(
            String, '/py_example_topic', 10
        )
        self.timer = self.create_timer(0.5, self.timer_callback)
        self.i = 0

    def timer_callback(self):
        """Publish the next numbered message."""
        msg = String()
        msg.data = f'Hello World: {self.i}'
        self.publisher_1.publish(msg)
        self.get_logger().info(f'Publishing: "{msg.data}"')
        self.i += 1


def main(args=None):
    """Initialize ROS, run the publisher, and clean up on shutdown."""
    rclpy.init(args=args)
    minimal_py_publisher = MinimalPyPublisher()
    try:
        rclpy.spin(minimal_py_publisher)
    finally:
        minimal_py_publisher.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == '__main__':
    main()
