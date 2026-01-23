/**
 * @file project_config.h
 * @brief Bindbot 프로젝트 전역 설정
 *
 * 이 파일에서 WiFi, micro-ROS, GPIO, 서보 설정 등 모든 환경 변수를 관리합니다.
 */

#ifndef PROJECT_CONFIG_H
#define PROJECT_CONFIG_H

// ============================================================================
// WiFi 설정
// ============================================================================
#ifndef WIFI_SSID
// #define WIFI_SSID "bindsoft_805_2.4g"          // WiFi SSID
#define WIFI_SSID "Pengsoo_2G"          // WiFi SSID
#endif
#ifndef WIFI_PASSWORD
// #define WIFI_PASSWORD "bindsoft805"            // WiFi 비밀번호
#define WIFI_PASSWORD "remainer1!"            // WiFi 비밀번호
#endif
#ifndef WIFI_AUTH_MODE
#define WIFI_AUTH_MODE CYW43_AUTH_WPA2_AES_PSK // WiFi 인증 모드
#endif
#ifndef WIFI_CONNECT_TIMEOUT_MS
#define WIFI_CONNECT_TIMEOUT_MS 30000          // WiFi 연결 타임아웃 (ms)
#endif

// ============================================================================
// micro-ROS 에이전트 설정
// ============================================================================
// #define AGENT_IP "192.168.219.59"  // micro-ROS agent IP 주소
#define AGENT_IP "192.168.219.113" // micro-ROS agent IP 주소
#define AGENT_PORT 8888            // micro-ROS agent 포트
#define AGENT_PING_TIMEOUT_MS 1000 // Agent ping 타임아웃 (ms)
#define AGENT_PING_ATTEMPTS 120    // Agent ping 시도 횟수

// ============================================================================
// ROS2 토픽/노드 설정
// ============================================================================
#define ROS_NODE_NAME "bindbot"             // ROS2 노드 이름
#define ROS_NAMESPACE ""                      // ROS2 네임스페이스
#define ROS_DOMAIN_ID 0                       // ROS2 도메인 ID

// ============================================================================
// GPIO 핀 할당
// ============================================================================
#define WIFI_STATUS_PIN 0 // GP0: WiFi 연결 상태 LED
#define MSG_STATUS_PIN 1  // GP1: 메시지 수신 표시 LED
#define SERVO_PIN 2       // GP2: 서보 제어 PWM 출력
#define SERVO_PIN2 4      // GP4: 두번째 서보 제어 PWM 출력
#define PWM_LED_PIN 3     // GP3: 짝수/홀수 표시 LED
#define PULLUP_BUTTON_PIN 17 // GP17: 풀업 버튼 입력
#define BUZZER_PIN 16    // GP16: 수동 버저 출력
#define WS2812_PIN 8     // GP8: WS2812 데이터 핀
#define WS2812_LED_COUNT 4
#define TOUCH_SENSOR_COUNT 3
#define TOUCH_PIN_1 18
#define TOUCH_PIN_2 19
#define TOUCH_PIN_3 20

// ============================================================================
// 디스플레이 설정
// ============================================================================
#define DISPLAY_WIDTH 128
#define DISPLAY_HEIGHT 32
#define DISPLAY_I2C_PORT i2c1
#define DISPLAY_SDA_PIN 6
#define DISPLAY_SCL_PIN 7
#define DISPLAY_I2C_ADDR 0x3C
#define DISPLAY_REFRESH_MS 50
#define DISPLAY_SCROLL_STEP 1
#define DISPLAY_MESSAGE_MAX 128
#define DISPLAY_SSID_MAX 32
#define DISPLAY_IP_MAX 15
#define DISPLAY_LINE1_Y 15
#define DISPLAY_LINE2_Y 31

// ============================================================================
// 서보 모터 설정
// ============================================================================
#define SERVO_PWM_FREQ_HZ 50 // 서보 PWM 주파수 (Hz)
#define SERVO_PWM_WRAP 20000 // PWM wrap 값 (20ms 주기)
#define SERVO_MIN_US 500    // 최소 펄스 폭 (us) - 0도
#define SERVO_MAX_US 2400    // 최대 펄스 폭 (us) - 180도
#define SERVO_INIT_ANGLE 90  // 초기 서보 각도

// ============================================================================
// LED 상태 표시 설정
// ============================================================================
#define MSG_STATUS_PULSE_MS 50 // 메시지 수신 시 LED 켜짐 시간 (ms)
#define ERROR_BLINK_MS 200     // 에러 발생 시 깜박임 주기 (ms)
#define WS2812_UPDATE_MS 120   // WS2812 패턴 업데이트 주기 (ms)

// ============================================================================
// 디버그 설정
// ============================================================================
#define DEBUG_PRINT_ENABLED 1 // 디버그 출력 활성화 (0: 비활성화, 1: 활성화)

// ============================================================================
// FreeRTOS 사용 여부 (1: FreeRTOS, 0: bare metal)
// (타깃별로 CMake에서 정의할 수 있음)
// ============================================================================
#ifndef PROJECT_USE_FREERTOS
#define PROJECT_USE_FREERTOS 1
#endif

#if DEBUG_PRINT_ENABLED
#include <stdio.h>
#define DEBUG_PRINTF(...) printf(__VA_ARGS__)
#else
#define DEBUG_PRINTF(...) \
    do                    \
    {                     \
    } while (0)
#endif

// ============================================================================
// 시스템 설정
// ============================================================================
#define EXECUTOR_SPIN_TIMEOUT_MS 100 // Executor spin 타임아웃 (ms)

#endif // PROJECT_CONFIG_H
