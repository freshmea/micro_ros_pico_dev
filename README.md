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

## micro-ros-agent 설치

- wsl2 에서 아래 명령어로 설치

```bash
sudo apt update
mkdir -p ~/microros_agent_ws/src
cd ~/microros_agent_ws/src
git clone -b humble https://github.com/micro-ROS/micro-ros-agent.git
cd ..
source /opt/ros/humble/setup.bash
rosdep update
rosdep install --from-paths src --ignore-src -y
colcon build
source install/local_setup.bash
echo 'source ~/microros_agent_ws/install/local_setup.bash' >> ~/.bashrc
```

## build 환경 설정

- wsl2 에서 아래 명령어로 툴체인 설치
- pico sdk 와 pico-examples 를 wsl2 에서 접근할 수 있는 위치에 복사
- pico sdk 와 pico-examples 의 경로를 .bashrc 에 추가
- .pico-sdk 환경변수 설정
- picotool 설치 ( pico 보드에 펌웨어 업로드용 )

```bash
sudo apt update
sudo apt install gcc-arm-none-eabi
cd ~/pico
git clone --recurse-submodules https://github.com/raspberrypi/pico-sdk.git
git clone https://github.com/raspberrypi/picotool.git
cd picotool
mkdir build
cd build
cmake --install .
make -j4
```

```bash
cd ~/pico/micro_ros_pico_dev/external
cp -a ~/pico/pico-sdk/lib/FreeRTOS-Kernel .

export PICO_SDK_PATH=/mnt/c/Users/username/path/to/pico-sdk
```

### pico-examples 설치 - optional

```bash
git clone --recurse-submodules https://github.com/raspberrypi/pico-examples.git
export PICO_EXAMPLES_PATH=~/pico/pico-examples
```

- build 폴더 생성 및 cmake 설정

```bash
cd $PICO_EXAMPLES_PATH
mkdir build
cd build
cmake -DPICO_BOARD=pico2_w -G Ninja ..
ninja
```

## 실행

- windows11 에서 `usbipd attach --wsl --busid 2-2 --auto-attach` 명령어로 pico 보드 연결
- picotool 로 pico 보드에 펌웨어 업로드

```bash
cd ~/pico/micro_ros_pico_dev/build
sudo picotool load bindbot.uf2 -f
```

- 공유기 비번 70C05#7P97
- `ros2 run micro_ros_agent micro_ros_agent udp4 --port 8888 -v4` 로 agent 실행(udp 통신)
- `ros2 run micro_ros_agent micro_ros_agent serial --dev /dev/ttyACM0 -v4` 로 agent 실행(시리얼 통신)
- pico 보드에 전원 연결 후 VsCode 의 직렬 모니터 로 로그 확인

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
  - Pico SDK, micro-ROS, external/libfixmath 경로 추가
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
- **라이브러리**: libmicroros (정적), external/libfixmath (고정소수점 연산), external/u8g2

## 2026_01_12

---

- FreeRTOS 적용 빌드 성공
- RTOS 환경에서 WiFi 연결 이슈 확인
- RTOS 테스트 코드 작성

## 2026_01_13

---

- RTOS/micro-ROS 각각 연결 성공
- 서보 모터 드라이버 개선
- RTOS 로직 보완 필요 사항 확인
- esp32 예제 코드 참고하여 RTOS/micro-ROS 통합 구조 분석
  - esp32 에서는 wifi 라이브러리가 표준 규격(POSIX) 으로 제공되지만 pico 2w 에서는 아님
  - custom_wifi_transport.c 를 직접 만들 필요가 있음 -> 잘 만들지 않으면 오류 발생이 큼

## 2026_01_14

---

- WiFi 업데이트 및 구독 문제 해결
- agent 실행 후 구독 안됨 문제 해결
  - 원인은 아직도 불명확
  - 단순하게 코드를 재구성해서 모듈을 하나씩 추가 하면서 문제 해결
- main 기반으로 모듈을 하나씩 통합하며 안정성 검증

## 2026_01_15

---

- `main.c` 정상 동작 확인
- 터치 센서 통합 및 core0/1 초기화 안정화
- 서보 2개 제어 성공 (`SERVO_PIN`, `SERVO_PIN2`)
- `uros_main` 분리 및 FreeRTOS 태스크 구조 정리
- rtos 에서 wifi 와 pwm 제어가 동시에 잘 되지 않는 점 문제 해결
  - irq 중복 초기화되어 hardware crash 발생 문제 수정

---

## 2026_01_16

---

- 문서 업데이트
- 주변 정리 및 부품 정리
- 추가 부품 구입
  - 핀헤더 소켓 2.54mm 수 일자형 1X40P 5개
  - 아두이노 L9110s 모터 드라이버 2채널
  - 아두이노 TTP223 터치 센서 모듈
  - MPU6050 6축 자이로 가속도 센서 모듈
  - 아두이노 OLED 0.91인치 SSD1306 I2C 128x32 WHITE
  - TP4056 리튬 배터리 1A 충전 보호회로 USB C-Type
- 디스플레이 추가 예정
- 충전 모듈 및 배터리 추가 예정
- 자이로, DC 모터 드라이버 추가 예정
- 케이스 디자인 및 3D 프린팅 예정
- 디버깅 툴을 사용하기 위해서 시뮬레이터 세팅 예정
  - [wokwi doc](https://docs.wokwi.com/vscode/getting-started)
- 하드웨어 디버깅을 위한 JTAG 세팅 예정
- 교육 컨텐츠로의 연결 예정
  - IoT 교육용 예제(rasberry pi pico 2w) 소스 코드 정리 및 교안 작성
  - ROS2 교육용 예제(micro-ros) 소스 코드 정리 및 교안 작성
  - POSIX 용 라이브러리를 구현해서 read write close open 등 표준 입출력 구현
  - 실질적인 프로젝트에서의 시제품 제작

---

## 2026_1_19

---

- 전원 보드 연결 및 테스트
- 삼성 18650 리튬 이온 배터리 3.7V 1200mAh(6개 묶음 분해 후 1개 사용)
- TP4056 충전 모듈로 리튬 배터리 충전 테스트
  - TP4056 에 전압을 맞추고 테스트 했을 때 wifi 안 켜짐
  - 스탭업 컨버터로 3.7V -> 5V 변환 후 테스트 했을 때 wifi 정상 동작
  - lipo 배터리 없이 USB 전원 -> TP4056 충전 모듈 -> 스탭업 컨버터 -> pico 2w 보드 전원 연결 시 갑자기 20V 이상 전압이 pico 2w 보드에 공급되는 현상 발생(pico 보드 손상, servo 2개 모터 손상)
  - 배터리가 완충 되지 않으면 서보가 연결 되지 않음
  - 전원을 병렬 구성해서 servo 와 pico 2w 보드에 각각 전원 공급 필요
- 배터리 전원으로 pico 2w 보드 구동 테스트
- 전원 보드와 pico 2w 보드 연결 후 micro-ros 정상 동
- IP5306 기반 파워뱅크 모듈 테스트
  - 전압 5V 로 맞춤 배터리 이슈가 있는건지 배터리 만으로는 전압이 올라오지 않음
  - USB 전원 연결 시에는 전압이 올라오지만 전류가 충분하지 않아 wifi 가 정상 동작하지 않음
- ssd1306 보드 세팅
  - 데모 코드 동작 OK
  - main.c 에 이식 OK
  - 한글 폰트와 특수 문자가 안 나오는 문제가 있음.
    - [u8g2](https://github.com/olikraus/u8g2) 이것을 활용해서 [U8G2_Korean_Font](https://github.com/xyz37/U8G2_Korean_Font) 이 사이트 처럼 한글을 나오게 하려고 했으나 실패

---

## 2026_01_20

---

- ssd1306 한글 폰트 문제 해결
  - [u8g2pico](https://github.com/georgines/u8g2pico) 이 레포를 가지고 기본적인 u8g2 테스트
  - u8g2만 적용해도 무언가 문제가 발생하는 것을 확인
  - 기본 로직을 점검하고 수정
  - USB stdio 로그로 단계별 초기화 확인
  - I2C 스캔 추가로 실제 주소 확인 후 사용
  - SSD1306/SH1106 드라이버 선택 가능하게 구성
  - I2C 속도 100kHz로 낮춰 안정화
  - 한글 폰트 적용 확인
  - 특수 문자 출력 문제 해결
  - 화면 갱신이 느려서 스크롤 기능에 오른쪽 픽셀만 전송하는 코드를 작성하려했음
    - scroll 기능의 부분만은 제공하지 못함
    - 특정 픽셀을 갱신 하는 기능은 있지만 속도를 스크롤과 동기화하지 못함
    - 스크롤 기능 활성화 시 16픽셀이 지나면 오른쪽의 16픽셀만 새로운 데이터로 갱신하려고 했지만 16픽셀이 지나는 시점을 알 수 없음
    - 포기
- SSD1306_DELAY 매크로로 딜레이 조절 가능하게 수정
- ws2812 (네오픽셀 테스트) 완료
- example 폴더 구조화 정리 (cmake 따로 정리 subdirectory 로 분리)

---

## 2026_01_21

---

- SSD1306 디스플레이를 u8g2 기반으로 전환하고 한글 출력 지원 추가
- 화면 1/2 구성 및 텍스트 폭에 따른 스크롤 처리 구현
- micro-ROS String 수신 토픽 `display_message`로 메시지 표시
- 터치 센서 3번으로 화면 전환 처리 추가
- hello/pico 표시 로직 제거 및 빌드 확인
- WS2812 패턴 로직을 드라이버로 이동하고 periph_task 단순화
- 터치 센서 비프 카운트/릴리즈 처리 보완 및 0.5초 간격 비프음/주파수 루프(8회) 적용
- WS2812 패턴 8개 확장 및 버튼 릴리즈로 패턴 선택(솔리드 제외)
- 보드 제어 헬퍼 제거 후 직접 GPIO 제어로 정리

---

## 2026_01_23

---

- uros 연결 상태를 디스플레이에 표시 (wifi 옆에 uros O/X)
- uros 재연결 로직 개선 (5초 재시도, ping 체크)
- WiFi 연결 비블로킹 전환 및 vTaskDelay 양보
- cyw43 초기화 중복 방지 (pico_wifi_connect 가드 추가)
- uros cleanup 디버깅 로그 추가 및 정리 안정화
- 정적 문자열 버퍼 fini 호출 제거로 크래시 방지
  - shared 구조에서 exclusive 로 따로 irq 설정 변경(wifi-> shared, pwm-> exclusive)

---

## 2026_01_24

---

- subscription 을 4개 이상 사용할때 pico 에서 토픽 매칭이 불안정한 문제가 있음
- micro-ROS 연결 문제 디버깅 및 원인 정리
  - agent 재시작 없이 재연결되도록 Pico 측 자동 재접속 로직 추가(수신 타임아웃 기반)
  - 토픽 4개 이상에서 매칭 불안정 → QoS depth=10 명시 적용
- ws2812 구독 시 수신 버퍼 size 설정 문제 수정(고정 버퍼로 deserialize 가능)
- micro-ROS static lib 재생성 환경 구축(문제 상황 해결과는 상관 없지만 구독 노드를 확장 하는 방법을 위해 필요)
  - Docker 기반 library_generation 환경 구성(humble)
  - pico-sdk 경로 이슈 수정(toolchain.cmake 경로 수정)
  - docker run 시 PICO_SDK_PATH=/pico-sdk 필요
- micro-ros-agent 문제 정리
  - snap 설치본이 아닌 **ROS2 humble 환경에서 빌드한 agent** 사용 시 문제 해결됨
- touch 센서 토픽 확장 및 테스트 개선
  - touch_1/2/3 state + beep_count 퍼블리셔 추가
  - beep_count 0.5초 간격 증가 및 릴리즈 시 0으로 리셋
  - beep_count 증가 이벤트는 RTOS 큐로 전달해 버저 재생
  - test_touch.py 화면 갱신 0.5초 주기 제한, 로그 출력 제거
- display_bitmap 구독 복구 (픽셀 단위 수신)
