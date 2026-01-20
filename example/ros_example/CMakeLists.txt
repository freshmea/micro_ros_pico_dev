set(PROJECT_ROOT ${CMAKE_CURRENT_LIST_DIR}/../..)

add_executable(pico_micro_ros_example
    pico_micro_ros_example.c
    ${PROJECT_ROOT}/src/drivers/pico_servo.c
    ${PROJECT_ROOT}/src/transport/pico_wifi_transport.c
)
target_link_libraries(pico_micro_ros_example
    pico_stdlib
    pico_cyw43_arch_lwip_poll
    hardware_pwm
    hardware_clocks
    hardware_irq
    hardware_sync
    microros
)
target_include_directories(pico_micro_ros_example PUBLIC
    ${PROJECT_ROOT}/libmicroros/include
    ${PROJECT_ROOT}
    ${PROJECT_ROOT}/src
    ${PROJECT_ROOT}/src/config
    ${PROJECT_ROOT}/src/config/freertos
    ${PROJECT_ROOT}/src/drivers
    ${PROJECT_ROOT}/src/transport
    ${CMAKE_CURRENT_LIST_DIR}/../firm
    ${PROJECT_ROOT}/external/FreeRTOS-Kernel/include
    ${PROJECT_ROOT}/external/FreeRTOS-Kernel/portable/ThirdParty/Community-Supported-Ports/GCC/RP2350_ARM_NTZ/non_secure
)
target_compile_definitions(pico_micro_ros_example PUBLIC PROJECT_USE_FREERTOS=0)
pico_enable_stdio_usb(pico_micro_ros_example 1)
pico_enable_stdio_uart(pico_micro_ros_example 1)
pico_add_extra_outputs(pico_micro_ros_example)

add_executable(pico_micro_ros_example2
    pico_micro_ros_example2.c
    ${PROJECT_ROOT}/src/transport/pico_uart_transport.c
)
target_link_libraries(pico_micro_ros_example2
    pico_stdlib
    hardware_pwm
    microros
)
target_include_directories(pico_micro_ros_example2 PUBLIC
    ${PROJECT_ROOT}/libmicroros/include
    ${PROJECT_ROOT}
    ${PROJECT_ROOT}/src/transport
)
target_compile_definitions(pico_micro_ros_example2 PUBLIC UROS_TRANSPORT=serial)
pico_enable_stdio_usb(pico_micro_ros_example2 1)
pico_enable_stdio_uart(pico_micro_ros_example2 1)
pico_add_extra_outputs(pico_micro_ros_example2)
