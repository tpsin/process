/* 
 * Demonstration of zombies.
 * Run in background "g++ 03-zombie.cpp; ./a.out &" 
 * and then perform "ps -l"
 */

#include <stdlib.h>
#include <iostream>
#include <unistd.h>
#include <sys/wait.h>

int main ()
{
    if (fork() == 0) {
        /* Child */
        std::cout << "Terminating Child, PID = " << getpid() << std::endl;
        exit(0);
    } else {
        /* Parent */
        std::cout << "Running Parent, PID = " << getpid() << std::endl;
        sleep(60);
        wait(NULL);
    }

    return 0;
}
