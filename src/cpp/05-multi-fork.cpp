/**
Try to find out what are the possible outputs of the following program.
*/

#include <iostream>
#include <unistd.h>
#include <sys/wait.h>
#include <string>

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
