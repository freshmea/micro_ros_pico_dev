cmake_minimum_required(VERSION 3.13)

set(PICO_BOARD pico2_w CACHE STRING "Board type")

include($ENV{PICO_SDK_PATH}/external/pico_sdk_import.cmake)

project(ws2812_pio_demo C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

add_executable(ws2812_pio_demo
    ws2812.c
    example.c
)

pico_generate_pio_header(ws2812_pio_demo ${CMAKE_CURRENT_LIST_DIR}/ws2812.pio)

target_include_directories(ws2812_pio_demo PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}
)

target_link_libraries(ws2812_pio_demo PRIVATE
    pico_stdlib
    hardware_pio
)

pico_add_extra_outputs(ws2812_pio_demo)
