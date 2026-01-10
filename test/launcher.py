#!/usr/bin/env python3
"""
micro-ROS Pico Test Launcher

통합 테스트 런처 - Servo와 Buzzer 테스트를 선택할 수 있습니다.
"""

import os
import subprocess
import sys


def print_banner():
    """Print application banner"""
    banner = """
    ╔═══════════════════════════════════════════════╗
    ║   micro-ROS Pico Test Launcher               ║
    ║   Raspberry Pi Pico W Control Suite          ║
    ╚═══════════════════════════════════════════════╝
    """
    print(banner)


def print_main_menu():
    """Print main menu"""
    print("\n" + "="*50)
    print("  Select Test Module")
    print("="*50)
    print("  1. 🤖 Servo Motor Test (GP2)")
    print("  2. 🔊 Buzzer Test (GP16)")
    print("  3. ℹ️  Show Hardware Info")
    print("  4. 📡 Check ROS2 Connection")
    print("  5. 🚪 Exit")
    print("="*50)
    print()


def show_hardware_info():
    """Display hardware connection information"""
    info = """
    ╔═══════════════════════════════════════════════╗
    ║           Hardware Connections                ║
    ╚═══════════════════════════════════════════════╝

    📌 Servo Motor:
       • Pin: GP2 (PWM)
       • Range: 0-180 degrees
       • Power: 5V (external recommended)
       • Topic: /servo_angle
       • Type: std_msgs/Int32

    📌 Passive Buzzer:
       • Pin: GP16 (PWM)
       • Power: 3.3V
       • Topic: /buzzer
       • Type: std_msgs/Int32MultiArray
       • Format: [frequency (Hz), duration (ms)]

    📌 Button (Random Melody):
       • Pin: GP24
       • Config: Pull-up, Active LOW
       • Function: Play random melody

    📌 Status LEDs:
       • GP0: WiFi/Agent Connection
       • GP1: Message Received Indicator
       • GP3: PWM LED (even/odd control)
       • Onboard LED: Status

    📡 ROS2 Topics:
       • /servo_angle - Servo control
       • /buzzer - Buzzer control

    🌐 Network:
       • WiFi SSID: (configured in firmware)
       • Agent Port: 8888 (UDP)
    """
    print(info)
    input("\nPress Enter to continue...")


def check_ros2_connection():
    """Check ROS2 and micro-ROS agent connection"""
    print("\n🔍 Checking ROS2 Environment...\n")

    # Check if ROS2 is installed
    try:
        result = subprocess.run(
            ['ros2', '--version'],
            capture_output=True,
            text=True,
            timeout=5
        )
        print(f"✅ ROS2: {result.stdout.strip()}")
    except FileNotFoundError:
        print("❌ ROS2 not found. Please install ROS2.")
        return
    except subprocess.TimeoutExpired:
        print("⚠️  ROS2 command timeout")
        return

    # Check available topics
    print("\n📡 Checking topics...")
    try:
        result = subprocess.run(
            ['ros2', 'topic', 'list'],
            capture_output=True,
            text=True,
            timeout=5
        )
        topics = result.stdout.strip().split('\n')

        servo_topic_found = '/servo_angle' in topics
        buzzer_topic_found = '/buzzer' in topics

        print(f"   /servo_angle: {'✅ Found' if servo_topic_found else '❌ Not found'}")
        print(f"   /buzzer: {'✅ Found' if buzzer_topic_found else '❌ Not found'}")

        if not servo_topic_found and not buzzer_topic_found:
            print("\n⚠️  No Pico topics found. Is the Pico connected to the agent?")

    except subprocess.TimeoutExpired:
        print("⚠️  Topic list timeout - Agent may not be running")
    except Exception as e:
        print(f"❌ Error checking topics: {e}")

    # Check for nodes
    print("\n🤖 Checking nodes...")
    try:
        result = subprocess.run(
            ['ros2', 'node', 'list'],
            capture_output=True,
            text=True,
            timeout=5
        )
        nodes = result.stdout.strip().split('\n')
        print(f"   Found {len([n for n in nodes if n])} node(s)")
        for node in nodes:
            if node:
                print(f"   • {node}")
    except subprocess.TimeoutExpired:
        print("⚠️  Node list timeout")
    except Exception as e:
        print(f"❌ Error checking nodes: {e}")

    print("\n💡 To start micro-ROS agent:")
    print("   ros2 run micro_ros_agent micro_ros_agent udp4 --port 8888")

    input("\nPress Enter to continue...")


def run_servo_test():
    """Run servo test script"""
    script_path = os.path.join(os.path.dirname(__file__), 'test_servo.py')

    if not os.path.exists(script_path):
        print(f"❌ Error: {script_path} not found!")
        return

    print("\n🚀 Launching Servo Test...\n")
    try:
        subprocess.run(['python3', script_path])
    except KeyboardInterrupt:
        print("\n⚠️  Servo test interrupted")
    except Exception as e:
        print(f"❌ Error running servo test: {e}")


def run_buzzer_test():
    """Run buzzer test script"""
    script_path = os.path.join(os.path.dirname(__file__), 'test_buzzer.py')

    if not os.path.exists(script_path):
        print(f"❌ Error: {script_path} not found!")
        return

    print("\n🚀 Launching Buzzer Test...\n")
    try:
        subprocess.run(['python3', script_path])
    except KeyboardInterrupt:
        print("\n⚠️  Buzzer test interrupted")
    except Exception as e:
        print(f"❌ Error running buzzer test: {e}")


def main():
    """Main application loop"""
    print_banner()

    # Check if we're in the right directory
    if not os.path.exists('test_servo.py') or not os.path.exists('test_buzzer.py'):
        print("⚠️  Warning: Test scripts not found in current directory")
        print(f"   Current directory: {os.getcwd()}")
        print(f"   Expected: /home/aa/pico/micro_ros_pico_dev/example")
        print()

    while True:
        try:
            print_main_menu()
            choice = input("Enter your choice (1-5): ").strip()

            if choice == '1':
                run_servo_test()
            elif choice == '2':
                run_buzzer_test()
            elif choice == '3':
                show_hardware_info()
            elif choice == '4':
                check_ros2_connection()
            elif choice == '5':
                print("\n👋 Goodbye!\n")
                sys.exit(0)
            else:
                print("\n❌ Invalid choice. Please select 1-5.\n")

        except KeyboardInterrupt:
            print("\n\n👋 Goodbye!\n")
            sys.exit(0)
        except Exception as e:
            print(f"\n❌ Unexpected error: {e}\n")


if __name__ == '__main__':
    main()
