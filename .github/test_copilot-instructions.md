# Micro-ROS Pico 프로젝트 - AI 코딩 에이전트 지침

## 프로젝트 개요
Raspberry Pi Pico 2W에서 실행되는 임베디드 펌웨어로, WiFi 통신을 통해 서보 모터를 제어하는 micro-ROS (ROS2 Foxy) 애플리케이션입니다. Pico SDK 1.6.0으로 빌드되며 ARM Cortex-M 마이크로컨트롤러용으로 크로스 컴파일되는 모듈식 C 펌웨어입니다.

## 아키텍처 및 모듈 구조

```
src/
├── main.c              # 진입점 - 순차 초기화: board → servo → uros → 실행 루프
├── board/              # Pico 2W 하드웨어 추상화 (GPIO, LED, USB 시리얼)
├── drivers/            # 하드웨어 드라이버 (servo_ctrl이 pico_servo 저수준 PWM을 래핑)
├── transport/          # micro-ROS 전송 계층 (WiFi UDP, UART 시리얼)
└── uros/               # micro-ROS 애플리케이션 로직 (에이전트 연결, 구독)
```

**중요: 보드별 코드는 `board/`에 있음 - CYW43 무선 칩 사용 (Pico 2W 전용)**

## 빌드 시스템 (CMake)

**반드시 pico_sdk_import.cmake 이전에 보드 설정:**
```cmake
set(PICO_BOARD pico2_w CACHE STRING "Board type")
include($ENV{PICO_SDK_PATH}/external/pico_sdk_import.cmake)
```

**표준 빌드 명령어:**
```bash
rm -rf build && mkdir build && cd build
cmake ..
make -j4 pico_micro_ros_example  # .uf2 펌웨어 생성
```

**환경 의존성:**
- `PICO_SDK_PATH`는 pico-sdk를 가리켜야 함 (버전 1.6.0)
- 미리 컴파일된 `libmicroros/` 정적 라이브러리 사용 (Foxy, 소스에서 빌드 안 함)
- 툴체인: `gcc-arm-none-eabi` (10-2020-q4-major)

## Critical Patterns & Conventions
## 핵심 패턴 및 규칙

### 1. micro-ROS 전송 설정
**중요:** WiFi 사용 시 `rmw_uros_set_custom_transport()` 첫 번째 인자는 **반드시 `false`**:
```c
rmw_uros_set_custom_transport(
    false,  // 반드시 false - true는 UDP 양방향 통신 중단
    NULL,
    pico_wifi_transport_open,
    // ...
);
```
**이유:** `true`는 프레이밍 모드를 활성화하여 포트 8888에서 UDP 에이전트 핸드셰이크를 중단시킴.

### 2. 서보 PWM 타이밍
- 주파수: **50Hz** (20ms 주기, WRAP=20000)
- 펄스 폭: **1000-2000μs** (0-180°를 위한 1-2ms 듀티 사이클)
- 시스템 클럭에서 **1μs 틱**을 얻기 위한 클럭 분주기 계산:
  ```c
  clkdiv = (float)sys_hz / 1000000.0f;  // 1 tick = 1μs
  ```

### 3. GPIO 핀 할당 (board.h)
```c
#define WIFI_STATUS_PIN 0   // GP0: 연결 상태 LED
#define MSG_STATUS_PIN 1    // GP1: 메시지 수신 표시 (50ms 펄스)
#define SERVO_PIN 2         // GP2: PWM 출력
#define PWM_LED_PIN 3       // GP3: 짝수/홀수 데이터 표시
#define LED_PIN CYW43_WL_GPIO_LED_PIN  // 온보드 LED (CYW43 드라이버)
```

### 4. 에러 처리 패턴
모든 초기화 함수는 `int` 반환 (0=성공). 실패 시 `board_blink_error()` 호출하여 GP0을 깜박이는 무한 루프에 진입. 예외나 assert 없음 - 베어메탈 C임.

### 5. Include 경로
CMake가 `src/` 하위 디렉토리를 include 경로에 추가하므로:
```c
#include "board/board.h"      // "../board/board.h" 아님
#include "drivers/servo_ctrl.h"
#include "pico_servo.h"       // 같은 디렉토리 include도 가능
```

## WiFi 및 네트워킹

**SSID/비밀번호가 하드코딩된 위치:** `src/transport/pico_wifi_transport.c`
```c
cyw43_arch_wifi_connect_timeout_ms("bindsoft_805_2.4g", "bindsoft805", CYW43_AUTH_WPA2_AES_PSK, 30000)
```

**에이전트 IP (같은 파일):**
```c
#define AGENT_IP "192.168.219.74"  // micro-ros-agent 실행 중인 PC
#define AGENT_PORT 8888
```

**연결 테스트:**
```bash
# PC에서 (WSL2 또는 Linux):
micro-ros-agent udp4 --port 8888 -v 4

# 시리얼 모니터링:
minicom -b 115200 -D /dev/ttyACM0
```

## 개발 워크플로우

### 새 하드웨어 드라이버 추가
1. `src/drivers/new_driver.{c,h}` 생성
2. `servo_ctrl` 패턴을 따라 고수준 API 래퍼 추가
3. `CMakeLists.txt` 업데이트: `pico_micro_ros_example` 소스에 추가
4. 필요시 include 디렉토리 추가: `${CMAKE_CURRENT_LIST_DIR}/src/drivers`

### 전송 계층 전환
UART 사용 가능하지만 미사용. WiFi에서 UART로 전환하려면:
1. `src/uros/uros_app.c`에서 `rmw_uros_set_custom_transport()` 콜백 변경
2. `pico_wifi_transport_*`을 `pico_serial_transport_*`로 교체 (`pico_uart_transport.c`에서)
3. CMakeLists 소스 업데이트: `pico_wifi_transport.c` → `pico_uart_transport.c` 교체

### 서보 문제 디버깅
- **오실로스코프 확인:** GP2에서 50Hz 신호 검증
- `pico_servo.c:servo_microseconds()`의 펄스 폭 계산:
  ```c
  uint val = (uint)fix16_to_int(fix16_div(fix16_from_int(us), us_per_unit));
  ```
- `libfixmath/` 사용 (M0+ 코어에서 부동소수점 회피를 위한 고정소수점 연산)

### 일반적인 빌드 문제
- **"pico/cyw43_arch.h not found"**: SDK import 전에 `PICO_BOARD`가 `pico2_w`로 설정되지 않음
- **microros 심볼 링킹 에러**: `link_directories(libmicroros)` 존재 확인
- **클린 빌드 필요**: CMake가 보드 타입 캐싱 - 보드 변경 시 항상 `rm -rf build`

## 코드 구조 철학

**계층별 분리:**
- `board/`: 플랫폼별 코드 (Pico 2W GPIO, CYW43 WiFi 칩)
- `drivers/`: 하드웨어 인터페이스 (플랫폼 간 재사용 가능)
- `transport/`: 통신 추상화 (WiFi/UART 교체 가능)
- `uros/`: 애플리케이션 로직 (ROS2 구독, 비즈니스 로직)

**새 모듈 생성 시기:** 기능이 재사용 가능하거나 플랫폼별 코드를 격리할 때.

## 테스팅 및 배포

**유닛 테스트 없음.** 테스트 방법:
1. 빌드 검증 (경고 없음)
2. 런타임 시리얼 출력 모니터링
3. ROS2 통합 테스트: `ros2 topic pub /pico_subscriber std_msgs/Int32 "data: 90"`

**배포:**
1. 빌드 → `build/pico_micro_ros_example.uf2` 생성
2. Pico의 BOOTSEL 버튼 누른 채 USB 연결 → 드라이브로 마운트
3. `.uf2` 파일을 마운트된 드라이브에 복사 → 자동 플래시 및 재부팅

## 알려진 제약사항 및 주의사항

- **WSL2 네트워킹:** WiFi 작동하지만 초기 설정 시 NAT/미러 네트워크 모드에서 문제 있었음
- **인터럽트에서 동적 메모리 금지:** 서보 IRQ 핸들러(`wrap_cb`)는 PWM 레벨만 업데이트
- **에이전트 핑 타임아웃:** 120회 시도 × 1000ms = 최대 2분 연결 대기
- **고정소수점 연산 필수:** Cortex-M0+에 FPU 없음 - libfixmath의 `fix16_t` 사용
- **UART vs USB 시리얼:** 둘 다 활성화됨, USB는 디버그용, UART는 잠재적 micro-ROS 전송용

## 외부 의존성

- **libmicroros/**: 미리 컴파일된 micro-ROS 클라이언트 라이브러리 (Foxy) - 재빌드 안 함
- **libfixmath/**: 고정소수점 연산 라이브러리 (git 서브모듈)
- **pico-sdk**: 1.6.0 (네트워킹에 lwIP, USB에 TinyUSB, WiFi에 CYW43 드라이버 사용)

의존성 수정 시, libfixmath 소스만 트리 내부에 있음 - 나머지는 외부.
