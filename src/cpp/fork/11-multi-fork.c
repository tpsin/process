#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    if(0 && fork() == 0) {
        printf("A");
    } else if (fork() > 0) {
        printf("B");
    } else {
        printf("C");
        exit(0);
    }
    printf("D");

    return 0;
}
