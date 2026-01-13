cmake_minimum_required(VERSION 3.12)

# Set board for Pico 2W (must be before pico_sdk_import)
set(PICO_BOARD pico2_w CACHE STRING "Board type")

include($ENV{PICO_SDK_PATH}/external/pico_sdk_import.cmake)

project(bindbot C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

# FreeRTOS config directory (must be set before importing FreeRTOS kernel)
set(FREERTOS_CONFIG_DIR "${CMAKE_CURRENT_LIST_DIR}/src/config/freertos" CACHE STRING "FreeRTOS Config Path")
include_directories("${FREERTOS_CONFIG_DIR}")

# Include FreeRTOS Kernel AFTER pico_sdk_init() (use official pico-sdk path)
include(/home/aa/pico/pico-sdk/lib/FreeRTOS-Kernel/portable/ThirdParty/Community-Supported-Ports/GCC/RP2350_ARM_NTZ/FreeRTOS_Kernel_import.cmake)

# Add libfixmath
add_library(fixmath STATIC
    libfixmath/libfixmath/fix16.c
    libfixmath/libfixmath/fix16_sqrt.c
    libfixmath/libfixmath/uint32.c
)
target_include_directories(fixmath PUBLIC
    libfixmath/libfixmath
)

link_directories(libmicroros)

# New modular executable
add_executable(bindbot
    src/main.c
    src/board/board.c
    src/board/wifi_init.c
    src/drivers/servo_ctrl.c
    src/drivers/pico_servo.c
    src/drivers/passive_buzzer_manager.c
    src/drivers/touch_sensor.c
    src/uros/uros_app.c
    src/transport/pico_wifi_transport.c
)
target_link_libraries(bindbot
    pico_stdlib
    pico_cyw43_arch_lwip_poll  # 수동 폴링 모드 (FreeRTOS와 가장 호환성 좋음)
    hardware_pwm
    hardware_clocks
    hardware_irq
    fixmath
    microros
    FreeRTOS-Kernel
    FreeRTOS-Kernel-Heap4
)

target_include_directories(bindbot PUBLIC
    libmicroros/include
    ${CMAKE_CURRENT_LIST_DIR}
    ${CMAKE_CURRENT_LIST_DIR}/src
    ${CMAKE_CURRENT_LIST_DIR}/src/board
    ${CMAKE_CURRENT_LIST_DIR}/src/drivers
    ${CMAKE_CURRENT_LIST_DIR}/src/transport
    ${CMAKE_CURRENT_LIST_DIR}/src/uros
    ${CMAKE_CURRENT_LIST_DIR}/src/config
    ${CMAKE_CURRENT_LIST_DIR}/src/config/freertos
    libfixmath/libfixmath
)

SET(CMAKE_C_FLAGS  "${CMAKE_C_FLAGS} -ffunction-sections -fdata-sections")
SET(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -ffunction-sections -fdata-sections")

# Configure Pico - Enable both USB and UART for debugging
pico_enable_stdio_usb(bindbot 1)
pico_enable_stdio_uart(bindbot 1)
add_compile_definitions(PICO_UART_ENABLE_CRLF_SUPPORT=0)
add_compile_definitions(PICO_STDIO_ENABLE_CRLF_SUPPORT=0)
add_compile_definitions(PICO_STDIO_DEFAULT_CRLF=0)

# Generate UF2
pico_add_extra_outputs(bindbot)

# RTOS test app (simple tasks + LED toggle on GP0/1/3)
add_executable(rtos_test
    src/rtos_test.c
)
target_link_libraries(rtos_test
    pico_stdlib
    FreeRTOS-Kernel
    FreeRTOS-Kernel-Heap4
)
target_include_directories(rtos_test PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
    ${CMAKE_CURRENT_LIST_DIR}/src
    ${CMAKE_CURRENT_LIST_DIR}/src/config
    ${CMAKE_CURRENT_LIST_DIR}/src/config/freertos
)
pico_enable_stdio_usb(rtos_test 1)
pico_enable_stdio_uart(rtos_test 1)
pico_add_extra_outputs(rtos_test)

# micro-ROS test app
add_executable(micro_ros_test
    src/micro_ros_test.c
    src/board/board.c
    src/board/wifi_init.c
    src/drivers/servo_ctrl.c
    src/drivers/pico_servo.c
    src/drivers/passive_buzzer_manager.c
    src/drivers/touch_sensor.c
    src/uros/uros_app.c
    src/transport/pico_wifi_transport.c
)
target_link_libraries(micro_ros_test
    pico_stdlib
    pico_cyw43_arch_lwip_poll
    hardware_pwm
    hardware_clocks
    hardware_irq
    fixmath
    microros
    FreeRTOS-Kernel
    FreeRTOS-Kernel-Heap4
)
target_include_directories(micro_ros_test PUBLIC
    libmicroros/include
    ${CMAKE_CURRENT_LIST_DIR}
    ${CMAKE_CURRENT_LIST_DIR}/src
    ${CMAKE_CURRENT_LIST_DIR}/src/board
    ${CMAKE_CURRENT_LIST_DIR}/src/drivers
    ${CMAKE_CURRENT_LIST_DIR}/src/transport
    ${CMAKE_CURRENT_LIST_DIR}/src/uros
    ${CMAKE_CURRENT_LIST_DIR}/src/config
    ${CMAKE_CURRENT_LIST_DIR}/src/config/freertos
    libfixmath/libfixmath
)
pico_enable_stdio_usb(micro_ros_test 1)
pico_enable_stdio_uart(micro_ros_test 1)
pico_add_extra_outputs(micro_ros_test)
