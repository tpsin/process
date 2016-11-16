/**
When you fork processes they WILL be running concurrently. 
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
        std::cout << name << " goes to school" << std::endl;
    }

    return 0;
}
