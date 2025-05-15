#include <unistd.h>
#include <stdio.h>

int main() {
    char *args[] = {"/bin/ls", "-l", NULL};
    execv(args[0], args);
    perror("exec failed");
    return 1;
}
