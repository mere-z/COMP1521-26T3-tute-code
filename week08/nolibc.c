// A couple things usually available from the standard library
// which we now need to define ourselves
#define NULL ((void*) 0)
typedef unsigned int size_t;

// flags for open()
#define O_RDONLY        0x00000000
#define O_WRONLY        0x00000001
#define O_RDWR          0x00000002
#define O_ACCMODE       0x00000003
#define O_TRUNC         0x00000200     /* truncate to zero length */
#define O_CREAT         0x00000040      /* create if nonexistant */

// For the defintion of these functions
// (which are written in x86 assembly),
// see nolibc.s
extern void exit(int status);
extern int open(char *pathname, int flags, int mode);
extern int close(int fd);
extern int read(int fd, char *buf, size_t count);
extern int write(int fd, char *buf, size_t count);

// (extern tells the compiler we will resolve the symbol (label) at link time)

// The real start point of our program is the _start function in nolibc.s,
// which calls main after getting argc and argv from the stack.
int main(int argc, char *argv[]) {
    // TODO: write your code here!
    
    return 0;
}

