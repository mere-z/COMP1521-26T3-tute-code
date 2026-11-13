#include <stdio.h>
#include <sys/stat.h>

// Files/directories passed in through argv[]
// Iterate through argv[].st_ino;
// Change file/directory perms to not public writeable (but keep everything else)

int main(int argc, char *argv[]) {

    for (int i = 1; i < argc; i++) {
        // 1. get file information 
        // 

        struct stat s;

        if (stat(argv[i], &s)) {
            perror(argv[i]);
        }

    
        if (s.st_mode & S_IWOTH) {
            // change the mode 
            mode_t new_mode = s.st_mode ^ S_IWOTH;
            chmod(argv[i], new_mode);
          
            printf("Changed %s to not publically writeable\n", argv[i]);
        } else {

            printf("NO change %s not publically writeable\n", argv[i]);
        }





    }

}