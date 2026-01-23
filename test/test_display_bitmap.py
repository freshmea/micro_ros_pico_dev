#!/usr/bin/env python3
"""
SSD1306 Bitmap Test Publisher for micro-ROS Pico

Publishes a 128x32 1bpp bitmap to /display_bitmap
Message format (UInt8MultiArray): 512 bytes (128*32/8)
"""

import time

import rclpy
from rclpy.node import Node
from std_msgs.msg import UInt8MultiArray


def pack_bitmap_128x32(pixels):
    """Pack 128x32 boolean pixels into 512 bytes, XBM-style (LSB first)."""
    out = bytearray(128 * 32 // 8)
    idx = 0
    for y in range(32):
        for x in range(0, 128, 8):
            byte = 0
            for bit in range(8):
                if pixels[y][x + bit]:
                    byte |= (1 << bit)
            out[idx] = byte
            idx += 1
    return out


class BitmapTester(Node):
    def __init__(self):
        super().__init__("bitmap_tester")
        self.pub = self.create_publisher(UInt8MultiArray, "/display_bitmap", 10)

    def publish_bitmap(self, data):
        msg = UInt8MultiArray()
        msg.data = list(data)
        self.pub.publish(msg)


def make_checkerboard(step):
    pixels = [[0 for _ in range(128)] for _ in range(32)]
    for y in range(32):
        for x in range(128):
            pixels[y][x] = ((x // 8 + y // 4 + step) % 2) == 0
    return pixels


def main(args=None):
    rclpy.init(args=args)
    node = BitmapTester()

    try:
        step = 0
        while rclpy.ok():
            pixels = make_checkerboard(step)
            data = pack_bitmap_128x32(pixels)
            node.publish_bitmap(data)
            node.get_logger().info(f"Published bitmap step {step}")
            step = (step + 1) % 2
            time.sleep(1.0)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()


if __name__ == "__main__":
    main()
