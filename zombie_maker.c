#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();
    
    if (pid == 0) {
        // Дочерний процесс - сразу завершается
        printf("Child PID: %d - dying now\n", getpid());
        exit(0);
    } else {
        // Родитель - спит 60 секунд, не забирая статус ребёнка
        printf("Parent PID: %d, child PID: %d\n", getpid(), pid);
        sleep(60);
    }
    return 0;
}
