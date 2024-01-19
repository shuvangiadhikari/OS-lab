#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int i = 10;

void main() {
    int pid = fork();

    if (pid == 0) {
        // This is the child process
        printf("Initial value of i: %d\n", i);
        i += 10;
        printf("Value of i in child process: %d\n", i);
        printf("Child terminated\n");
    } else {
        // This is the parent process
         // Wait for the child process to terminate
        printf("Value of i in parent process: %d\n", i);
    }
}
