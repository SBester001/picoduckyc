add_executable(picoduckyc main.c)

# pull in common dependencies
target_link_libraries(picoduckyc pico_stdlib pico_multicore)
pico_enable_stdio_usb(picoduckyc 1)

# create map/bin/hex file etc.
pico_add_extra_outputs(picoduckyc)
