#include <stdio.h>
#include <stdint.h>

int main(void) {
    int x = 0b10010101;

    int mask = 1;
    // ooption 1: hardcode the mask;
    // mask = 0b111;
     printf("%d", x & mask );

}
// biggest digit in decimal = 9
// biggest digit in binary = 1