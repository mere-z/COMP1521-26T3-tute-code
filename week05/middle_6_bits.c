#include <stdio.h>
#include <stdint.h>

uint32_t six_middle_bits(uint32_t u) {
    return ((((1 << 6) - 1) << 13) & u) >> 13; 

}

int main() {
    // mask?       00000000000001111110000000000000
    // num         01000111011010011100111001010110
    // mask & num =00000000000000011100000000000000
    // so we need to shift the mask & num back down 

    uint32_t u = 1198116438;  //001 110 in the middle  
    uint32_t result = six_middle_bits(u); 
    // do whatever 
    printf("Six middle bits: %d\n", result); 
    return 0;
}