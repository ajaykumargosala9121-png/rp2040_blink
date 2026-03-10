cmake_minimum_required(VERSION 3.13)

include($ENV{PICO_SDK_PATH}/external/pico_sdk_import.cmake)

project(pico_hello C CXX ASM)

pico_sdk_init()

add_executable(pico_hello
        main.c
)

target_link_libraries(pico_hello pico_stdlib)

pico_enable_stdio_usb(pico_hello 1)
pico_enable_stdio_uart(pico_hello 0)

pico_add_extra_outputs(pico_hello)

#enable usb.disable uart
pico_enable_stdio_uart(${PROJECT_NAME} 0)
pico_enable_stdio_usb(${PROJECT_NAME} 1) 