### Fork

1. Open your terminal and run this command:

        man fork
     
2. By using **fork()**,  write a program that is able to print the following data:

        I am the parent <parent_pid>, my child is <child_pid>
        I am the clild <child_pid>, my parent is <parent_id>
        
3. Open your terminal and run these two commands:

        sleep 5 &
        jobs -l
        
### Solutions

1. Pay attention to the section **return values**.

2. By using **fork()**,  write a program that is able to print the following data:

        /** 
        I am the parent <parent_pid>, my child is <child_pid>
        I am the clild <child_pid>, my parent is <parent_id>
        **/

        #include <iostream>
        #include <unistd.h>
        
        int main () {
          
          pid_t childPidOrZero = fork();
          
          if (childPidOrZero == 0) {
            std::cout << "I am the child " << getpid() << ", my parent is " << getppid() << std::endl;
          } else {
            std::cout << "I am the parent " << getpid() << ", my child is " << childPidOrZero << std::endl;
          }
          
          return 0;
        }
        
3. If you execute the following command in your terminal

        sleep 5 &
        
    "sleep 5" is a child process of the terminal process. If you kill the parent process also the child process will be killed.
