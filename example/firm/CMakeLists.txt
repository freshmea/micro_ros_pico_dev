set(PROJECT_ROOT ${CMAKE_CURRENT_LIST_DIR}/../..)

add_executable(firm_pico_dc_motor
    firm_pico_dc_motor.c
    ${PROJECT_ROOT}/src/transport/pico_uart_transport.c
)
target_link_libraries(firm_pico_dc_motor
    pico_stdlib
    hardware_pwm
    microros
)
target_include_directories(firm_pico_dc_motor PUBLIC
    ${PROJECT_ROOT}/libmicroros/include
    ${PROJECT_ROOT}
    ${PROJECT_ROOT}/src/config
    ${PROJECT_ROOT}/src/transport
)
target_compile_definitions(firm_pico_dc_motor PUBLIC UROS_TRANSPORT=serial)
pico_enable_stdio_usb(firm_pico_dc_motor 1)
pico_enable_stdio_uart(firm_pico_dc_motor 1)
pico_add_extra_outputs(firm_pico_dc_motor)

add_executable(firm_pico_led_service
    firm_pico_led_service.c
    ${PROJECT_ROOT}/src/transport/pico_uart_transport.c
)
target_link_libraries(firm_pico_led_service
    pico_stdlib
    microros
)
target_include_directories(firm_pico_led_service PUBLIC
    ${PROJECT_ROOT}/libmicroros/include
    ${PROJECT_ROOT}
    ${PROJECT_ROOT}/src/config
    ${PROJECT_ROOT}/src/transport
)
target_compile_definitions(firm_pico_led_service PUBLIC UROS_TRANSPORT=serial)
pico_enable_stdio_usb(firm_pico_led_service 1)
pico_enable_stdio_uart(firm_pico_led_service 1)
pico_add_extra_outputs(firm_pico_led_service)

add_executable(firm_pico_pwm
    firm_pico_pwm.c
    ${PROJECT_ROOT}/src/drivers/pico_servo.c
    ${PROJECT_ROOT}/src/transport/pico_uart_transport.c
)
target_link_libraries(firm_pico_pwm
    pico_stdlib
    hardware_pwm
    hardware_clocks
    hardware_irq
    hardware_sync
    microros
)
target_include_directories(firm_pico_pwm PUBLIC
    ${PROJECT_ROOT}/libmicroros/include
    ${PROJECT_ROOT}
    ${PROJECT_ROOT}/src
    ${PROJECT_ROOT}/src/config
    ${PROJECT_ROOT}/src/drivers
    ${PROJECT_ROOT}/src/transport
    ${CMAKE_CURRENT_LIST_DIR}
)
target_compile_definitions(firm_pico_pwm PUBLIC UROS_TRANSPORT=serial)
pico_enable_stdio_usb(firm_pico_pwm 1)
pico_enable_stdio_uart(firm_pico_pwm 1)
pico_add_extra_outputs(firm_pico_pwm)

add_executable(firm_pico_servo_wifi
    firm_pico_servo_wifi.c
    ${PROJECT_ROOT}/src/drivers/pico_servo.c
    ${PROJECT_ROOT}/src/transport/pico_wifi_transport.c
)
target_link_libraries(firm_pico_servo_wifi
    pico_stdlib
    pico_cyw43_arch_lwip_poll
    hardware_pwm
    hardware_clocks
    hardware_irq
    hardware_sync
    microros
)
target_include_directories(firm_pico_servo_wifi PUBLIC
    ${PROJECT_ROOT}/libmicroros/include
    ${PROJECT_ROOT}
    ${PROJECT_ROOT}/src
    ${PROJECT_ROOT}/src/config
    ${PROJECT_ROOT}/src/config/freertos
    ${PROJECT_ROOT}/src/drivers
    ${PROJECT_ROOT}/src/transport
    ${PROJECT_ROOT}/external/FreeRTOS-Kernel/include
    ${PROJECT_ROOT}/external/FreeRTOS-Kernel/portable/ThirdParty/Community-Supported-Ports/GCC/RP2350_ARM_NTZ/non_secure
    ${CMAKE_CURRENT_LIST_DIR}
)
target_compile_definitions(firm_pico_servo_wifi PUBLIC PROJECT_USE_FREERTOS=0)
pico_enable_stdio_usb(firm_pico_servo_wifi 1)
pico_enable_stdio_uart(firm_pico_servo_wifi 1)
pico_add_extra_outputs(firm_pico_servo_wifi)
