#include <stdlib.h>
#include <stdio.h>
#include "pico/multicore.h"


// PINS:


void core1_entry() {
    while (true) {
        sleep_ms(100);
    }
}

void setup() {
    stdio_init_all();


}

int main() {
    setup();
    
    multicore_launch_core1(core1_entry);

    while (true) {
        sleep_ms(1000);
    }
}
