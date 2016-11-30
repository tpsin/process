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

    if (1 && fork() > 0) {
        if(fork() == 0 || 0) {
            printf("B");
		  exit(0);
        } else {
		  printf("C");
        }
    }
    else {
	   printf("R");
    }

    printf("A");

    return 0;
}
