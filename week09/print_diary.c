#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Write a C program, print_diary.c, which prints the contents of the file $HOME/.diary to stdout
// The lecture example getstatus.c shows how to get the value of an environment variable.

// We want to make pathname = "$HOME/.diary"

const char *diary_name = ".diary";
int main(void) {    

    //1. create the string that has /mt/accounts/..../.diary
    //                                $HOME          /.diary

    // 2. fopen

    char *home = getenv("HOME");

    int len = strlen(home) + 7 + 1;

    char diary_fullpath[len];

    snprintf(diary_fullpath, len, "%s/.diary", home);



    
} 