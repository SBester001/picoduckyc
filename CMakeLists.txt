cmake_minimum_required(VERSION 3.13)

# initialize the SDK based on PICO_SDK_PATH
# note: this must happen before project()
include(pico_sdk_import.cmake)

project(picoduckyc)

# initialize the Raspberry Pi Pico SDK
pico_sdk_init()

# rest of your project

add_executable(picoduckyc picoduckyc/main.c)

# pull in common dependencies
target_link_libraries(picoduckyc pico_stdlib pico_multicore)
pico_enable_stdio_usb(picoduckyc 1)

# create map/bin/hex file etc.
pico_add_extra_outputs(picoduckyc)