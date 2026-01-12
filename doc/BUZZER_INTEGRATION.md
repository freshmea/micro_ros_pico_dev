# Passive Buzzer Integration Summary

## 생성된 파일

### 1. 핵심 파일

- **`src/drivers/passive_buzzer_manager.h`**: 버저 매니저 헤더 파일
- **`src/drivers/passive_buzzer_manager.c`**: 버저 매니저 구현 파일
- **`src/uros/uros_app.c`**: micro-ROS 애플리케이션 (업데이트됨)

### 2. 예제 및 문서

- **`example/test_buzzer.py`**: Python 테스트 스크립트
- **`BUZZER_README.md`**: 사용 가이드

## 주요 변경사항

### uros_app.c 변경사항

1. **새로운 include 추가**:

   ```c
   #include "passive_buzzer_manager.h"
   #include <std_msgs/msg/int32_multi_array.h>
   ```

2. **새로운 전역 변수**:

   ```c
   static rcl_subscription_t buzzer_subscriber;
   static rcl_timer_t buzzer_timer;
   static std_msgs__msg__Int32MultiArray buzzer_msg;
   static PassiveBuzzerManager buzzer_manager;
   ```

3. **새로운 콜백 함수**:
   - `buzzer_subscription_callback()`: /buzzer 토픽 구독
   - `buzzer_timer_callback()`: 10ms 주기로 버저 상태 업데이트

4. **초기화 수정**:
   - 버저 매니저 초기화
   - 버저 구독자 추가
   - 버저 타이머 추가
   - 실행기(executor)를 3개 핸들로 확장

## 하드웨어 구성

```text
Raspberry Pi Pico:
  GP16 ---[Passive Buzzer]--- GND
  GP24 ---[Button]----------- GND

  내부 풀업 저항 사용 (GP24)
```

## 사용 방법

### 1. 빌드

```bash
cd /home/aa/pico/micro_ros_pico_dev/build
cmake ..
make
```

### 2. Pico에 플래시

```bash
# Pico를 BOOTSEL 모드로 연결
cp bindbot.uf2 /media/aa/RPI-RP2/
```

### 3. micro-ROS Agent 실행

```bash
ros2 run micro_ros_agent micro_ros_agent udp4 --port 8888
```

### 4. 테스트

#### 방법 1: Python 스크립트

```bash
cd /home/aa/pico/micro_ros_pico_dev/example
python3 test_buzzer.py
```

#### 방법 2: ROS2 CLI

```bash
# 1000Hz를 500ms 재생
ros2 topic pub --once /buzzer std_msgs/Int32MultiArray "{data: [1000, 500]}"

# 휴지표 (200ms)
ros2 topic pub --once /buzzer std_msgs/Int32MultiArray "{data: [0, 200]}"
```

#### 방법 3: GP24 버튼

- Pico의 GP24 버튼을 누르면 랜덤 멜로디가 재생됩니다.

## 기술적 세부사항

### PWM 설정

- 시스템 클록: 125MHz
- PWM Wrap: 4095
- Duty Cycle: 50%

### 타이머 주기

- 업데이트 주기: 10ms (100Hz)
- 버튼 디바운싱 포함

### 큐 시스템

- 최대 노트 수: 100개 (MAX_NOTES)
- 순환 버퍼(circular buffer) 사용

### 메시지 형식

- Topic: `/buzzer`
- Type: `std_msgs/Int32MultiArray`
- Data: `[frequency (Hz), duration (ms)]`
  - frequency = 0: 휴지표 (무음)
  - frequency > 0: 해당 주파수로 소리 출력

## 내장 멜로디

1. `buzzer_play_success()` - 성공 효과음
2. `buzzer_play_error()` - 에러 효과음
3. `buzzer_play_startup()` - 시작 멜로디
4. `buzzer_play_happy_birthday()` - 생일 축하 노래
5. `buzzer_play_twinkle_twinkle()` - 반짝반짝 작은별
6. `buzzer_play_mary_had_a_little_lamb()` - 메리는 어린 양을
7. `buzzer_play_fur_elise()` - 엘리제를 위하여 (베토벤)
8. `buzzer_play_ode_to_joy()` - 환희의 송가 (베토벤)
9. `buzzer_play_cannon_in_d()` - 캐논 (파헬벨)
10. `buzzer_play_amazing_grace()` - 어메이징 그레이스
11. `buzzer_play_greensleeves()` - 그린슬리브스
12. `buzzer_play_au_clair_de_la_lune()` - 달빛 아래에서
13. `buzzer_play_brahms_lullaby()` - 브람스 자장가
14. `buzzer_play_random()` - 랜덤 멜로디

## 문제 해결

### 컴파일 에러

- `std_msgs/msg/int32_multi_array.h`를 찾을 수 없는 경우:
  - micro-ROS 라이브러리가 제대로 빌드되었는지 확인
  - `libmicroros/include` 경로 확인

### 실행 시 문제

- 버저에서 소리가 나지 않을 때:
  1. GP16 연결 확인
  2. Passive buzzer 사용 확인 (Active buzzer는 작동 안 함)
  3. 전원 연결 확인

- 버튼이 작동하지 않을 때:
  1. GP24 연결 확인
  2. GND 연결 확인
  3. 풀업 저항 설정 확인

## 향후 개선 사항

1. **볼륨 조절**: PWM duty cycle 조정으로 볼륨 제어
2. **더 많은 멜로디**: 추가 곡 라이브러리
3. **RTTTL 지원**: Ring Tone Text Transfer Language 파서
4. **동적 멜로디**: ROS 파라미터로 멜로디 정의
5. **상태 피드백**: Publisher로 재생 상태 전송

## 라이선스

MIT License - 자유롭게 사용, 수정, 배포 가능
모든 멜로디는 퍼블릭 도메인
