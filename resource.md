### System resource

In computing, a resource is any physical or software component used by the processes in a limited amount of space or time 
inside a computer system. 

General physical resources are:
* CPU (time on a single CPU),
* Main Memory (RAM),
* CPU cache.

General virtual resources are:
* Processes,
* Sockets,
* Databases.

### Wait-for graph.

In mathematics, and more specifically in graph theory, a directed graph (or digraph) 
is a graph (that is a set of vertices connected by edges), where the edges have a direction associated with them. 

In formal terms, a directed graph is an ordered pair G = (V, E) where V is a set whose elements are called vertices, nodes, or points.

E is a set of ordered pairs of vertices, called arrows, directed edges, directed arcs, or directed lines.

All resources and processes are vertices in the graph.  
Allocations and requests are edges.


    Allocated      Process that    
     resource     has the resource                       
        []------------->()

    Waiting        Resource the    
    process      process waits for                 
       ()-------------->[]

    Waiting        Process that    
    process      should send message                           
       ()-------------->()

### Deadlock

Sometimes, a waiting process is never again able to change state,
because the resources it has requested are held by other waiting processes. 
This situation is called a deadlock. 

A deadlock situation can arise if the following condition occurs:

* Circular wait. A set { P0 , P1 , ..., Pn } of waiting processes must exist such that P0 is waiting for a resource held by P1, P1 is waiting for a resource held by P2, ..., Pn−1 is waiting for a resource held by Pn, and Pn is waiting for a resource held by P0.

Resource-allocation graph with a deadlock.

![Resource-allocation graph with a deadlock](https://cloud.githubusercontent.com/assets/1194257/20148499/49b722a0-a6ad-11e6-91ce-0035c44aaff8.png)



