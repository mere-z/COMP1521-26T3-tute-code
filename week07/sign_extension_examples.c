#include <stdio.h>
#include <stdint.h>


// Show students how the computer sign extends different types of integers
// 1. Extend a 16 bit unsigned integer into an unsigned 32 bit integer
// 2. Extend a 16 bit signed integer into an unsigned 32 bit integer
// 3. Extend a 16 bit unsigned integer into an signed 32 bit integer
// 4. Make the printf a %u on our signed integer

// Show arithmetic/logical shift difference
int main() {
    
    // 1000000000000000 

    uint16_t x = 0x8000;

    // what does this become? 
    // becomes 32 1s if extending from an int16_t
    // becomes 11111111111111111111111111
    //         10000000000000000000000001 
    uint32_t y = x;

    printf("x = %d, y = %d", x, y); 

}