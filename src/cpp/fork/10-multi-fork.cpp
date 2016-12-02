/**
Try to find out what are the possible outputs of the following program.
____*(23)_____*(24)_________C______A______EXIT
    |         |
    |         |_____B____EXIT
    |
    |
    |__R____A____EXIT

possible outputs are:
CARAB,
RABCA,
CABRA
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main () {

    if (fork() == 0 && fork() > 0) {
        if(fork() == 0 || fork() > 0) {
            printf("A");
        } else {
            printf("B");
        }
    } else {
        printf("C");
    }

    return 0;
}
