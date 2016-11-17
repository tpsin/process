/**
Try to find out what are the possible outputs of the following program.
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main () {

    if(fork() == 0) {
        if(fork() == 0) {
            printf("C");
            exit(0);
        } else {
            wait(NULL);
            printf("M");
        }
    }

    printf("A");

    return 0;
}
