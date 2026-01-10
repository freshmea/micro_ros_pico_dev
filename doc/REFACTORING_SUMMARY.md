# Micro-ROS Pico 프로젝트 모듈화 완료

## 변경 사항 요약

기존의 단일 파일 `pico_micro_ros_example.c`를 다음과 같은 모듈화된 구조로 분할했습니다:

### 새로운 폴더 구조

```text
src/
├── main.c                          # 메인 진입점
├── board/
│   ├── board.h                     # 보드 초기화 및 GPIO 제어 인터페이스
│   └── board.c                     # 보드 초기화 및 GPIO 제어 구현
├── drivers/
│   ├── servo_ctrl.h                # 서보 모터 제어 인터페이스
│   └── servo_ctrl.c                # 서보 모터 제어 구현
└── uros/
    ├── uros_app.h                  # micro-ROS 애플리케이션 인터페이스
    └── uros_app.c                  # micro-ROS 애플리케이션 구현
```

## 각 모듈의 책임

### 1. **board 모듈** (보드 하드웨어 추상화)

- GPIO 핀 초기화 (WiFi 상태, 메시지 상태, PWM LED)
- USB 시리얼 초기화 및 연결 대기
- LED 상태 제어 함수 제공
- 에러 표시 (깜박임)

**함수:**

- `board_init()` - 모든 보드 초기화
- `board_set_wifi_status()` - WiFi 상태 LED 제어
- `board_set_msg_status()` - 메시지 상태 LED 제어
- `board_set_pwm_led()` - PWM LED 제어
- `board_set_onboard_led()` - 온보드 LED 제어
- `board_blink_error()` - 에러 표시

### 2. **drivers/servo_ctrl 모듈** (서보 모터 드라이버)

- 서보 모터 초기화 (PWM, bounds 설정)
- 각도 기반 서보 제어 인터페이스
- 저수준 servo 라이브러리 캡슐화

**함수:**

- `servo_ctrl_init()` - 서보 초기화 및 중앙 위치로 이동
- `servo_ctrl_move_to_angle()` - 각도로 서보 이동 (0-180°)
- `servo_ctrl_center()` - 중앙 위치(90°)로 이동

### 3. **uros 모듈** (micro-ROS 애플리케이션)

- WiFi 전송 계층 설정
- micro-ROS agent 연결
- ROS2 노드 및 구독자 생성
- 메시지 수신 콜백 처리
- LED 및 서보 제어 로직

**함수:**

- `uros_app_init()` - micro-ROS 초기화 및 agent 연결
- `uros_app_run()` - 메인 실행 루프
- `uros_app_cleanup()` - 리소스 정리

### 4. **main.c** (애플리케이션 진입점)

- 각 모듈의 초기화 순서 관리
- 에러 처리
- 메인 루프 실행

## CMakeLists.txt 변경사항

```cmake
# PICO_BOARD를 pico_sdk_import 이전으로 이동
set(PICO_BOARD pico2_w CACHE STRING "Board type")

# 모듈화된 소스 파일 추가
add_executable(pico_micro_ros_example
    src/main.c
    src/board/board.c
    src/drivers/servo_ctrl.c
    src/uros/uros_app.c
    pico_wifi_transport.c
    pico_servo.c
)

# 새로운 include 디렉토리 추가
target_include_directories(pico_micro_ros_example PUBLIC
    libmicroros/include
    ${CMAKE_CURRENT_LIST_DIR}
    ${CMAKE_CURRENT_LIST_DIR}/src
    ${CMAKE_CURRENT_LIST_DIR}/src/board
    ${CMAKE_CURRENT_LIST_DIR}/src/drivers
    ${CMAKE_CURRENT_LIST_DIR}/src/uros
    libfixmath/libfixmath
)
```

## 빌드 성공 확인

```bash
cd /home/aa/pico/micro_ros_pico_dev
rm -rf build && mkdir build && cd build
cmake ..
make -j4
```

**빌드 결과:**

- ✅ `pico_micro_ros_example.elf` (2.2MB)
- ✅ `pico_micro_ros_example.uf2` (788KB)
- ✅ 모든 모듈이 정상적으로 컴파일됨
- ✅ 분할 컴파일 지원

## 모듈화의 장점

1. **가독성**: 각 기능이 명확하게 분리되어 코드 이해가 쉬움
2. **유지보수성**: 특정 기능 수정 시 해당 모듈만 수정
3. **재사용성**: 다른 프로젝트에서 개별 모듈 재사용 가능
4. **테스트**: 각 모듈을 독립적으로 테스트 가능
5. **협업**: 여러 개발자가 동시에 다른 모듈 작업 가능
6. **빌드 효율**: 변경된 파일만 재컴파일하여 빌드 시간 단축

## 의존성 관계

```text
main.c
  ├─> board (board.h/c)
  ├─> servo_ctrl (servo_ctrl.h/c)
  │     └─> pico_servo (pico_servo.h/c)
  └─> uros_app (uros_app.h/c)
        ├─> board
        ├─> servo_ctrl
        └─> pico_wifi_transport (pico_wifi_transport.h/c)
```

## 다음 단계

이제 프로젝트를 다음과 같이 확장할 수 있습니다:

1. **새로운 드라이버 추가**: `src/drivers/`에 모터, 센서 등 추가
2. **퍼블리셔 추가**: `src/uros/`에 센서 데이터 퍼블리싱 기능 추가
3. **서비스 추가**: ROS2 서비스 클라이언트/서버 구현
4. **다중 보드 지원**: 조건부 컴파일로 다른 보드 지원
5. **설정 파일**: JSON/YAML 설정 파일 로드 기능

## 기존 코드와의 호환성

- 기능적으로 기존 `pico_micro_ros_example.c`와 동일하게 동작
- WiFi 연결, micro-ROS agent 연결, 서보 제어 모두 동일
- 빌드 결과물 이름 동일 (`pico_micro_ros_example.uf2`)
