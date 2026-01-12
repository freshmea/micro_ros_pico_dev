# Raspberrypi pico with micro ros

---

## 설치 환경

- OS : windows 11 + wsl2 (ubuntu 22.04)
- IDE : VS code
- 보드 : Raspberrypi pico 2w
- micro-ros : foxy
- 툴체인 : gcc-arm-none-eabi-10-2020-q4-major
- pico sdk : pico-sdk-1.6.0
- pico-examples : pico-examples-1.6.0
- pico sdk 와 pico-examples 는 pico 1.6.0 버전으로 설치

## build 환경 설정

- wsl2 에서 아래 명령어로 툴체인 설치

```bash
sudo apt update
sudo apt install gcc-arm-none-eabi
```

- pico sdk 와 pico-examples 를 wsl2 에서 접근할 수 있는 위치에 복사
- pico sdk 와 pico-examples 의 경로를 .bashrc 에 추가
- .pico-sdk 환경변수 설정

```bash
mkdir -p ~/pico-sdk
cd ~/pico-sdk/lib
git clone https://github.com/FreeRTOS/FreeRTOS-Kernel.git

export PICO_SDK_PATH=/mnt/c/Users/username/path/to/pico-sdk
```

- .pico-examples 환경변수 설정

```bash
export PICO_EXAMPLES_PATH=/mnt/c/Users/username/path/to/pico-examples
```

- build 폴더 생성 및 cmake 설정

```bash
cd $PICO_EXAMPLES_PATH
mkdir build
cd build
cmake -DPICO_BOARD=pico2_w ..
make
```

### 실행

- `micro-ros-agent udp4 --port 8888 -v 4` 로 agent 실행
- pico 보드에 전원 연결 후 `minicom -b 115200 -D /dev/ttyACM0` 로 시리얼 모니터링

## 2026_01_08

---

- 라즈베리파이 피코에 micro-ros 설정

- 통신 체크

- wsl2 - pico 2w 보드에 uart 통신은 잘 됨.
- pico 2w 보드에 micro-ros 통신 테스트 완료
- pico2w - wifi ping 테스트 및 iperf 테스트 완료
- pico2w -wifi — micro-ros —- wsl2 통신은 되지 않음.
  - wifi 와 udp 로 접속은 되는데 wsl2 와 micro-ros agent 로 연결이 계속 실패
  - nat 환경에서 mirror 환경으로 해도 마찬 가지로 안됨. 방화벽문제일까?
  - 방화벽 꺼도 안됨

---

## 2026_01_09

---

- wifi 문제 해결함

```c
    rmw_uros_set_custom_transport(
        false,
        NULL,
        pico_wifi_transport_open,
        pico_wifi_transport_close,
        pico_wifi_transport_write,
        pico_wifi_transport_read);
```

- 첫 인자를 true 에서 false 로 수정 했더니 micro-ros agent 에서 udp 로 데이터를 전송할 수 있었음.
- 원래는 8888 udp 로 신호가 오고 다시 반송하지 못하는 상황이어서 연결이 되지 않았음.
- 다음 단계로 servo 를 세팅
- 아 프로젝트를 진행하는 repo 를 github 에 설정하고 커밋을 진행

## 2026_01_10

### 주요 작업 내용

#### 1. 프로젝트 구조 모듈화

- 단일 파일(234줄 pico_micro_ros_example.c)을 13개 파일, 5개 디렉토리로 분할
- `src/` 폴더 구조 생성: `board/`, `drivers/`, `transport/`, `uros/`, `config/`
- 모든 `pico_*.{c,h}` 파일을 `src/` 하위로 재구성
- `lwipopts.h`, `rcl_check_macros.h`를 `src/config/`로 이동

#### 2. 프로젝트 이름 변경

- `pico_micro_ros_example` → `bindbot`으로 프로젝트명 변경
- CMakeLists.txt 전체 타겟명 업데이트
- 빌드 출력: `bindbot.uf2` 생성 확인

#### 3. 환경 설정 중앙화

- `src/config/project_config.h` 생성
- WiFi 자격 증명(SSID, 비밀번호), micro-ROS 에이전트 설정(IP, 포트) 통합
- GPIO 핀 할당, 서보 파라미터, 타이밍 상수 모두 config에서 관리
- 모든 소스 파일에서 하드코딩 제거, config 매크로 참조로 변경

#### 4. ROS2 도메인 ID 설정 추가

- `ROS_DOMAIN_ID` 매크로 추가 및 초기화 로직에 적용
- `rcl_init_options_set_domain_id()` 함수로 도메인 설정
- ESP32 예제 코드 참고하여 구현

#### 5. 로깅 코드 제거

- 모든 `printf()` 디버그 출력 제거
- `uros_app.c`, `board.c`, `pico_wifi_transport.c`에서 로그 삭제
- 펌웨어 사이즈 최적화 및 실행 속도 향상

#### 6. VSCode 설정 최적화

- `.vscode/c_cpp_properties.json` 재작성
  - ROS2/TurtleBot3 불필요 경로 제거
  - Pico SDK, micro-ROS, libfixmath 경로 추가
  - ARM Cortex-M33 컴파일러 설정 (`gcc-arm`)
  - `forcedInclude`로 매크로 헤더 자동 인식
  - `build/generated/pico_base` 경로 추가로 `version.h` 인식 문제 해결
- `.vscode/settings.json` 재작성
  - Python/ROS2 경로 전체 제거
  - CMake 소스/빌드 디렉토리 설정
  - C 파일 포맷팅 및 파일 연결 설정

#### 7. AI 코딩 에이전트 지침 업데이트

- `.github/copilot-instructions.md`에 Markdown 파일 생성 금지 지침 추가
- IntelliSense 경고 방지를 위한 설정 문서화

#### 8. 빌드 검증

- 모든 변경 후 경고 없이 빌드 성공
- `bindbot.uf2` (789KB) 펌웨어 정상 생성 확인

### 기술 스택

- **플랫폼**: Raspberry Pi Pico 2W (RP2350 ARM Cortex-M33)
- **통신**: WiFi (WPA2-PSK) → UDP 8888 → micro-ROS agent
- **프레임워크**: micro-ROS (ROS2 Foxy), Pico SDK 1.6.0
- **빌드 시스템**: CMake + gcc-arm-none-eabi
- **라이브러리**: libmicroros (정적), libfixmath (고정소수점 연산)
