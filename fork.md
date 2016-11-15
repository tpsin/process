### Prerequisite

In order to follow this exercise, you need a **Unix based operating system**. 

Otherwise, click the following link [tutorialspoint](http://www.tutorialspoint.com/codingground.htm) and then click "Bash Shell".

### Fork

1. Open your terminal and run this command:

        man fork
     
2. By using the **fork()** system call,  write a program that is able to print the following data:

        I am the parent <parent_pid>, my child is <child_pid>
        I am the clild <child_pid>, my parent is <parent_id>
        
3. Open your terminal and run these two commands:

        sleep 5 &
        jobs -l
        
4. By using the **sleep()** system call, create a "zombie" processes. You can display a zombie process by running `ps -a`.
        
### Fork Solutions

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
    
4. If a parent does not wait for a child process to die, certain "zombie" processes will be left on the system.

### Fork exercises

#### Exercise 1
How many processes are created with the following code?

        #include <iostream>
        #include <unistd.h>
        #include <stdlib.h>

        int main () {
            for (int i = 0; i < 2; i++){
                if (fork() == 0) {
                    std::cout << "Child PID is: " << getpid() << "\tParent PID is: " << getppid() << std::endl;
                }
                else {
                    wait(NULL);
                    std::cout << "Panrent PID is: " << getpid() << std::endl;
                }
            }
            return 0;
        }
        
#### Exercise 2
How many processes are created if you run the following code?

    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>

    int main(void)
    {
            pid_t pid = fork();
            pid = fork();
            pid = fork();
            if (pid == 0)
            {
            fork();
            }
            fork();
            return 0;
    }
    
#### Exercise 3

If you compile and run the following program 

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

Some times, the child process says my parent process has id 1. Why?

#### Solution 1

        g++ fork.cpp ; ./a.out  |awk '{print $4}'|sort|uniq|wc
        
#### Solution 2

fork() may also fail returning -1, so you might probably state that there are 'no more' than 24 processes, not 'exactly' 24.

#### Solution 3

Process ID 1 is usually the init process primarily responsible for starting and shutting down the system.  
The init (short for initialization) is a daemon process that is the ancestor of all other processes.
What's happening is that the parent is terminating before the child runs. This leaves the child as an orphan and it gets adopted by the root process with PID of 1. 
If you put a delay you will see the result you expect.
        
