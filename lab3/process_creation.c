#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
    int pid;
    pid = fork();

    if (pid < 0) {
        printf("Cannot create the process\n");
        exit(-1);
    }

    if (pid == 0) {
        printf("Child process\n");
        exit(0);
    } else {
        printf("Parent process\n");
    }

    return 0;
}
