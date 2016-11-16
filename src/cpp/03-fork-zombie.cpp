/* 
 * Demonstration of zombies.
 * Run in background "g++ 03-zombie.cpp; ./a.out &" and then perform "ps -l"
 */

#include <stdlib.h>
#include <iostream>
#include <unistd.h>

int main ()
{
    if (fork() == 0) {

        /* Child */
        std::cout << "Terminating Child, PID = " << getpid() << std::endl;
        exit(0);
    } else {
        std::cout << "Running Parent, PID = " << getpid() << std::endl;
        while (1)
            ; /* Infinite loop */
    }

    return 0;
}
