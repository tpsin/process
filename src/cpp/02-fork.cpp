/**
When the call wait() is made, the caller will be blocked until one of its child processes exits.
I want Yuri to go to the school after Gianluca!
*/

#include <iostream>
#include <unistd.h>
#include <sys/wait.h>
#include <string>

int main () {

    pid_t childPidOrZero = fork();
    std::string name;

    if(childPidOrZero == 0) {
        name = "Gianluca";
        std::cout << name << " does breakfast" << std::endl;
        std::cout << name << " goes to school" << std::endl;
    } else {
        name = "Yuri";
        std::cout << name << " does breakfast" << std::endl;
        wait(NULL);
        std::cout << name << " goes to school" << std::endl;
    }

    return 0;
}
