#include <stdio.h>

// Given a filename in the commandline, print the 7th byte of this file
int main(int argc, char *argv[]) {
    FILE *fp = fopen("hello.txt", "r");

    fseek(fp, 4, SEEK_SET);

    printf("%c", fgetc(fp));
    

}