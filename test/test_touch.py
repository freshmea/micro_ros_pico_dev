#!/usr/bin/env python3
"""
Touch Sensor Test Script for micro-ROS Pico

This script demonstrates how to monitor touch sensors on the Raspberry Pi Pico
through micro-ROS by subscribing to touch sensor topics.

Hardware:
    - Touch Sensor 1: GP18
    - Touch Sensor 2: GP19
    - Touch Sensor 3: GP20

Topics per sensor:
    - /touch_X/state (Bool): Touch state (pressed/released)
    - /touch_X/beep_count (UInt8): Number of beeps during touch
    - /touch_X/duration (UInt64): Duration of touch in milliseconds

Auto-beep: Each touch triggers a 1000Hz, 100ms beep
"""

import time

import rclpy
from rclpy.node import Node
from std_msgs.msg import Bool, UInt8, UInt64


class TouchSensorMonitor(Node):
    def __init__(self):
        super().__init__('touch_sensor_monitor')

        # State tracking
        self.touch_states = [False, False, False]
        self.beep_counts = [0, 0, 0]
        self.durations = [0, 0, 0]

        # Subscribe to all 3 touch sensors
        self.state_subscribers = []
        self.beep_subscribers = []
        self.duration_subscribers = []

        for i in range(1, 4):  # 1, 2, 3
            # State subscriber
            self.state_subscribers.append(
                self.create_subscription(
                    Bool,
                    f'touch_{i}/state',
                    lambda msg, idx=i-1: self.state_callback(msg, idx),
                    10
                )
            )

            # Beep count subscriber
            self.beep_subscribers.append(
                self.create_subscription(
                    UInt8,
                    f'touch_{i}/beep_count',
                    lambda msg, idx=i-1: self.beep_callback(msg, idx),
                    10
                )
            )

            # Duration subscriber
            self.duration_subscribers.append(
                self.create_subscription(
                    UInt64,
                    f'touch_{i}/duration',
                    lambda msg, idx=i-1: self.duration_callback(msg, idx),
                    10
                )
            )

        self.get_logger().info('Touch Sensor Monitor initialized')
        self.get_logger().info('Monitoring 3 touch sensors on GP18, GP19, GP20')
        self.print_status()

    def state_callback(self, msg, sensor_idx):
        """Handle touch state changes"""
        self.touch_states[sensor_idx] = msg.data

        if msg.data:
            self.get_logger().info(f'🔴 Touch {sensor_idx+1} PRESSED (GP{18+sensor_idx})')
        else:
            self.get_logger().info(f'⚪ Touch {sensor_idx+1} RELEASED (GP{18+sensor_idx})')

        self.print_status()

    def beep_callback(self, msg, sensor_idx):
        """Handle beep count updates"""
        self.beep_counts[sensor_idx] = msg.data
        self.get_logger().info(f'🔊 Touch {sensor_idx+1} - Beep Count: {msg.data}')

    def duration_callback(self, msg, sensor_idx):
        """Handle duration updates"""
        self.durations[sensor_idx] = msg.data
        self.get_logger().info(f'⏱️  Touch {sensor_idx+1} - Duration: {msg.data}ms')

    def print_status(self):
        """Print current status of all sensors"""
        status_str = "\n" + "="*60 + "\n"
        status_str += "Touch Sensor Status:\n"
        status_str += "="*60 + "\n"

        for i in range(3):
            state_icon = "🔴 PRESSED " if self.touch_states[i] else "⚪ Released"
            status_str += f"Touch {i+1} (GP{18+i}): {state_icon} | "
            status_str += f"Beeps: {self.beep_counts[i]:3d} | "
            status_str += f"Duration: {self.durations[i]:6d}ms\n"

        status_str += "="*60
        print(status_str)


def main(args=None):
    rclpy.init(args=args)
    monitor = TouchSensorMonitor()

    try:
        print("\n" + "="*60)
        print("   Touch Sensor Monitor")
        print("="*60)
        print("Hardware Configuration:")
        print("  • Touch Sensor 1: GP18")
        print("  • Touch Sensor 2: GP19")
        print("  • Touch Sensor 3: GP20")
        print()
        print("Features:")
        print("  • Auto-beep on touch (1000Hz, 100ms)")
        print("  • Real-time state monitoring")
        print("  • Beep count tracking")
        print("  • Touch duration measurement")
        print()
        print("Topics:")
        print("  • /touch_X/state - Touch pressed/released")
        print("  • /touch_X/beep_count - Number of beeps")
        print("  • /touch_X/duration - Touch duration (ms)")
        print()
        print("Press Ctrl+C to exit")
        print("="*60 + "\n")

        rclpy.spin(monitor)

    except KeyboardInterrupt:
        print("\n\n⚠️  Shutdown requested...")
    except Exception as e:
        print(f"\n❌ Error: {e}")
    finally:
        monitor.destroy_node()
        print("✅ Shutdown complete")


if __name__ == '__main__':
    main()
