#include <stdio.h>
#include <stdlib.h>

// Given a file many_lines.txt with many bytes,
// we want to use fread to read and print out the first 5 bytes
// of the file 

// (later demonstrate how to loop through file 5 bytes at a time);
int main(int argc, char *argv[]) {

    FILE *fp = fopen("many_lines.txt", "r");

    char buf[5];

    int n_read = fread(buf, 5, 1, fp);

    for (int i = 0; i < 5; i++) {
        printf("%c", buf[i]);
    }

    printf("n read = %d", n_read);

}