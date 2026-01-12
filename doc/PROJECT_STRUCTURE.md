# Micro-ROS Pico Project - Modular Structure

## 프로젝트 구조

```text
micro_ros_pico_dev/
├── src/
│   ├── main.c                    # 메인 애플리케이션 진입점
│   ├── board/
│   │   ├── board.h              # 보드 초기화 및 GPIO 제어 헤더
│   │   └── board.c              # 보드 초기화 및 GPIO 제어 구현
│   ├── config/
│   │   ├── project_config.h     # 프로젝트 설정 (핀, WiFi, ROS2 등)
│   │   ├── rcl_check_macros.h   # RCL 에러 체크 매크로
│   │   └── lwipopts.h           # lwIP 네트워크 스택 설정
│   ├── drivers/
│   │   ├── servo_ctrl.h         # 서보 모터 제어 헤더
│   │   ├── servo_ctrl.c         # 서보 모터 제어 구현
│   │   ├── pico_servo.h         # 서보 저수준 드라이버 헤더
│   │   ├── pico_servo.c         # 서보 저수준 드라이버 구현
│   │   ├── passive_buzzer_manager.h  # 패시브 버저 매니저 헤더
│   │   └── passive_buzzer_manager.c  # 패시브 버저 매니저 구현
│   ├── transport/
│   │   ├── pico_wifi_transport.h     # WiFi 전송 계층 헤더
│   │   ├── pico_wifi_transport.c     # WiFi 전송 계층 구현
│   │   ├── pico_uart_transports.h    # UART 전송 계층 헤더
│   │   └── pico_uart_transport.c     # UART 전송 계층 구현
│   └── uros/
│       ├── uros_app.h           # micro-ROS 애플리케이션 헤더
│       └── uros_app.c           # micro-ROS 애플리케이션 구현
├── example/
│   ├── test_servo.py            # 서보 테스트 스크립트
│   ├── test_buzzer.py           # 버저 테스트 스크립트
│   ├── launcher.py              # 통합 테스트 런처
│   └── README.md                # 예제 사용 가이드
├── doc/
│   ├── PROJECT_STRUCTURE.md     # 프로젝트 구조 문서
│   ├── BUZZER_README.md         # 버저 사용 가이드
│   └── BUZZER_INTEGRATION.md    # 버저 통합 정보
├── CMakeLists.txt               # 빌드 설정
└── build/                       # 빌드 출력
```

## 모듈 설명

### 1. `src/main.c`

- 프로그램의 메인 진입점
- 각 모듈의 초기화 및 실행 순서 관리
- 보드 초기화 → 서보 초기화 → micro-ROS 초기화 → 실행 루프

### 2. `src/board/` - 보드 추상화 계층

- **board.h / board.c**: Pico 2W 보드 초기화 및 GPIO 제어
- GPIO 핀 정의 및 관리
- LED 상태 제어 (WiFi 상태, 메시지 상태, PWM LED, 온보드 LED)
- USB 시리얼 초기화

### 3. `src/drivers/` - 하드웨어 드라이버

- **servo_ctrl.h / servo_ctrl.c**: 서보 모터 제어 드라이버
- 서보 초기화 (PWM 설정, bounds 설정)
- 각도 제어 인터페이스 (0-180도)
- 중앙 위치로 이동 기능
- **pico_servo.h / pico_servo.c**: 서보 저수준 PWM 드라이버
- PWM 하드웨어 제어
- 펄스 폭 변조 관리
- **passive_buzzer_manager.h / passive_buzzer_manager.c**: 패시브 버저 매니저
- PWM 기반 버저 제어
- 노트 큐 관리 (최대 100개)
- 14가지 내장 멜로디
- 버튼 입력 처리 (GP24)

### 4. `src/transport/` - 통신 전송 계층

- **pico_wifi_transport.h / pico_wifi_transport.c**: WiFi UDP 전송 계층
- micro-ROS agent와 WiFi 통신
- UDP 패킷 송수신
- **pico_uart_transports.h / pico_uart_transport.c**: UART 전송 계층
- 시리얼 통신 지원 (대체 전송 방법)

### 5. `src/config/` - 설정 및 구성

- **project_config.h**: 프로젝트 전역 설정
- GPIO 핀 정의
- WiFi 설정 (SSID, 비밀번호)
- ROS2 설정 (도메인 ID, 노드 이름 등)
- **rcl_check_macros.h**: RCL 에러 체크 매크로
- **lwipopts.h**: lwIP 네트워크 스택 설정

### 6. `src/uros/` - micro-ROS 애플리케이션

- **uros_app.h / uros_app.c**: micro-ROS 애플리케이션 로직
- WiFi 전송 계층 설정
- micro-ROS agent 연결
- ROS2 노드 및 구독자 생성
- 메시지 수신 콜백 처리

## 빌드 방법

```bash
cd /home/aa/pico/micro_ros_pico_dev
rm -rf build
mkdir build
cd build
cmake ..
make -j4
```

빌드 결과물:

- `pico_micro_ros_example.uf2` - Pico 2W에 업로드할 펌웨어
- `pico_micro_ros_example.elf` - 디버깅용 ELF 파일

## 기능

1. **WiFi 연결**: Pico 2W가 WiFi에 연결
2. **micro-ROS Agent 연결**: ROS2 네트워크와 통신
3. **서보 제어**: ROS2 토픽으로 받은 메시지로 서보 각도 제어
4. **LED 상태 표시**:
   - GP0: WiFi/Agent 연결 상태
   - GP1: 메시지 수신 표시
   - GP3: 짝수/홀수 표시
   - 온보드 LED: 짝수/홀수 표시

## 개발 이점

### 모듈화의 장점

1. **유지보수성**: 각 기능이 독립적인 파일로 분리
2. **재사용성**: 다른 프로젝트에서 모듈 재사용 가능
3. **테스트 용이성**: 각 모듈을 독립적으로 테스트 가능
4. **협업 효율성**: 여러 개발자가 동시에 작업 가능
5. **확장성**: 새로운 기능 추가 시 기존 코드 영향 최소화

### 분할 컴파일 이점

- 변경된 파일만 재컴파일하여 빌드 시간 단축
- 의존성 관리가 명확함
- 링크 에러 조기 발견 가능

## 향후 확장 가능성

- `src/drivers/`에 새로운 하드웨어 드라이버 추가 (모터, 센서 등)
- `src/uros/`에 퍼블리셔, 서비스 등 추가
- `src/board/`에 다른 보드 지원 추가 (조건부 컴파일)
