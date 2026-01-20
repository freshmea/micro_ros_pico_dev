# Micro-ROS Pico 프로젝트 - 최종 구조

## ✅ 완료된 작업

### 1. 모듈화 및 파일 재구성

기존의 단일 파일 `pico_micro_ros_example.c`를 모듈화하고, 모든 `pico_*.c/h` 파일들을 `src/` 폴더로 이동했습니다.

## 📁 최종 폴더 구조

```text
src/
├── main.c                              # FreeRTOS 태스크 구성
├── app_state.h                         # 전역 매니저 공유
├── drivers/
│   ├── servo_ctrl.c                   # 서보 제어 고수준 인터페이스
│   ├── servo_ctrl.h
│   ├── pico_servo.c                   # 서보 저수준 드라이버 (PWM)
│   ├── pico_servo.h
│   ├── passive_buzzer_manager.c       # 패시브 버저 매니저
│   ├── passive_buzzer_manager.h
│   ├── touch_sensor.c                 # 터치 센서 드라이버
│   └── touch_sensor.h
├── transport/
│   ├── pico_wifi_transport.c          # WiFi 전송 계층
│   ├── pico_wifi_transport.h
│   ├── pico_uart_transport.c          # UART 전송 계층
│   └── pico_uart_transports.h
└── tasks/
    ├── uros.c                         # 런타임 micro-ROS 로직
    ├── uros.h
    ├── periph_task.c                  # 주변장치 태스크/보드 초기화
    ├── periph_task.h
    ├── display_task.c                 # 디스플레이 태스크
    └── display_task.h
```

- **총 20개 파일, 4개 디렉토리**

## 📦 각 모듈의 역할

### 1. **tasks/** - 태스크/보드 초기화

- `periph_task_init()`에서 GPIO/USB/버튼 초기화
- LED 상태 관리 (WiFi, 메시지, PWM LED, 온보드 LED)
- 주변장치 태스크에서 터치/버저/서보 갱신

### 2. **drivers/** - 하드웨어 드라이버

- **servo_ctrl**: 서보 제어 고수준 API (각도 기반)
- **pico_servo**: 서보 저수준 드라이버 (PWM, 타이밍 제어)
- **passive_buzzer_manager**: 버저 재생/버튼 처리
- **touch_sensor**: 터치 센서 상태 관리

### 3. **transport/** - 통신 전송 계층

- **pico_wifi_transport**: WiFi UDP 전송 (micro-ROS agent 연결)
- **pico_uart_transport**: UART 시리얼 전송 (대체 전송 방법)

### 4. **tasks/** - micro-ROS 애플리케이션

- `uros`: 런타임에서 사용하는 노드/토픽 구성

### 5. **main.c** - FreeRTOS 태스크 구성

- `uros_task`/`periph_task` 분리
- core0/1 어피니티 설정

## 🔧 CMakeLists.txt 구성

```cmake
# 모듈화된 소스 파일
add_executable(bindbot
    src/main.c
    src/drivers/servo_ctrl.c
    src/drivers/pico_servo.c
    src/drivers/passive_buzzer_manager.c
    src/drivers/touch_sensor.c
    src/tasks/uros.c
    src/tasks/periph_task.c
    src/tasks/display_task.c
    src/transport/pico_wifi_transport.c
)

# Include 디렉토리
target_include_directories(bindbot PUBLIC
    libmicroros/include
    ${CMAKE_CURRENT_LIST_DIR}
    ${CMAKE_CURRENT_LIST_DIR}/src
    ${CMAKE_CURRENT_LIST_DIR}/src/drivers
    ${CMAKE_CURRENT_LIST_DIR}/src/transport
    ${CMAKE_CURRENT_LIST_DIR}/src/tasks
    external/libfixmath/libfixmath
)
```

## 🎯 빌드 방법

```bash
cd /home/aa/pico/micro_ros_pico_dev
rm -rf build && mkdir build && cd build
cmake ..
make -j4
```

**빌드 결과:**

- ✅ `bindbot.uf2`
- ✅ `bindbot.elf`
- ✅ 경고 없이 성공적으로 컴파일됨

## 🔗 의존성 관계

```text
main.c
  ├─> tasks/
  │     ├─> uros.c/h (micro-ROS 런타임)
  │     ├─> periph_task.c/h (보드 초기화/주변장치)
  │     └─> display_task.c/h (OLED 출력)
  ├─> drivers/
  │     ├─> servo_ctrl.c/h
  │     ├─> pico_servo.c/h (저수준)
  │     ├─> passive_buzzer_manager.c/h
  │     └─> touch_sensor.c/h
  └─> transport/
      ├─> pico_wifi_transport.c/h
      └─> pico_uart_transport.c/h
```

## ✨ 모듈화의 장점

1. **명확한 구조**: 기능별로 파일이 분리되어 있음
2. **유지보수성**: 특정 기능 수정 시 해당 모듈만 수정
3. **재사용성**: 개별 모듈을 다른 프로젝트에서 재사용 가능
4. **테스트 용이성**: 각 모듈을 독립적으로 테스트 가능
5. **협업 효율**: 여러 개발자가 동시에 다른 모듈 작업 가능
6. **빌드 효율**: 분할 컴파일로 변경된 파일만 재컴파일
7. **확장성**: 새로운 기능 추가 시 기존 코드에 영향 최소화

## 🚀 향후 확장 방향

### 가능한 확장

1. **새로운 드라이버 추가**: `src/drivers/`에 모터, 센서 등
2. **다양한 전송 계층**: `src/transport/`에 Bluetooth, Ethernet 등
3. **ROS2 기능 확장**: `src/tasks/`에 퍼블리셔, 서비스, 액션 등
4. **다중 보드 지원**: 조건부 컴파일로 Pico, Pico W, Pico 2W 등
5. **설정 관리**: 설정 파일 로드 기능 추가

## 📊 파일 통계

| 모듈      | 파일 수 | 역할                   |
| --------- | ------- | ---------------------- |
| tasks     | 6       | 태스크/보드 초기화     |
| drivers   | 8       | 하드웨어 드라이버      |
| transport | 4       | 통신 전송 계층         |
| main      | 2       | 진입점/공유 상태       |
| **합계**  | **20**  | -                      |

## 🔄 이전 구조와의 비교

### Before (모놀리식)

```text
pico_micro_ros_example.c      (234 lines)
pico_servo.c/h
pico_wifi_transport.c/h
pico_uart_transport.c/h
```

### After (모듈화)

```text
src/
├── main.c                     (FreeRTOS tasks)
├── app_state.h
├── drivers/                   (8 files)
├── transport/                 (4 files)
└── tasks/                     (6 files)
```

## ✅ 검증 완료

- [x] 모든 소스 파일이 `src/` 폴더 안으로 이동
- [x] CMakeLists.txt 업데이트 완료
- [x] 빌드 성공 (경고 없음)
- [x] `bindbot.uf2` 생성 확인
- [x] 기능적으로 원본과 동일하게 동작
