#!/usr/bin/env python3
"""
Servo Control Test Script for micro-ROS Pico

This script demonstrates how to control two servo motors on the Raspberry Pi Pico
through micro-ROS by publishing to the 'servo_angle' and 'servo2_angle' topics.

Topics:
    - /servo_angle  (Servo 1)
    - /servo2_angle (Servo 2)
Message Type: std_msgs/Int32
Data Format: angle (0-180 degrees)

Hardware:
    - Servo 1 connected to SERVO_PIN
    - Servo 2 connected to SERVO_PIN2
    - Servo range: 0-180 degrees

Examples:
    - Move to center (90 degrees): 90
    - Move to minimum (0 degrees): 0
    - Move to maximum (180 degrees): 180
"""

import random
import time

import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32


class ServoController(Node):
    def __init__(self):
        super().__init__('servo_controller')
        self.servo1_publisher = self.create_publisher(Int32, 'servo_angle', 10)
        self.servo2_publisher = self.create_publisher(Int32, 'servo2_angle', 10)
        self.get_logger().info('Servo Controller initialized')
        self.get_logger().info('Publishing to topics: /servo_angle, /servo2_angle')
        self.get_logger().info('Servo 1 on SERVO_PIN, Servo 2 on SERVO_PIN2')

    def move_to_angle(self, angle, servo_id=1):
        """Move servo to specific angle (0-180)"""
        if not (0 <= angle <= 180):
            self.get_logger().warning(f'Angle {angle} out of range (0-180)')
            return False

        msg = Int32()
        msg.data = angle
        if servo_id == 1:
            self.servo1_publisher.publish(msg)
            self.get_logger().info(f'Servo 1 -> {angle} degrees')
        elif servo_id == 2:
            self.servo2_publisher.publish(msg)
            self.get_logger().info(f'Servo 2 -> {angle} degrees')
        else:
            self.get_logger().warning(f'Unknown servo id: {servo_id}')
            return False
        return True

    def center(self, servo_id=1):
        """Move servo to center position (90 degrees)"""
        self.get_logger().info(f'Moving servo {servo_id} to center position...')
        self.move_to_angle(90, servo_id=servo_id)

    def sweep_full_range(self, delay=0.5, servo_id=1):
        """Sweep servo from 0 to 180 degrees"""
        self.get_logger().info(f'Sweeping servo {servo_id} full range (0-180)...')
        for angle in range(0, 181, 10):
            self.move_to_angle(angle, servo_id=servo_id)
            time.sleep(delay)

        self.get_logger().info('Sweep complete')

    def sweep_reverse(self, delay=0.5, servo_id=1):
        """Sweep servo from 180 to 0 degrees"""
        self.get_logger().info(f'Sweeping servo {servo_id} in reverse (180-0)...')
        for angle in range(180, -1, -10):
            self.move_to_angle(angle, servo_id=servo_id)
            time.sleep(delay)

        self.get_logger().info('Reverse sweep complete')

    def sweep_smooth(self, delay=0.02, servo_id=1):
        """Smooth sweep from 0 to 180 and back"""
        self.get_logger().info(f'Servo {servo_id} smooth sweep: 0 -> 180 -> 0...')

        # 0 to 180
        for angle in range(0, 181, 1):
            self.move_to_angle(angle, servo_id=servo_id)
            time.sleep(delay)

        time.sleep(0.5)

        # 180 to 0
        for angle in range(180, -1, -1):
            self.move_to_angle(angle, servo_id=servo_id)
            time.sleep(delay)

        self.get_logger().info('Smooth sweep complete')

    def wave_motion(self, cycles=3, delay=0.05, servo_id=1):
        """Create a waving motion"""
        self.get_logger().info(f'Servo {servo_id} waving motion ({cycles} cycles)...')

        for _ in range(cycles):
            # Wave left to right
            for angle in [90, 120, 90, 60]:
                self.move_to_angle(angle, servo_id=servo_id)
                time.sleep(delay * 5)

        self.center(servo_id=servo_id)
        self.get_logger().info('Wave motion complete')

    def test_specific_positions(self, servo_id=1):
        """Test specific servo positions"""
        self.get_logger().info(f'Testing servo {servo_id} specific positions...')
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
            self.move_to_angle(angle, servo_id=servo_id)
            time.sleep(1.0)

        self.get_logger().info('Position test complete')

    def continuous_sweep(self, duration=10, delay=0.02, servo_id=1):
        """Continuous back-and-forth sweep for specified duration"""
        self.get_logger().info(f'Servo {servo_id} continuous sweep for {duration} seconds...')
        start_time = time.time()
        direction = 1  # 1 for forward, -1 for backward
        angle = 90

        while time.time() - start_time < duration:
            self.move_to_angle(angle, servo_id=servo_id)
            angle += direction * 1

            if angle >= 180:
                direction = -1
            elif angle <= 0:
                direction = 1

            time.sleep(delay)

        self.center(servo_id=servo_id)
        self.get_logger().info('Continuous sweep complete')

    def dance_pattern(self, servo_id=1):
        """Fun dance pattern"""
        self.get_logger().info(f'Servo {servo_id} dance pattern...')
        pattern = [
            (0, 0.2), (180, 0.2), (0, 0.2), (180, 0.2),  # Quick back and forth
            (90, 0.5),  # Center
            (45, 0.3), (135, 0.3), (45, 0.3), (135, 0.3),  # Left-right
            (90, 0.5),  # Center
            (60, 0.2), (120, 0.2), (60, 0.2), (120, 0.2),  # Small waves
            (90, 1.0),  # Final center
        ]

        for angle, delay in pattern:
            self.move_to_angle(angle, servo_id=servo_id)
            time.sleep(delay)

        self.get_logger().info('Dance complete!')

    def dual_random_bounce(
        self,
        duration=20.0,
        servo1_delay=0.08,
        servo2_delay=0.14,
        step_min=2,
        step_max=8,
        flip_chance=0.2,
    ):
        """Random up/down motion on two servos at different speeds."""
        self.get_logger().info(
            f'Dual random test: {duration}s, '
            f'servo1_delay={servo1_delay}s, servo2_delay={servo2_delay}s'
        )

        angle1 = 90
        angle2 = 90
        dir1 = 1 if random.random() < 0.5 else -1
        dir2 = 1 if random.random() < 0.5 else -1
        next1 = time.time()
        next2 = time.time()
        start_time = time.time()

        while time.time() - start_time < duration:
            now = time.time()

            if now >= next1:
                if random.random() < flip_chance:
                    dir1 *= -1
                step = random.randint(step_min, step_max)
                angle1 += dir1 * step
                if angle1 >= 180:
                    angle1 = 180
                    dir1 = -1
                elif angle1 <= 0:
                    angle1 = 0
                    dir1 = 1
                self.move_to_angle(angle1, servo_id=1)
                next1 = now + servo1_delay + random.uniform(0, servo1_delay * 0.5)

            if now >= next2:
                if random.random() < flip_chance:
                    dir2 *= -1
                step = random.randint(step_min, step_max)
                angle2 += dir2 * step
                if angle2 >= 180:
                    angle2 = 180
                    dir2 = -1
                elif angle2 <= 0:
                    angle2 = 0
                    dir2 = 1
                self.move_to_angle(angle2, servo_id=2)
                next2 = now + servo2_delay + random.uniform(0, servo2_delay * 0.5)

            time.sleep(0.005)

        self.center(servo_id=1)
        self.center(servo_id=2)
        self.get_logger().info('Dual random test complete')


def print_menu():
    """Print the interactive menu"""
    print("\n" + "="*50)
    print("   Servo Motor Test Menu")
    print("="*50)
    print("Basic Positions (Both servos):")
    print("  1. Move to center (90°)")
    print("  2. Move to minimum (0°)")
    print("  3. Move to maximum (180°)")
    print("  4. Custom angle")
    print()
    print("Test Patterns (Both servos):")
    print("  5. Test specific positions (0, 45, 90, 135, 180)")
    print("  6. Full range sweep (0 -> 180, step=10)")
    print("  7. Reverse sweep (180 -> 0, step=10)")
    print("  8. Smooth sweep (0 -> 180 -> 0, step=1)")
    print()
    print("Advanced Patterns (Both servos):")
    print("  9. Wave motion")
    print(" 10. Continuous sweep (10 seconds)")
    print(" 11. Dance pattern")
    print()
    print("Dual Servo Tests:")
    print(" 12. Random up/down test (independent speeds)")
    print()
    print(" 13. Exit")
    print("="*50)
    print()


def main(args=None):
    rclpy.init(args=args)
    controller = ServoController()

    try:
        print("\n🤖 Servo Controller Started")
        print("📍 Servo 1 on SERVO_PIN, Servo 2 on SERVO_PIN2 (0-180 degrees)")
        print("📡 Publishing to topics: /servo_angle, /servo2_angle")
        print("\nTip: The servo also responds to even/odd LED control")

        # Initialize to center position
        time.sleep(0.5)
        controller.center(servo_id=1)
        controller.center(servo_id=2)
        time.sleep(1.0)

        while rclpy.ok():
            print_menu()
            choice = input("Enter your choice (1-13): ").strip()

            if choice == '1':
                controller.center(servo_id=1)
                controller.center(servo_id=2)
            elif choice == '2':
                controller.move_to_angle(0, servo_id=1)
                controller.move_to_angle(0, servo_id=2)
            elif choice == '3':
                controller.move_to_angle(180, servo_id=1)
                controller.move_to_angle(180, servo_id=2)
            elif choice == '4':
                try:
                    angle = int(input("Enter angle (0-180): "))
                    controller.move_to_angle(angle, servo_id=1)
                    controller.move_to_angle(angle, servo_id=2)
                except ValueError:
                    print("❌ Invalid input. Please enter a number.")
            elif choice == '5':
                controller.test_specific_positions(servo_id=1)
                controller.test_specific_positions(servo_id=2)
            elif choice == '6':
                controller.sweep_full_range(delay=0.3, servo_id=1)
                controller.sweep_full_range(delay=0.3, servo_id=2)
            elif choice == '7':
                controller.sweep_reverse(delay=0.3, servo_id=1)
                controller.sweep_reverse(delay=0.3, servo_id=2)
            elif choice == '8':
                controller.sweep_smooth(servo_id=1)
                controller.sweep_smooth(servo_id=2)
            elif choice == '9':
                controller.wave_motion(servo_id=1)
                controller.wave_motion(servo_id=2)
            elif choice == '10':
                controller.continuous_sweep(servo_id=1)
                controller.continuous_sweep(servo_id=2)
            elif choice == '11':
                controller.dance_pattern(servo_id=1)
                controller.dance_pattern(servo_id=2)
            elif choice == '12':
                controller.dual_random_bounce()
            elif choice == '13':
                print("\n👋 Exiting...")
                controller.center(servo_id=1)
                controller.center(servo_id=2)
                time.sleep(0.5)
                break
            else:
                print("❌ Invalid choice. Please select 1-13.")

            time.sleep(0.5)

    except KeyboardInterrupt:
        print("\n\n⚠️  Keyboard interrupt detected")
        print("🔄 Centering servo before exit...")
        controller.center(servo_id=1)
        controller.center(servo_id=2)
        time.sleep(0.5)
    except Exception as e:
        print(f"\n❌ Error: {e}")
    finally:
        controller.destroy_node()
        print("✅ Shutdown complete")


if __name__ == '__main__':
    main()
