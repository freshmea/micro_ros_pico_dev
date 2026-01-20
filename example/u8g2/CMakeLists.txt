set(PROJECT_ROOT ${CMAKE_CURRENT_LIST_DIR}/../..)

add_executable(u8g2pico_korean_test
    u8g2pico_korean.c
)
target_link_libraries(u8g2pico_korean_test
    pico_stdlib
    hardware_i2c
    u8g2_external
)
target_include_directories(u8g2pico_korean_test PUBLIC
    ${PROJECT_ROOT}/external/u8g2/csrc
    ${CMAKE_CURRENT_LIST_DIR}
)
pico_enable_stdio_usb(u8g2pico_korean_test 1)
pico_enable_stdio_uart(u8g2pico_korean_test 1)
pico_add_extra_outputs(u8g2pico_korean_test)
