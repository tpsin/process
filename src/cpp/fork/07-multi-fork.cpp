/**
Try to find out what are the possible outputs of the following program.
____*(20)_____*(29)_________WAIT______A______EXIT
    |         |
    |         |_____E____EXIT
    |
    |
    |_*(21)____C______EXIT
      |
      |____B_____EXIT

*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main () {

    if (fork() == 0) {
        if(fork() == 0) {
            printf("B");
            exit(0);
        } else {
            printf("C");
            exit(0);
        }
    } else {
        if (fork() == 0) {
            printf("E");
            exit(0);
        }
    }

	wait(NULL);
    printf("A");

    return 0;
}
