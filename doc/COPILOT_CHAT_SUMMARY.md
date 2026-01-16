# VS Code Copilot Chat 요약 (2026-01-09 ~ 2026-01-16)

본 문서는 VS Code Copilot 채팅에서 반복적으로 다룬 문제 상황과 해결 방법을 정리한 기록입니다.

## 1) 집중적으로 질문한 주제

### 1.1 micro-ROS 런타임 분리 및 구조화

- `main.c`에서 uROS 로직을 분리해 `uros_main.c`로 이전하고, `uros_app.c` 구조를 참고하여 통합.
- FreeRTOS 환경에서 `ros_task`(core0)와 `periph_task`(core1)로 분리.
- 기존 동작 파라미터를 유지하면서 구조만 변경하는 작업이 반복적으로 요청됨.

### 1.2 WiFi/agent 연결과 executor 안정화

- ping/agent 연결 실패 및 구독 불가 문제 해결.
- `rmw_uros_set_custom_transport()`의 UDP 플래그, `rmw_uros_ping_agent()` 반복 확인 로직 등이 핵심 포인트.

### 1.3 서보 초기화 및 IRQ 충돌 문제

- `pico_servo.c`에서 `PWM_IRQ_WRAP` 등록 시 충돌/크래시 발생.
- 서보 2개 사용 시 중복 IRQ 등록 문제를 집중적으로 해결.

### 1.4 터치 센서/버저 통합

- `uros_app`의 전체 기능을 `uros_main`에 가져오되, 중복 초기화/업데이트를 피하는 방식 선호.
- 최신 런타임에서는 `touch_1/state`만 publish하도록 축소 (안정성 목적).

### 1.5 듀얼 서보 제어

- GP2 + GP4 두 서보를 별도 토픽으로 제어하도록 요청.
- `servo_angle`/`servo2_angle` 분리 구독을 추가.

### 1.6 LCD(I2C) 예제 및 GP8/GP9 핀 사용

- `Pico-I2C-LCD` 라이브러리 기반 예제 구성.
- `lcd_1602_i2c` 예제에서 GP8/GP9 사용을 위해 CMake `PICO_DEFAULT_I2C`/핀 define 설정.

---

## 2) 해결하려던 문제 상황

### A. uROS 분리 이후 기능 누락/중복

- 문제: `main.c`에서 옮긴 uROS 로직이 일부 누락되거나, 터치/버저 초기화가 중복됨.
- 해결: `app_state.h`로 전역 매니저 공유 후 `uros_main`에서 상태 publish만 담당.

### B. PWM IRQ 충돌 및 크래시

- 문제: `irq_set_exclusive_handler(PWM_IRQ_WRAP, ...)`가 중복 호출되며 크래시.
- 해결: `pico_servo.c`에서 IRQ 등록을 1회만 수행하도록 가드 추가.

### C. 서보 2개 제어 분리

- 문제: 하나의 토픽으로 두 서보를 동시에 움직이면 분리 제어 불가.
- 해결: `servo2_callback`과 `servo2_angle` 토픽 추가.

### D. 터치 센서 안정성 이슈

- 문제: `uros_app`의 3센서 전체 publish를 `uros_main`에 이식 시 에러 발생.
- 해결: `touch_1/state`만 publish하도록 축소.

### E. LCD 예제 빌드 오류 (I2C default 정의)

- 문제: `PICO_DEFAULT_I2C_INSTANCE` 직접 지정으로 빌드 실패.
- 해결: `PICO_DEFAULT_I2C=0`와 GP8/GP9 핀 define으로 수정.

---

## 3) 주요 해결 방법 요약

- **uROS 분리**: `uros_main` 중심 구조로 리팩토링, `uros_app`은 참조 구현으로 유지.
- **FreeRTOS 태스크 분리**: `ros_task`/`periph_task`로 역할 분리, core affinity 지정.
- **IRQ 가드**: PWM IRQ 등록을 1회로 제한해 중복 충돌 방지.
- **듀얼 서보 토픽 분리**: `servo_angle`, `servo2_angle` 각각 독립 제어.
- **터치 publish 축소**: 안정성을 위해 `touch_1/state`만 활성화.
- **LCD 핀/define 정정**: `PICO_DEFAULT_I2C=0`, `PICO_DEFAULT_I2C_SDA_PIN=8`, `PICO_DEFAULT_I2C_SCL_PIN=9`.

---

## 4) 주의해야 할 점

1. **IRQ 중복 등록 금지**

   - `PWM_IRQ_WRAP`은 전역 IRQ이므로 반드시 한 번만 등록.

2. **periph vs uROS 중복 초기화 주의**

   - 버저/터치 매니저는 `periph_task`에서 단일로 업데이트.
   - `uros_main`에서는 상태 publish만 수행하도록 유지.

3. **토픽 명/핸들 수 정합성**

   - executor 핸들 수는 추가한 subscription/timer 수와 일치해야 함.

4. **GPIO 핀 매핑 재검증**

   - 서보2(GP4), 터치(GP18~20), 버저(GP16), I2C(GP8/GP9) 등의 충돌 여부 확인.

5. **빌드 설정 동기화**

   - 문서/CMake/코드 구조 변경 시 README 및 doc/ 문서가 최신 상태인지 확인.

---

## 5) 추천 체크리스트

- [ ] `ros_task`/`periph_task`가 예상 core에 배치됐는지 확인
- [ ] `PWM_IRQ_WRAP` 등록이 한 번만 호출되는지 확인
- [ ] `servo_angle` / `servo2_angle` 토픽 분리 여부 확인
- [ ] 터치 publish가 `touch_1/state`만 활성화인지 확인
- [ ] I2C 기본 핀 define이 GP8/GP9로 설정됐는지 확인

---

## 부록: 관련 문서

- `doc/FREERTOS_INTEGRATION.md`
- `doc/TOUCH_SENSOR_README.md`
- `doc/BUZZER_README.md`
- `doc/PROJECT_STRUCTURE.md`
