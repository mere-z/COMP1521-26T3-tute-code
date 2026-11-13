#include <stdio.h>

// Given 1+ strings on the commandline, 
// creates a file "hello.txt" with the strings separated by a 🥭\n

// e.g. /write_string_to_file hello world should look like:
// hello🥭
// world🥭


int main(int argc, char *argv[]) {
    FILE *fp = fopen("hello.txt", "w");

    // err checking

    for (int i = 1; i < argc; i++) {
        fprintf(fp, "%s🥭\n", argv[i]);
    }
   
 

}