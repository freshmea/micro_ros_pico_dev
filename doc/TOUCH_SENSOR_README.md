# Touch Sensor Integration Guide

터치 센서를 micro-ROS 환경에 통합한 문서입니다.

## 📌 하드웨어 연결

```text
Touch Sensors:
  • Touch Sensor 1: GP18 (Pull-down)
  • Touch Sensor 2: GP19 (Pull-down)
  • Touch Sensor 3: GP20 (Pull-down)

  각 센서는 High 신호로 터치 감지
```

## 🎯 주요 기능

> 참고: 최신 런타임(`uros_main`)에서는 **`touch_1/state`만 publish**합니다.
> `touch_X/beep_count`, `touch_X/duration` 퍼블리시는 `uros_app` 참고 구현에 포함되어 있습니다.

### 1. 자동 비프음

- 터치 센서가 눌리면 자동으로 비프음 재생 (1000Hz, 100ms)
- 별도 명령 없이 즉각적인 피드백 제공

### 2. 상태 발행 (Bool)

- **Topic**: `/touch_X/state` (X = 1, 2, 3)
- **Type**: `std_msgs/Bool`
- **Data**:
  - `true`: 터치 센서가 눌림
  - `false`: 터치 센서가 떼어짐

### 3. Beep Count 발행 (UInt8)

- **Topic**: `/touch_X/beep_count`
- **Type**: `std_msgs/UInt8`
- **Data**: 터치 중 발생한 beep 횟수
- 터치가 떼어질 때 발행됨

### 4. Duration 발행 (UInt64)

- **Topic**: `/touch_X/duration`
- **Type**: `std_msgs/UInt64`
- **Data**: 터치가 지속된 시간 (밀리초)
- 터치가 떼어질 때 발행됨

## 📁 생성된 파일

### 드라이버 파일

- **`src/drivers/touch_sensor.h`**: 터치 센서 드라이버 헤더
- **`src/drivers/touch_sensor.c`**: 터치 센서 드라이버 구현

### 통합 파일

- **`src/uros/uros_app.c`**: 전체 토픽 퍼블리시 참고 구현
- **`src/uros/uros_main.c`**: 런타임에서 `touch_1/state`만 publish

### 테스트 파일

- **`test/test_touch.py`**: Python 테스트 스크립트

## 🏗️ 구조 설계

### TouchSensor 구조체

```c
typedef struct
{
    uint8_t pin;              // GPIO 핀 번호
    bool currentState;        // 현재 상태
    bool lastState;           // 이전 상태
    uint64_t startTime;       // 터치 시작 시간
    uint64_t duration;        // 터치 지속 시간
    uint8_t beepCount;        // 현재 beep 카운트
    uint8_t lastBeepCount;    // 마지막 beep 카운트
} TouchSensor;
```

### TouchSensorManager 구조체

```c
typedef struct
{
    TouchSensor sensors[TOUCH_SENSOR_COUNT];  // 3개 센서 배열
} TouchSensorManager;
```

### 장점

- ✅ **코드 중복 제거**: 배열로 관리하여 3개 센서를 효율적으로 처리
- ✅ **확장성**: `TOUCH_SENSOR_COUNT`만 변경하면 센서 개수 조정 가능
- ✅ **유지보수**: 단일 함수로 모든 센서 제어

## 🚀 사용 방법

### 1. 빌드

```bash
cd /home/aa/pico/micro_ros_pico_dev/build
cmake ..
make -j4
```

### 2. Pico에 플래시

```bash
# BOOTSEL 모드로 연결 후
cp bindbot.uf2 /media/aa/RPI-RP2/
```

### 3. Agent 실행

```bash
ros2 run micro_ros_agent micro_ros_agent udp4 --port 8888
```

### 4. 테스트 스크립트 실행

```bash
cd /home/aa/pico/micro_ros_pico_dev/test
python3 test_touch.py
```

## 📡 ROS2 CLI 사용

### Topic 확인

```bash
# 모든 topic 확인
ros2 topic list

# 특정 센서 상태 모니터링
ros2 topic echo /touch_1/state
ros2 topic echo /touch_1/beep_count
ros2 topic echo /touch_1/duration
```

### Topic 타입 확인

```bash
ros2 topic info /touch_1/state
ros2 topic info /touch_1/beep_count
ros2 topic info /touch_1/duration
```

## 💻 Python 예제

### 기본 모니터링

```python
import rclpy
from rclpy.node import Node
from std_msgs.msg import Bool, UInt8, UInt64

class TouchMonitor(Node):
    def __init__(self):
        super().__init__('touch_monitor')

        # Touch 1 상태 구독
        self.sub = self.create_subscription(
            Bool,
            'touch_1/state',
            self.callback,
            10
        )

    def callback(self, msg):
        if msg.data:
            print("Touch 1 PRESSED!")
        else:
            print("Touch 1 Released")

rclpy.init()
node = TouchMonitor()
rclpy.spin(node)
```

### Duration 체크

```python
def duration_callback(msg):
    duration_sec = msg.data / 1000.0
    print(f"Touch held for {duration_sec:.2f} seconds")

duration_sub = node.create_subscription(
    UInt64,
    'touch_1/duration',
    duration_callback,
    10
)
```

### 모든 센서 모니터링

```python
for i in range(1, 4):
    node.create_subscription(
        Bool,
        f'touch_{i}/state',
        lambda msg, idx=i: print(f"Touch {idx}: {msg.data}"),
        10
    )
```

## 🔧 API 레퍼런스

### 초기화

```c
void touch_sensor_init(TouchSensorManager *manager);
```

모든 터치 센서를 초기화하고 GPIO를 설정합니다.

### 업데이트

```c
void touch_sensor_update(TouchSensorManager *manager, uint64_t currentMillis);
```

모든 센서의 상태를 업데이트합니다. 타이머에서 10ms마다 호출됩니다.

### 상태 확인

```c
bool touch_sensor_is_pressed(TouchSensorManager *manager, uint8_t index);
bool touch_sensor_is_released(TouchSensorManager *manager, uint8_t index);
bool touch_sensor_is_held(TouchSensorManager *manager, uint8_t index);
```

### Duration & Beep Count

```c
uint64_t touch_sensor_get_duration(TouchSensorManager *manager, uint8_t index);
uint8_t touch_sensor_get_beep_count(TouchSensorManager *manager, uint8_t index);
void touch_sensor_increment_beep_count(TouchSensorManager *manager, uint8_t index);
```

## 📊 Topic 구조

| Sensor | State Topic | Beep Topic | Duration Topic |
| -------- | ------------- | ------------ | ---------------- |
| Touch 1 (GP18) | `/touch_1/state` | `/touch_1/beep_count` | `/touch_1/duration` |
| Touch 2 (GP19) | `/touch_2/state` | `/touch_2/beep_count` | `/touch_2/duration` |
| Touch 3 (GP20) | `/touch_3/state` | `/touch_3/beep_count` | `/touch_3/duration` |

> 현재 `uros_main`에서는 `touch_1/state`만 publish됩니다.

## ⚙️ 설정

### 핀 변경

`src/drivers/touch_sensor.h`에서 핀 번호 수정:

```c
#define TOUCH_PIN_1 18
#define TOUCH_PIN_2 19
#define TOUCH_PIN_3 20
```

### Long Press 임계값

```c
#define LONG_PRESS_THRESHOLD_MS 1000  // 1초
```

### 센서 개수 변경

```c
#define TOUCH_SENSOR_COUNT 3  // 원하는 개수로 변경
```

## 🎭 동작 흐름

1. **터치 감지**: GPIO가 HIGH 신호 감지
2. **State 발행**: `touch_X/state = true` 발행
3. **비프음 재생**: 1000Hz, 100ms 자동 재생
4. **Duration 측정**: 터치 지속 시간 측정 시작
5. **터치 해제**: GPIO가 LOW 신호 감지
6. **Release 발행**:
   - `touch_X/state = false`
   - `touch_X/beep_count = N`
   - `touch_X/duration = Xms`

## 🔍 문제 해결

### 센서가 감지되지 않을 때

1. GPIO 연결 확인 (GP18, 19, 20)
2. Pull-down 저항 확인
3. 센서 전원 확인
4. Topic 확인: `ros2 topic list | grep touch`

### 비프음이 나지 않을 때

1. Buzzer 연결 확인 (GP16)
2. Buzzer topic 확인: `ros2 topic echo /buzzer`
3. 버저 초기화 확인

### Duration이 0일 때

1. 타이머 동작 확인
2. 센서가 충분히 길게 눌렸는지 확인
3. Update 주기 확인 (10ms)

## 📈 성능

- **업데이트 주기**: 10ms (100Hz)
- **응답 시간**: < 20ms (터치 감지부터 비프음까지)
- **센서 개수**: 3개 (확장 가능)
- **메모리 사용**: 약 72 bytes (3 sensors × 24 bytes)

## 🎯 활용 예제

### 1. 터치 카운터

각 센서의 터치 횟수를 카운트하여 표시

### 2. 터치 시간 측정

Long press를 감지하여 특별한 동작 수행

### 3. 터치 패턴 인식

여러 센서의 터치 순서로 패턴 인식

### 4. 게임 컨트롤러

3개 터치 센서를 게임 버튼으로 활용

## 📚 관련 문서

- [BUZZER_README.md](BUZZER_README.md) - 버저 사용 가이드
- [PROJECT_STRUCTURE.md](PROJECT_STRUCTURE.md) - 프로젝트 구조
- [example/README.md](../example/README.md) - 예제 가이드

## 라이선스

MIT License - 자유롭게 사용, 수정, 배포 가능
