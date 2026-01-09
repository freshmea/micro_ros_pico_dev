cmake_minimum_required(VERSION 3.12)

include($ENV{PICO_SDK_PATH}/external/pico_sdk_import.cmake)

project(pico_micro_ros_example C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# Set board for Pico 2W
set(PICO_BOARD pico2_w CACHE STRING "Board type")

pico_sdk_init()

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
add_executable(pico_micro_ros_example
    pico_micro_ros_example.c
    pico_wifi_transport.c
    pico_servo.c
)
target_link_libraries(pico_micro_ros_example
    pico_stdlib
    pico_cyw43_arch_lwip_poll
    hardware_pwm
    hardware_clocks
    hardware_irq
    fixmath
    microros
)

target_include_directories(pico_micro_ros_example PUBLIC
    libmicroros/include
    ${CMAKE_CURRENT_LIST_DIR}
    libfixmath/libfixmath
)

SET(CMAKE_C_FLAGS  "${CMAKE_C_FLAGS} -ffunction-sections -fdata-sections")
SET(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -ffunction-sections -fdata-sections")

# Configure Pico - Enable both USB and UART for debugging
pico_enable_stdio_usb(pico_micro_ros_example 1)
pico_enable_stdio_uart(pico_micro_ros_example 1)
add_compile_definitions(PICO_UART_ENABLE_CRLF_SUPPORT=0)
add_compile_definitions(PICO_STDIO_ENABLE_CRLF_SUPPORT=0)
add_compile_definitions(PICO_STDIO_DEFAULT_CRLF=0)

# Generate UF2
pico_add_extra_outputs(pico_micro_ros_example)

# Servo test program (for debugging)
add_executable(test_servo
    test_servo.c
    pico_servo.c
)
target_link_libraries(test_servo
    pico_stdlib
    hardware_pwm
    hardware_clocks
    hardware_irq
    fixmath
)
target_include_directories(test_servo PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
    libfixmath/libfixmath
)
pico_enable_stdio_usb(test_servo 1)
pico_enable_stdio_uart(test_servo 1)
pico_add_extra_outputs(test_servo)
