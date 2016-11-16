/**
Try to find out what are the possible outputs of the following program.
*/

#include <iostream>
#include <unistd.h>
#include <sys/wait.h>
#include <string>

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
