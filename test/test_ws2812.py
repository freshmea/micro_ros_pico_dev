#!/usr/bin/env python3
"""
WS2812 Test Publisher for micro-ROS Pico

Publishes per-pixel color commands to /ws2812_pixel
Message format (UInt8MultiArray): [index, r, g, b]
"""

import time

import rclpy
from rclpy.node import Node
from std_msgs.msg import UInt8MultiArray


class Ws2812Tester(Node):
    def __init__(self):
        super().__init__("ws2812_tester")
        self.pub = self.create_publisher(UInt8MultiArray, "/ws2812_pixel", 10)

    def set_pixel(self, index, r, g, b):
        msg = UInt8MultiArray()
        msg.data = [int(index) & 0xFF, int(r) & 0xFF, int(g) & 0xFF, int(b) & 0xFF]
        self.pub.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    node = Ws2812Tester()

    try:
        colors = [
            (255, 0, 0),
            (0, 255, 0),
            (0, 0, 255),
            (255, 255, 255),
            (0, 0, 0),
        ]

        index = 0
        while rclpy.ok():
            for r, g, b in colors:
                node.set_pixel(index, r, g, b)
                node.get_logger().info(f"Set LED {index} -> ({r},{g},{b})")
                time.sleep(0.5)
            index = (index + 1) % 4
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()


if __name__ == "__main__":
    main()
