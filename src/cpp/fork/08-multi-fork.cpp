/**
Try to find out what are the possible outputs of the following program.
____*(20)_____*(28)_________WAIT______A______EXIT
    |         |
    |         |_____E___WAIT___A____EXIT
    |
    |
    |_*(21)____B___WAIT___A____EXIT
      |
      |____C_____EXIT

*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main () {

    if (fork() == 0) {
        if(fork() > 0) {
            printf("B");
        } else {
            printf("C");
            exit(0);
        }
    } else {
        if (fork() == 0) {
            printf("E");
        }
    }

    wait(NULL);
    printf("A");

    return 0;
}
