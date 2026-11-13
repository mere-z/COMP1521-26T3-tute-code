#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define EIGHT_ONES  0xFF

// Tasks: 
// 1. Check the 4th bit of "num" (see if it's 1 or 0)
// 2. Set the 2nd bit of num to '1' and print num (2^2 digit place) 
// 3. Check the bottom 4 bits of num 

int main(void) {

    int num = 0b10111011;
                //  ^^^^ what are these four bits ? print it out 
             // 00001111 with an & allows you to say you dont care about
             // anything but the bottom 4 bits 

    // int mask = 0b1111; // trick introduction: how to get x 1's without 
    // hardcoding!! 

    int mask = (1 << 4) - 1; 

    int result = num & mask;
    
    printf("%d", result);








        // //             ^ target this bit and print it out (we know should b 0 )
    // int mask = 1; // under the hood this is 0b00000...1
    // mask = mask << 4;   // 0b00010000 & num checks the 4th bit of num 

    // int result = num & mask; 
       // //               ^ set this bit to 1 and print out the changed number 
    // int mask = 1;
    // mask = mask << 2; // 0b00000100

    // num = num | mask; // Why or here?  



    // printf("%d", num);

    


}