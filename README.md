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

- servo 문제 해결
  - 파형 검사로 frequency 확인 후 50Hz 로 설정
  -