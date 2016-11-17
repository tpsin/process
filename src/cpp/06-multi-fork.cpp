/**
Try to find out what are the possible outputs of the following program.
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main () {

    if (fork() == 0) {
        if(fork() == 0) {
            printf("3");
        } else {
            printf("2");
        }
    } else {
        if (fork() == 0) {
            printf("1");
            exit(0);
        }
    }

    printf("0");

    return 0;
}
