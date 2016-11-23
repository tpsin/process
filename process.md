# Process (computing)

### Process control block (PCB)

A process in an OS is represented by a **data structure** known as a **process control block** (PCB) or process descriptor.  
The **PCB** contains important information about the specific process including:

1. The current state of the process. It could be ready, running, waiting…..
2. Unique identification of the process (PID)
3. A pointer to parent process.
4. A pointer to child process (if it exists).
5. The priority of process
6. Memory-Management information 
7. list of I/O devices allocated to the process.

The PCB is maintained for a process throughout its lifetime, and is deleted once the process terminates.

### Context Switching

1. Context Switching: stopping one process and restarting another
2. Sequence of actions: 
 * OS takes control (through interrupt)
 * saves old context in the process PCB
 * reloads new context from the new process PCB
 * returns control to app. program 

<img width="60%" src="https://cloud.githubusercontent.com/assets/1194257/19575845/db46afbc-9710-11e6-9395-694fc671becb.png">

### System resource

In computing, a resource is any physical or software component used by the processes in a limited amount of space or time inside a computer system. 

### System Call

System calls are like special functions that manage OS routines which live in **Kernel Mode**.  
System calls are almost the only interface used by **User Mode** to talk with low level resources (hardware). 

![System-call](https://sketch.io/render/sk-5761568e0e73dee33546c79ff4c8d5b3.jpeg)
