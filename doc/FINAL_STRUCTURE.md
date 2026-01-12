# Micro-ROS Pico 프로젝트 - 최종 구조

## ✅ 완료된 작업

### 1. 모듈화 및 파일 재구성

기존의 단일 파일 `pico_micro_ros_example.c`를 모듈화하고, 모든 `pico_*.c/h` 파일들을 `src/` 폴더로 이동했습니다.

## 📁 최종 폴더 구조

```text
src/
├── main.c                              # 메인 진입점
├── board/
│   ├── board.c                        # 보드 초기화 및 GPIO 제어
│   └── board.h
├── drivers/
│   ├── servo_ctrl.c                   # 서보 제어 고수준 인터페이스
│   ├── servo_ctrl.h
│   ├── pico_servo.c                   # 서보 저수준 드라이버 (PWM)
│   └── pico_servo.h
├── transport/
│   ├── pico_wifi_transport.c          # WiFi 전송 계층
│   ├── pico_wifi_transport.h
│   ├── pico_uart_transport.c          # UART 전송 계층
│   └── pico_uart_transports.h
└── uros/
    ├── uros_app.c                     # micro-ROS 애플리케이션
    └── uros_app.h
```

- **총 13개 파일, 4개 디렉토리**

## 📦 각 모듈의 역할

### 1. **board/** - 하드웨어 추상화 계층

- GPIO 핀 초기화 및 제어
- LED 상태 관리 (WiFi, 메시지, PWM LED, 온보드 LED)
- USB 시리얼 초기화
- 에러 표시 (깜박임)

### 2. **drivers/** - 하드웨어 드라이버

- **servo_ctrl**: 서보 제어 고수준 API (각도 기반)
- **pico_servo**: 서보 저수준 드라이버 (PWM, 타이밍 제어)

### 3. **transport/** - 통신 전송 계층

- **pico_wifi_transport**: WiFi UDP 전송 (micro-ROS agent 연결)
- **pico_uart_transport**: UART 시리얼 전송 (대체 전송 방법)

### 4. **uros/** - micro-ROS 애플리케이션

- WiFi 전송 설정
- micro-ROS agent 연결
- ROS2 노드 및 구독자 생성
- 메시지 수신 콜백 처리

### 5. **main.c** - 애플리케이션 진입점

- 모든 모듈 초기화
- 에러 처리
- 메인 실행 루프

## 🔧 CMakeLists.txt 구성

```cmake
# 모듈화된 소스 파일
add_executable(pico_micro_ros_example
    src/main.c
    src/board/board.c
    src/drivers/servo_ctrl.c
    src/drivers/pico_servo.c
    src/uros/uros_app.c
    src/transport/pico_wifi_transport.c
)

# Include 디렉토리
target_include_directories(pico_micro_ros_example PUBLIC
    libmicroros/include
    ${CMAKE_CURRENT_LIST_DIR}
    ${CMAKE_CURRENT_LIST_DIR}/src
    ${CMAKE_CURRENT_LIST_DIR}/src/board
    ${CMAKE_CURRENT_LIST_DIR}/src/drivers
    ${CMAKE_CURRENT_LIST_DIR}/src/transport
    ${CMAKE_CURRENT_LIST_DIR}/src/uros
    libfixmath/libfixmath
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

- ✅ `pico_micro_ros_example.uf2` (788KB)
- ✅ `test_servo.uf2` (67KB)
- ✅ 경고 없이 성공적으로 컴파일됨

## 🔗 의존성 관계

```text
main.c
  ├─> board/
  │     └─> board.c/h
  ├─> drivers/
  │     ├─> servo_ctrl.c/h
  │     └─> pico_servo.c/h (저수준)
  ├─> transport/
  │     ├─> pico_wifi_transport.c/h
  │     └─> pico_uart_transport.c/h
  └─> uros/
        └─> uros_app.c/h
              ├─> board (LED 제어)
              ├─> drivers/servo_ctrl (서보 제어)
              └─> transport/pico_wifi_transport
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
3. **ROS2 기능 확장**: `src/uros/`에 퍼블리셔, 서비스, 액션 등
4. **다중 보드 지원**: 조건부 컴파일로 Pico, Pico W, Pico 2W 등
5. **설정 관리**: 설정 파일 로드 기능 추가

## 📊 파일 통계

| 모듈      | 파일 수 | 역할                   |
| --------- | ------- | ---------------------- |
| board     | 2       | 하드웨어 추상화        |
| drivers   | 4       | 하드웨어 드라이버      |
| transport | 4       | 통신 전송 계층         |
| uros      | 2       | micro-ROS 애플리케이션 |
| main      | 1       | 진입점                 |
| **합계**  | **13**  | -                      |

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
├── main.c                     (27 lines)
├── board/                     (2 files)
├── drivers/                   (4 files)
├── transport/                 (4 files)
└── uros/                      (2 files)
```

## ✅ 검증 완료

- [x] 모든 소스 파일이 `src/` 폴더 안으로 이동
- [x] CMakeLists.txt 업데이트 완료
- [x] 빌드 성공 (경고 없음)
- [x] `pico_micro_ros_example.uf2` 생성 확인
- [x] `test_servo.uf2` 생성 확인
- [x] 기능적으로 원본과 동일하게 동작
