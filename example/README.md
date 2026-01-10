# micro-ROS Pico Test Scripts

이 디렉토리에는 Raspberry Pi Pico의 서보 모터와 버저를 테스트하기 위한 Python 스크립트가 포함되어 있습니다.

## 📋 테스트 스크립트 목록

### 1. test_servo.py
서보 모터 제어 테스트 스크립트

- **Topic**: `/servo_angle`
- **Message Type**: `std_msgs/Int32`
- **GPIO Pin**: GP2
- **Range**: 0-180 degrees

### 2. test_buzzer.py
Passive Buzzer 제어 테스트 스크립트

- **Topic**: `/buzzer`
- **Message Type**: `std_msgs/Int32MultiArray`
- **GPIO Pin**: GP16 (Buzzer), GP24 (Button)
- **Data Format**: `[frequency (Hz), duration (ms)]`

## 🚀 사용 방법

### 사전 준비

1. **micro-ROS Agent 실행** (별도 터미널)
```bash
ros2 run micro_ros_agent micro_ros_agent udp4 --port 8888
```

2. **Pico 연결 확인**
Pico가 WiFi에 연결되고 Agent와 통신 중인지 확인합니다.

### Servo 테스트 실행

```bash
cd /home/aa/pico/micro_ros_pico_dev/example
python3 test_servo.py
```

#### 주요 기능:
- ✅ **기본 위치**: 중앙(90°), 최소(0°), 최대(180°)
- ✅ **테스트 패턴**: 특정 위치 순차 테스트
- ✅ **스윕 모드**: 전체 범위, 역방향, 부드러운 스윕
- ✅ **고급 패턴**: 웨이브, 연속 스윕, 댄스 패턴
- ✅ **사용자 정의 각도**: 원하는 각도로 직접 제어

#### 메뉴 예시:
```
==================================================
   Servo Motor Test Menu
==================================================
Basic Positions:
  1. Move to center (90°)
  2. Move to minimum (0°)
  3. Move to maximum (180°)
  4. Custom angle

Test Patterns:
  5. Test specific positions (0, 45, 90, 135, 180)
  6. Full range sweep (0 -> 180, step=10)
  7. Reverse sweep (180 -> 0, step=10)
  8. Smooth sweep (0 -> 180 -> 0, step=1)

Advanced Patterns:
  9. Wave motion
 10. Continuous sweep (10 seconds)
 11. Dance pattern

 12. Exit
==================================================
```

### Buzzer 테스트 실행

```bash
cd /home/aa/pico/micro_ros_pico_dev/example
python3 test_buzzer.py
```

#### 주요 기능:
- 🔊 **단순 비프음**: 1000Hz, 200ms
- 🎵 **음계 연주**: C 메이저 스케일
- 🎂 **멜로디**: Happy Birthday, Twinkle Twinkle Little Star 등
- 📡 **SOS 신호**: 모스 부호로 SOS 전송
- 🎹 **사용자 정의**: 원하는 주파수와 지속시간 설정

#### 메뉴 예시:
```
=== Buzzer Test Menu ===
1. Simple beep
2. C major scale
3. Happy Birthday
4. SOS morse code
5. Twinkle Twinkle Little Star
6. Custom note
7. Exit

Note: GP24 button on Pico plays random melody
========================
```

## 📡 ROS2 CLI로 직접 제어

### Servo 제어

```bash
# 중앙 위치 (90도)
ros2 topic pub --once /servo_angle std_msgs/Int32 "{data: 90}"

# 최소 위치 (0도)
ros2 topic pub --once /servo_angle std_msgs/Int32 "{data: 0}"

# 최대 위치 (180도)
ros2 topic pub --once /servo_angle std_msgs/Int32 "{data: 180}"

# 45도
ros2 topic pub --once /servo_angle std_msgs/Int32 "{data: 45}"
```

### Buzzer 제어

```bash
# 1000Hz를 500ms 재생
ros2 topic pub --once /buzzer std_msgs/Int32MultiArray "{data: [1000, 500]}"

# C 메이저 코드 연속 재생
ros2 topic pub --once /buzzer std_msgs/Int32MultiArray "{data: [523, 300]}"  # C
ros2 topic pub --once /buzzer std_msgs/Int32MultiArray "{data: [659, 300]}"  # E
ros2 topic pub --once /buzzer std_msgs/Int32MultiArray "{data: [784, 300]}"  # G

# 휴지표 (무음 200ms)
ros2 topic pub --once /buzzer std_msgs/Int32MultiArray "{data: [0, 200]}"
```

## 🎯 실전 예제

### 예제 1: 서보 스캔 동작

```python
#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32
import time

rclpy.init()
node = Node('servo_scanner')
pub = node.create_publisher(Int32, 'servo_angle', 10)

# 스캔 동작 (0 -> 180 -> 0)
for angle in list(range(0, 181, 5)) + list(range(180, -1, -5)):
    msg = Int32()
    msg.data = angle
    pub.publish(msg)
    time.sleep(0.05)

node.destroy_node()
rclpy.shutdown()
```

### 예제 2: 버저 알람

```python
#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32MultiArray
import time

rclpy.init()
node = Node('alarm')
pub = node.create_publisher(Int32MultiArray, 'buzzer', 10)

# 3회 반복 알람
for _ in range(3):
    # 높은 음
    msg = Int32MultiArray()
    msg.data = [1000, 200]
    pub.publish(msg)
    time.sleep(0.3)

    # 낮은 음
    msg.data = [500, 200]
    pub.publish(msg)
    time.sleep(0.3)

node.destroy_node()
rclpy.shutdown()
```

### 예제 3: 서보 + 버저 동기화

```python
#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32, Int32MultiArray
import time

rclpy.init()
node = Node('servo_buzzer_sync')
servo_pub = node.create_publisher(Int32, 'servo_angle', 10)
buzzer_pub = node.create_publisher(Int32MultiArray, 'buzzer', 10)

# 각도와 음계 매핑
positions = [
    (0, 262),    # C
    (30, 294),   # D
    (60, 330),   # E
    (90, 349),   # F
    (120, 392),  # G
    (150, 440),  # A
    (180, 494),  # B
]

for angle, freq in positions:
    # 서보 이동
    servo_msg = Int32()
    servo_msg.data = angle
    servo_pub.publish(servo_msg)

    # 음 재생
    buzzer_msg = Int32MultiArray()
    buzzer_msg.data = [freq, 300]
    buzzer_pub.publish(buzzer_msg)

    time.sleep(0.4)

node.destroy_node()
rclpy.shutdown()
```

## 🔧 문제 해결

### 스크립트가 실행되지 않을 때

```bash
# Python 및 ROS2 환경 확인
python3 --version
ros2 --version

# ROS2 패키지 설치 확인
pip3 list | grep rclpy
```

### "Topic not found" 에러

1. Pico가 Agent에 연결되었는지 확인
2. Topic 목록 확인:
```bash
ros2 topic list
```

3. Node 목록 확인:
```bash
ros2 node list
```

### Agent 연결 문제

```bash
# Agent 재시작
ros2 run micro_ros_agent micro_ros_agent udp4 --port 8888 -v6

# Pico 재부팅 (BOOTSEL 버튼을 누르지 않고 전원 재연결)
```

### Servo가 움직이지 않을 때

1. GP2 연결 확인
2. Servo 전원 확인 (별도 5V 전원 권장)
3. PWM 신호 확인
4. 0-180 범위 내 값 전송 확인

### Buzzer에서 소리가 나지 않을 때

1. GP16 연결 확인
2. Passive Buzzer 사용 확인 (Active 아님)
3. 전원(3.3V) 및 GND 연결 확인
4. 주파수 값이 0이 아닌지 확인

## 📚 참고 문서

- [BUZZER_README.md](../BUZZER_README.md) - 버저 상세 가이드
- [BUZZER_INTEGRATION.md](../BUZZER_INTEGRATION.md) - 버저 통합 정보
- [README.md](../README.md) - 프로젝트 전체 문서

## 💡 팁

1. **Servo 테스트 전 주의사항**
   - 서보에 충분한 전원 공급 확인
   - 급격한 각도 변화는 서보에 무리를 줄 수 있음
   - 테스트 중 비정상 소음 발생 시 즉시 중단

2. **Buzzer 볼륨 조절**
   - 현재 버전은 고정 볼륨 (50% duty cycle)
   - 필요시 `passive_buzzer_manager.c`에서 duty cycle 조정

3. **동시 제어**
   - Servo와 Buzzer는 독립적으로 작동
   - 동시 제어 가능 (예제 3 참조)

4. **전원 관리**
   - Servo는 큰 전류 소비 (별도 5V 전원 권장)
   - Buzzer는 3.3V로 충분

## 📝 라이선스

MIT License - 자유롭게 사용, 수정, 배포 가능
