#!/usr/bin/env python3
"""
Servo Control Test Script for micro-ROS Pico

This script demonstrates how to control the servo motor on the Raspberry Pi Pico
through micro-ROS by publishing to the 'servo_angle' topic.

Topic: /servo_angle
Message Type: std_msgs/Int32
Data Format: angle (0-180 degrees)

Hardware:
    - Servo connected to GP2
    - Servo range: 0-180 degrees

Examples:
    - Move to center (90 degrees): 90
    - Move to minimum (0 degrees): 0
    - Move to maximum (180 degrees): 180
"""

import time

import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32


class ServoController(Node):
    def __init__(self):
        super().__init__('servo_controller')
        self.publisher = self.create_publisher(Int32, 'servo_angle', 10)
        self.get_logger().info('Servo Controller initialized')
        self.get_logger().info('Publishing to topic: /servo_angle')
        self.get_logger().info('Servo connected to GP2')

    def move_to_angle(self, angle):
        """Move servo to specific angle (0-180)"""
        if not (0 <= angle <= 180):
            self.get_logger().warning(f'Angle {angle} out of range (0-180)')
            return False

        msg = Int32()
        msg.data = angle
        self.publisher.publish(msg)
        self.get_logger().info(f'Moving servo to {angle} degrees')
        return True

    def center(self):
        """Move servo to center position (90 degrees)"""
        self.get_logger().info('Moving servo to center position...')
        self.move_to_angle(90)

    def sweep_full_range(self, delay=0.5):
        """Sweep servo from 0 to 180 degrees"""
        self.get_logger().info('Sweeping servo full range (0-180)...')
        for angle in range(0, 181, 10):
            self.move_to_angle(angle)
            time.sleep(delay)

        self.get_logger().info('Sweep complete')

    def sweep_reverse(self, delay=0.5):
        """Sweep servo from 180 to 0 degrees"""
        self.get_logger().info('Sweeping servo in reverse (180-0)...')
        for angle in range(180, -1, -10):
            self.move_to_angle(angle)
            time.sleep(delay)

        self.get_logger().info('Reverse sweep complete')

    def sweep_smooth(self, delay=0.02):
        """Smooth sweep from 0 to 180 and back"""
        self.get_logger().info('Smooth sweep: 0 -> 180 -> 0...')

        # 0 to 180
        for angle in range(0, 181, 1):
            self.move_to_angle(angle)
            time.sleep(delay)

        time.sleep(0.5)

        # 180 to 0
        for angle in range(180, -1, -1):
            self.move_to_angle(angle)
            time.sleep(delay)

        self.get_logger().info('Smooth sweep complete')

    def wave_motion(self, cycles=3, delay=0.05):
        """Create a waving motion"""
        self.get_logger().info(f'Waving motion ({cycles} cycles)...')

        for _ in range(cycles):
            # Wave left to right
            for angle in [90, 120, 90, 60]:
                self.move_to_angle(angle)
                time.sleep(delay * 5)

        self.center()
        self.get_logger().info('Wave motion complete')

    def test_specific_positions(self):
        """Test specific servo positions"""
        self.get_logger().info('Testing specific positions...')
        positions = [
            (0, 'Minimum (0°)'),
            (45, 'Quarter (45°)'),
            (90, 'Center (90°)'),
            (135, 'Three-quarter (135°)'),
            (180, 'Maximum (180°)'),
            (90, 'Back to center'),
        ]

        for angle, description in positions:
            self.get_logger().info(f'  {description}')
            self.move_to_angle(angle)
            time.sleep(1.0)

        self.get_logger().info('Position test complete')

    def continuous_sweep(self, duration=10, delay=0.02):
        """Continuous back-and-forth sweep for specified duration"""
        self.get_logger().info(f'Continuous sweep for {duration} seconds...')
        start_time = time.time()
        direction = 1  # 1 for forward, -1 for backward
        angle = 90

        while time.time() - start_time < duration:
            self.move_to_angle(angle)
            angle += direction * 1

            if angle >= 180:
                direction = -1
            elif angle <= 0:
                direction = 1

            time.sleep(delay)

        self.center()
        self.get_logger().info('Continuous sweep complete')

    def dance_pattern(self):
        """Fun dance pattern"""
        self.get_logger().info('Dance pattern...')
        pattern = [
            (0, 0.2), (180, 0.2), (0, 0.2), (180, 0.2),  # Quick back and forth
            (90, 0.5),  # Center
            (45, 0.3), (135, 0.3), (45, 0.3), (135, 0.3),  # Left-right
            (90, 0.5),  # Center
            (60, 0.2), (120, 0.2), (60, 0.2), (120, 0.2),  # Small waves
            (90, 1.0),  # Final center
        ]

        for angle, delay in pattern:
            self.move_to_angle(angle)
            time.sleep(delay)

        self.get_logger().info('Dance complete!')


def print_menu():
    """Print the interactive menu"""
    print("\n" + "="*50)
    print("   Servo Motor Test Menu")
    print("="*50)
    print("Basic Positions:")
    print("  1. Move to center (90°)")
    print("  2. Move to minimum (0°)")
    print("  3. Move to maximum (180°)")
    print("  4. Custom angle")
    print()
    print("Test Patterns:")
    print("  5. Test specific positions (0, 45, 90, 135, 180)")
    print("  6. Full range sweep (0 -> 180, step=10)")
    print("  7. Reverse sweep (180 -> 0, step=10)")
    print("  8. Smooth sweep (0 -> 180 -> 0, step=1)")
    print()
    print("Advanced Patterns:")
    print("  9. Wave motion")
    print(" 10. Continuous sweep (10 seconds)")
    print(" 11. Dance pattern")
    print()
    print(" 12. Exit")
    print("="*50)
    print()


def main(args=None):
    rclpy.init(args=args)
    controller = ServoController()

    try:
        print("\n🤖 Servo Controller Started")
        print("📍 Servo connected to GP2 (0-180 degrees)")
        print("📡 Publishing to topic: /servo_angle")
        print("\nTip: The servo also responds to even/odd LED control")

        # Initialize to center position
        time.sleep(0.5)
        controller.center()
        time.sleep(1.0)

        while rclpy.ok():
            print_menu()
            choice = input("Enter your choice (1-12): ").strip()

            if choice == '1':
                controller.center()
            elif choice == '2':
                controller.move_to_angle(0)
            elif choice == '3':
                controller.move_to_angle(180)
            elif choice == '4':
                try:
                    angle = int(input("Enter angle (0-180): "))
                    controller.move_to_angle(angle)
                except ValueError:
                    print("❌ Invalid input. Please enter a number.")
            elif choice == '5':
                controller.test_specific_positions()
            elif choice == '6':
                controller.sweep_full_range(delay=0.3)
            elif choice == '7':
                controller.sweep_reverse(delay=0.3)
            elif choice == '8':
                controller.smooth_sweep()
            elif choice == '9':
                controller.wave_motion()
            elif choice == '10':
                controller.continuous_sweep()
            elif choice == '11':
                controller.dance_pattern()
            elif choice == '12':
                print("\n👋 Exiting...")
                controller.center()
                time.sleep(0.5)
                break
            else:
                print("❌ Invalid choice. Please select 1-12.")

            time.sleep(0.5)

    except KeyboardInterrupt:
        print("\n\n⚠️  Keyboard interrupt detected")
        print("🔄 Centering servo before exit...")
        controller.center()
        time.sleep(0.5)
    except Exception as e:
        print(f"\n❌ Error: {e}")
    finally:
        controller.destroy_node()
        rclpy.shutdown()
        print("✅ Shutdown complete")


if __name__ == '__main__':
    main()
