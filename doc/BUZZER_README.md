# Passive Buzzer Manager for micro-ROS Pico

이 모듈은 Raspberry Pi Pico에서 micro-ROS를 사용하여 passive buzzer를 제어하는 기능을 제공합니다.

## 하드웨어 연결

- **버저 핀**: GP16
- **버튼 핀**: GP24 (풀업 저항 내장)

### 연결 방법

```
Passive Buzzer:
  - VCC -> 3.3V
  - GND -> GND
  - Signal -> GP16

Button:
  - One side -> GP24
  - Other side -> GND
  (내부 풀업 저항 사용)
```

## 기능

### 1. ROS Topic 구독
- **Topic 이름**: `/buzzer`
- **메시지 타입**: `std_msgs/Int32MultiArray`
- **데이터 형식**: `[frequency, duration]`
  - `frequency`: 주파수 (Hz), 0이면 휴지표
  - `duration`: 지속 시간 (ms)

### 2. 타이머 기반 업데이트
- 10ms 간격 (100Hz)으로 버저 상태 업데이트
- 버튼 상태 체크

### 3. 버튼 기능
- GP24 버튼을 누르면 랜덤 멜로디 재생
- 다음 중 하나가 랜덤으로 선택됨:
  - Success 멜로디
  - Happy Birthday
  - Twinkle Twinkle Little Star
  - Mary Had a Little Lamb
  - Für Elise
  - Ode to Joy
  - Canon in D
  - Amazing Grace
  - Greensleeves
  - Au Clair de la Lune
  - Brahms Lullaby
  - Simple Beep

## 사용 방법

### 1. 빌드 및 플래시

CMakeLists.txt에 소스 파일 추가 필요:
```cmake
add_executable(your_project
    # ... 기존 소스 파일들
    src/drivers/passive_buzzer_manager.c
)
```

### 2. Python에서 제어

```python
#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32MultiArray

class BuzzerController(Node):
    def __init__(self):
        super().__init__('buzzer_controller')
        self.publisher = self.create_publisher(Int32MultiArray, 'buzzer', 10)

    def play_note(self, frequency, duration):
        msg = Int32MultiArray()
        msg.data = [frequency, duration]
        self.publisher.publish(msg)

# 사용 예제
controller = BuzzerController()
controller.play_note(523, 500)  # C5 음을 500ms 재생
controller.play_note(0, 200)    # 200ms 휴지표
controller.play_note(659, 500)  # E5 음을 500ms 재생
```

### 3. 테스트 스크립트 실행

```bash
# micro-ROS agent 실행 (별도 터미널)
ros2 run micro_ros_agent micro_ros_agent udp4 --port 8888

# 테스트 스크립트 실행
cd /home/aa/pico/micro_ros_pico_dev/example
python3 test_buzzer.py
```

### 4. ROS2 CLI에서 직접 제어

```bash
# 단일 노트 재생 (주파수: 1000Hz, 지속시간: 500ms)
ros2 topic pub --once /buzzer std_msgs/Int32MultiArray "{data: [1000, 500]}"

# C 메이저 코드 재생
ros2 topic pub --once /buzzer std_msgs/Int32MultiArray "{data: [523, 300]}"  # C
ros2 topic pub --once /buzzer std_msgs/Int32MultiArray "{data: [659, 300]}"  # E
ros2 topic pub --once /buzzer std_msgs/Int32MultiArray "{data: [784, 300]}"  # G
```

## API 레퍼런스

### 초기화 함수
```c
void buzzer_init(PassiveBuzzerManager *manager);
```
버저 매니저를 초기화합니다. GPIO 설정 및 시작 멜로디 재생을 포함합니다.

### 업데이트 함수
```c
void buzzer_update(PassiveBuzzerManager *manager, uint64_t currentMillis);
```
버저 상태를 업데이트합니다. 타이머 콜백에서 호출됩니다.

### 노트 추가 함수
```c
void buzzer_add_note(PassiveBuzzerManager *manager, int frequency, int duration);
```
단일 노트를 큐에 추가합니다.

### 멜로디 추가 함수
```c
void buzzer_add_melody(PassiveBuzzerManager *manager, MelodyNote *melody, int noteCount);
```
멜로디 배열을 큐에 추가합니다.

### 버튼 체크 함수
```c
void buzzer_check_button(PassiveBuzzerManager *manager);
```
버튼 상태를 확인하고 눌렸을 때 랜덤 멜로디를 재생합니다.

## 주요 음계 주파수

| 음 | 주파수 (Hz) |
|----|------------|
| C4 | 262 |
| D4 | 294 |
| E4 | 330 |
| F4 | 349 |
| G4 | 392 |
| A4 | 440 |
| B4 | 494 |
| C5 | 523 |
| D5 | 587 |
| E5 | 659 |
| F5 | 698 |
| G5 | 784 |
| A5 | 880 |
| B5 | 988 |
| C6 | 1047 |

## 예제 멜로디

### Happy Birthday
```c
MelodyNote melody[] = {
    {523, 250}, {0, 50},   // C
    {523, 250}, {0, 50},   // C
    {587, 500}, {0, 100},  // D
    {523, 500}, {0, 100},  // C
    {698, 500}, {0, 100},  // F
    {659, 1000}            // E
};
buzzer_add_melody(&buzzer_manager, melody, 11);
```

### Twinkle Twinkle Little Star
```c
MelodyNote melody[] = {
    {523, 500}, {0, 100},  // C
    {523, 500}, {0, 100},  // C
    {784, 500}, {0, 100},  // G
    {784, 500}, {0, 100},  // G
    {880, 500}, {0, 100},  // A
    {880, 500}, {0, 100},  // A
    {784, 1000}            // G
};
buzzer_add_melody(&buzzer_manager, melody, 13);
```

## 문제 해결

### 버저에서 소리가 나지 않을 때
1. GP16 핀 연결 확인
2. 버저가 passive buzzer인지 확인 (active buzzer는 작동하지 않음)
3. 전원 연결 확인 (3.3V)

### 버튼이 작동하지 않을 때
1. GP24 핀 연결 확인
2. 버튼이 GND에 연결되어 있는지 확인
3. 풀업 저항이 활성화되어 있는지 확인

### micro-ROS 연결 문제
1. Agent가 실행 중인지 확인
2. WiFi 설정 확인
3. 도메인 ID 일치 확인

## 라이선스

이 코드는 퍼블릭 도메인 멜로디를 사용하며, MIT 라이선스 하에 배포됩니다.
