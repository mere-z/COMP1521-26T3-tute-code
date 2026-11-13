#include <stdio.h>
#include <stdint.h>

int main(void) {

    // Simulating a machine with 16 bit ints by default
    int16_t a = 3000000000000;
    int16_t b = 30000;

    int c = a + b;

    printf("a + b = c = %d", c);


}