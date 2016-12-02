/**
Try to find out what are the possible outputs of the following program.
____*(18)_____*(19)_________C_____WAIT______A______EXIT
    |         |
    |         |_____B____EXIT
    |
    |
    |__0____1____A____EXIT
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main () {

	if (fork() > 0) {
		if(fork() == 0) {
			printf("B");
			exit(0);
        } else {
			printf("C");
			wait(NULL);
        }
    } else {
		for(int c = 0; c < 2; c++) {
			printf("%d", c);
		}
    }

	printf("A");

	return 0;
}
