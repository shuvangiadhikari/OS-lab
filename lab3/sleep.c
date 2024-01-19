#include <stdio.h>
#include <unistd.h> // Required for fork and sleep functions

int main() {
    printf("Before fork.\n");

    // Create a new process
    pid_t pid = fork();

    if (pid < 0) {
        printf("Fork failed.\n");
    }

    if (pid == 0) {
        // This is the child process
        printf("Child process\n");
    } else {
        // This is the parent process
        sleep(2); // Sleep for 2 seconds in the parent process
        printf("Parent process\n");
    }

    return 0;
}

