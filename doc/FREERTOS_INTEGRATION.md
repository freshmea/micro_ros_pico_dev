# FreeRTOS Integration Guide

## 개요

micro_ros_pico_dev 프로젝트에 FreeRTOS를 성공적으로 통합했습니다. Micro-ROS-RP2350 레포지토리를 참고하여 듀얼 코어 지원, 태스크 기반 아키텍처, 그리고 에이전트 상태 관리를 구현했습니다.

## 주요 변경사항

### 1. FreeRTOS 설정 파일 추가

**파일**: `src/config/freertos/FreeRTOSConfig.h`

- RP2040/RP2350용 FreeRTOS 설정
- 듀얼 코어 SMP 지원 (`configNUMBER_OF_CORES = 2`)
- 128KB 힙 메모리 할당
- 스택 오버플로우 및 Malloc 실패 감지 활성화
- 코어 친화성(Core Affinity) 지원

### 2. main.c 리팩토링

**이전 구조** (Bare Metal):

```c
int main() {
    board_init();
    servo_ctrl_init();
    uros_app_init();
    uros_app_run();  // 무한 루프
}
```

**현재 구조** (FreeRTOS):

```c
int main() {
   stdio_init_all();
   xTaskCreate(ros_task, ...);    // micro-ROS 런타임 태스크
   xTaskCreate(periph_task, ...); // 터치/버저/서보 태스크
   vTaskStartScheduler();
}
```

#### 태스크 구조

1. **ros_task** (Core 0, Priority 높음)
   - `uros_main_init()`로 에이전트 연결 확인
   - micro-ROS executor 실행

2. **periph_task** (Core 1, Priority 낮음)
   - 터치 센서 업데이트
   - 버저 상태/버튼 처리
   - 서보 초기화 및 주변장치 관리

#### 에이전트 연결 처리

- `uros_main_init()`에서 ping 루프로 agent 연결 여부 확인
- 연결 실패 시 태스크 종료 처리 (재시도 로직은 필요 시 추가)

### 3. uros_app 수정

**추가된 함수**: `uros_app_spin_once()`

```c
void uros_app_spin_once(void) {
    RCSOFTCHECK(rclc_executor_spin_some(&executor, RCL_MS_TO_NS(EXECUTOR_SPIN_TIMEOUT_MS)));
}
```

- FreeRTOS 태스크에서 호출 가능한 논블로킹 함수
- 기존 `uros_app_run()`은 무한 루프 유지 (호환성)

### 4. CMakeLists.txt 업데이트

**추가된 내용**:

```cmake
# FreeRTOS Kernel import
set(FREERTOS_KERNEL_PATH "$ENV{PICO_SDK_PATH}/lib/FreeRTOS-Kernel" CACHE STRING "FreeRTOS Kernel Path")
include(FreeRTOS_Kernel_import.cmake)

# FreeRTOS config directory
set(FREERTOS_CONFIG_DIR "${CMAKE_CURRENT_LIST_DIR}/src/config/freertos" CACHE STRING "FreeRTOS Config Path")
include_directories("${FREERTOS_CONFIG_DIR}")

# Link FreeRTOS libraries
target_link_libraries(bindbot
    ...
    FreeRTOS-Kernel
    FreeRTOS-Kernel-Heap4
)
```

### 5. FreeRTOS Kernel Import

**파일**: `FreeRTOS_Kernel_import.cmake`

Pico SDK의 FreeRTOS Kernel을 자동으로 찾아 포함합니다.

## 멀티코어 활용

### 코어 할당

```c
// Core 0: micro-ROS 관리
vTaskCoreAffinitySet(ros_task_handle, (1 << 0));

// Core 1: 주변장치 관리
vTaskCoreAffinitySet(periph_task_handle, (1 << 1));
```

### 장점

1. **Core 0**: 네트워크 통신 및 micro-ROS 처리에 집중
2. **Core 1**: 서보 제어, 센서 읽기 등 실시간 작업 전담
3. **효율성**: 두 코어가 병렬로 작업 수행

## 에러 핸들링

### FreeRTOS Hooks

```c
// Malloc 실패 시
void vApplicationMallocFailedHook(void) {
    printf("[ERROR] Malloc failed! Resetting...\n");
    reset();
}

// 스택 오버플로우 시
void vApplicationStackOverflowHook(TaskHandle_t xTask, char *pcTaskName) {
    printf("[ERROR] Stack overflow in task: '%s'! Resetting...\n", pcTaskName);
    reset();
}
```

### Watchdog 타이머

```c
// 정리 작업이 1초 이상 걸리면 리셋
watchdog_enable(1000, true);
uros_app_cleanup();
```

micro-ROS 전송이 끊긴 상태에서 `_fini()` 호출 시 행이 발생할 수 있으므로 watchdog으로 보호합니다.

## 빌드 방법

```bash
cd micro_ros_pico_dev/build
cmake ..
make
```

## 실행 흐름

```text
1. stdio 초기화
2. uros_state_task 생성 (Core 0)
3. FreeRTOS 스케줄러 시작
   ↓
4. [uros_state_task] 에이전트 핑 대기
5. [uros_state_task] 에이전트 발견 시 micro-ROS 초기화
6. [uros_state_task] main_task 생성 (Core 1)
   ↓
7. [Core 0] micro-ROS executor 실행
8. [Core 1] 터치/버저/서보 처리
   ↓
9. 에이전트 연결 끊김 감지
10. 리소스 정리 및 시스템 리셋
11. 1번으로 복귀
```

## Micro-ROS-RP2350과의 차이점

### 유사점

- FreeRTOS 듀얼 코어 SMP 사용
- 에이전트 상태 관리 패턴
- Watchdog 기반 리셋 메커니즘
- RTOS allocators 사용

### 차이점

1. **전송 계층**:
   - RP2350: UART/USB 선택 가능
   - 본 프로젝트: WiFi 전송 (Pico 2W)

2. **애플리케이션**:
   - RP2350: 간단한 publisher/subscriber 예제
   - 본 프로젝트: 서보, 부저, 터치 센서 통합

3. **메모리**:
   - RP2350: 64KB 힙
   - 본 프로젝트: 128KB 힙 (더 복잡한 애플리케이션)

## 트러블슈팅

### 에이전트 연결 안 됨

- WiFi 설정 확인 (`project_config.h`)
- 에이전트가 실행 중인지 확인
- `AGENT_PING_TIMEOUT_MS` 증가

### 스택 오버플로우

- `TASK_STACK_SIZE` 증가 (현재 2048)
- `configCHECK_FOR_STACK_OVERFLOW = 2`로 감지 활성화

### Malloc 실패

- `configTOTAL_HEAP_SIZE` 증가 (현재 128KB)
- 불필요한 메모리 할당 제거

## 다음 단계

1. **성능 최적화**: 태스크 우선순위 튜닝
2. **로깅 개선**: FreeRTOS trace 기능 활용
3. **전력 관리**: Tickless Idle 모드 활성화
4. **추가 센서**: 새 센서를 별도 태스크로 추가

## 참고 자료

- [FreeRTOS Documentation](https://www.freertos.org/Documentation/RTOS_book.html)
- [Pico SDK FreeRTOS Examples](https://github.com/raspberrypi/pico-examples/tree/master/freertos)
- [Micro-ROS-RP2350 Repository](https://github.com/samyarsadat/Micro-ROS-RP2350)
- [micro-ROS Documentation](https://micro.ros.org/docs/)
