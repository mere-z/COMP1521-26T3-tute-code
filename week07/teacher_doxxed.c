#include <stdio.h>
#include <stdint.h>


// All my personal information is hidden inside the uint32_t "secrets"!
// Can you unpack the uint32_t to find them?

// The bottom 23 bits of this 32_t hold my z_id
// the next 8 bits are my fav number
// the top bit is 1 if my fav animal is CAT
// the top bit is 0 if my fav animal is DOG

int main() {
    
    const uint32_t secrets = 0xA1D2B503;

    uint32_t zid;
    uint32_t cat_is_best_animal;
    uint32_t favourite_number;

    // mask = 1 << 23 - 1; 
    // mask of 23 1's to select 23 from secrets
    zid = ((1u << 23) - 1) & secrets; 
    favourite_number = ((1u << 8) - 1) & secrets >> 23;
    // favourite_number = (((1u << 31) - 1) - ((1u << 23) - 1)) & secrets;
    cat_is_best_animal = (1u << 31) & secrets; 
  


    if (cat_is_best_animal == 1) {
        printf("Cats are the best!🐱\n");
    } else {
        printf("Dogs are the best🐶\n");
    }
    printf("The teacher's zid is %d.\nTheir favourite number is %d.\n", zid, favourite_number); 

}