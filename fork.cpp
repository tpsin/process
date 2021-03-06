/**

Fork in C/C++ – a minimum working example.
A fork create a brand new process. The processes do not share memory.

Author: Antonio Pierro

*/

#include <unistd.h>
#include <iostream>

int counter = 0;

int main() {

    pid_t pid = fork();
    std::string processName;

    if (pid == 0) {
        // child process
        processName = "\033[1;31mChild process: \033[0m ";
        for (int i = 0; i < 50; ++i) {
            std::cout << processName << "counter " << ++counter << std::endl;
        }
    } else {
        // parent process
        processName = "\033[1;34mParent process: \033[0m "; //
        for (int i = 0; i < 50; ++i)
        {
            std::cout << processName << "counter " << ++counter << std::endl;
        }
    } 

    std::cout << processName << "TERMINATED" << std::endl;

    return 0;
}
