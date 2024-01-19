#include <stdio.h>
#include <unistd.h>

void main() {
    int pid;
    pid = fork();

    if (pid == 0) {
        // This is the child process
        printf("\nChild Process\n");
        printf("Child Process id is %d\n", getpid());
        printf("Its parent process id is %d\n", getppid());
        sleep(5);
        printf("Child process after sleep=5\n");
        printf("Child Process id is %d\n", getpid());
        printf("Its parent process id is %d\n", getppid());
    } else {
        // This is the parent process
        printf("\nParent process\n");
        sleep(10);
        printf("Child Process id is %d\n", getpid());
        printf("Its parent process id is %d\n", getppid());
        printf("Parent terminates\n");
    }
}
