cmake_minimum_required(VERSION 3.12)
include(/home/aa/micro_ros_ws/src/pico-sdk/external/pico_sdk_import.cmake)

project(pico_micro_ros_example C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

find_library(PICO_SERVO_LIBRARY pico-servo HINTS /usr/bin)
find_library(FIXMATH_LIBRARY fixmath HINTS /usr/bin)
link_directories(libmicroros)

add_executable(pico_micro_ros_example pico_micro_ros_example.c pico_uart_transport.c)
target_link_libraries(pico_micro_ros_example pico_stdlib microros)
target_include_directories(pico_micro_ros_example PUBLIC libmicroros/include)

add_executable(pico_dc_motor pico_dc_motor.c pico_uart_transport.c)
target_link_libraries(pico_dc_motor pico_stdlib microros hardware_pwm)
target_include_directories(pico_dc_motor PUBLIC libmicroros/include)

add_executable(pico_pwm pico_pwm.c pico_uart_transport.c)
target_link_libraries(pico_pwm pico_stdlib microros ${PICO_SERVO_LIBRARY} ${FIXMATH_LIBRARY})
target_include_directories(pico_pwm PUBLIC libmicroros/include )


SET(CMAKE_C_FLAGS  "${CMAKE_C_FLAGS} -ffunction-sections -fdata-sections")
SET(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -ffunction-sections -fdata-sections")

# Configure Pico
pico_enable_stdio_usb(pico_micro_ros_example 1)
pico_enable_stdio_uart(pico_micro_ros_example 0)
pico_enable_stdio_usb(pico_dc_motor 1)
pico_enable_stdio_uart(pico_dc_motor 0)
pico_enable_stdio_usb(pico_pwm 1)
pico_enable_stdio_uart(pico_pwm 0)
add_compile_definitions(PICO_UART_ENABLE_CRLF_SUPPORT=0)
add_compile_definitions(PICO_STDIO_ENABLE_CRLF_SUPPORT=0)
add_compile_definitions(PICO_STDIO_DEFAULT_CRLF=0)

# Generate UF2
pico_add_extra_outputs(pico_micro_ros_example)
pico_add_extra_outputs(pico_dc_motor)
pico_add_extra_outputs(pico_pwm)
