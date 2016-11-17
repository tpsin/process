/**
Try to find out what are the possible outputs of the following program.

P1 ______ * _____ A __________ Exit
          |
P2        |______ * ______ M _____ A ______ Exit
                  |
P3                |_______ C _____ A ______ Exit

*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main () {

    if(fork() == 0) {
        if(fork() == 0) {
            printf("C");
        } else {
            printf("M");
        }
    }

    printf("A");

    return 0;
}
