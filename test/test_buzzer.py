#!/usr/bin/env python3
"""
Buzzer Control Test Script for micro-ROS Pico

This script demonstrates how to control the passive buzzer on the Raspberry Pi Pico
through micro-ROS by publishing to the 'buzzer' topic.

Topic: /buzzer
Message Type: std_msgs/Int32MultiArray
Data Format: [frequency (Hz), duration (ms)]

Examples:
    - Play middle C for 500ms: [523, 500]
    - Rest (silence) for 200ms: [0, 200]
"""

import time

import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32MultiArray


class BuzzerController(Node):
    def __init__(self):
        super().__init__('buzzer_controller')
        self.publisher = self.create_publisher(Int32MultiArray, 'buzzer', 10)
        self.get_logger().info('Buzzer Controller initialized')

    def play_note(self, frequency, duration):
        """Play a single note"""
        msg = Int32MultiArray()
        msg.data = [frequency, duration]
        self.publisher.publish(msg)
        self.get_logger().info(f'Playing note: {frequency}Hz for {duration}ms')

    def play_beep(self):
        """Play a simple beep"""
        self.get_logger().info('Playing beep...')
        self.play_note(1000, 200)

    def play_melody_c_major_scale(self):
        """Play C major scale"""
        self.get_logger().info('Playing C major scale...')
        notes = [
            (523, 300),  # C
            (587, 300),  # D
            (659, 300),  # E
            (698, 300),  # F
            (784, 300),  # G
            (880, 300),  # A
            (988, 300),  # B
            (1047, 500), # C
        ]

        for freq, dur in notes:
            self.play_note(freq, dur)
            time.sleep(dur / 1000.0 + 0.1)  # Wait for note to finish plus small gap

    def play_happy_birthday(self):
        """Play Happy Birthday melody"""
        self.get_logger().info('Playing Happy Birthday...')
        melody = [
            (523, 250), (0, 50),   # C + rest
            (523, 250), (0, 50),   # C + rest
            (587, 500), (0, 100),  # D + rest
            (523, 500), (0, 100),  # C + rest
            (698, 500), (0, 100),  # F + rest
            (659, 1000), (0, 200), # E + rest
        ]

        for freq, dur in melody:
            self.play_note(freq, dur)
            time.sleep(dur / 1000.0 + 0.05)

    def play_sos(self):
        """Play SOS in morse code"""
        self.get_logger().info('Playing SOS...')
        short = 200
        long = 600
        gap = 200
        freq = 800

        # S (3 short)
        for _ in range(3):
            self.play_note(freq, short)
            time.sleep((short + gap) / 1000.0)

        time.sleep(0.3)

        # O (3 long)
        for _ in range(3):
            self.play_note(freq, long)
            time.sleep((long + gap) / 1000.0)

        time.sleep(0.3)

        # S (3 short)
        for _ in range(3):
            self.play_note(freq, short)
            time.sleep((short + gap) / 1000.0)

    def play_twinkle_twinkle(self):
        """Play Twinkle Twinkle Little Star"""
        self.get_logger().info('Playing Twinkle Twinkle Little Star...')
        melody = [
            (523, 500), (0, 100),  # C + rest
            (523, 500), (0, 100),  # C + rest
            (784, 500), (0, 100),  # G + rest
            (784, 500), (0, 100),  # G + rest
            (880, 500), (0, 100),  # A + rest
            (880, 500), (0, 100),  # A + rest
            (784, 1000), (0, 200), # G + rest
            (698, 500), (0, 100),  # F + rest
            (698, 500), (0, 100),  # F + rest
            (659, 500), (0, 100),  # E + rest
            (659, 500), (0, 100),  # E + rest
            (587, 500), (0, 100),  # D + rest
            (587, 500), (0, 100),  # D + rest
            (523, 1000),           # C
        ]

        for freq, dur in melody:
            self.play_note(freq, dur)
            time.sleep(dur / 1000.0 + 0.05)


def main(args=None):
    rclpy.init(args=args)
    controller = BuzzerController()

    try:
        print("\n=== Buzzer Test Menu ===")
        print("1. Simple beep")
        print("2. C major scale")
        print("3. Happy Birthday")
        print("4. SOS morse code")
        print("5. Twinkle Twinkle Little Star")
        print("6. Custom note")
        print("7. Exit")
        print("\nNote: GP24 button on Pico plays random melody")
        print("========================\n")

        while rclpy.ok():
            choice = input("Enter your choice (1-7): ").strip()

            if choice == '1':
                controller.play_beep()
            elif choice == '2':
                controller.play_melody_c_major_scale()
            elif choice == '3':
                controller.play_happy_birthday()
            elif choice == '4':
                controller.play_sos()
            elif choice == '5':
                controller.play_twinkle_twinkle()
            elif choice == '6':
                try:
                    freq = int(input("Enter frequency (Hz): "))
                    dur = int(input("Enter duration (ms): "))
                    controller.play_note(freq, dur)
                except ValueError:
                    print("Invalid input. Please enter numbers only.")
            elif choice == '7':
                print("Exiting...")
                break
            else:
                print("Invalid choice. Please select 1-7.")

            time.sleep(0.5)

    except KeyboardInterrupt:
        print("\nShutdown requested...")
    finally:
        controller.destroy_node()

if __name__ == '__main__':
    main()
