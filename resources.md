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


 Allocated          Process that    
 resource         has the resource    
      _                _    
     |_|------------->(_)



 Waiting             Resource the    
 process            process waits for    
      _                    _
     (_)------------->|_|



Waiting             Process that    
process            should send message    
      _                    _
     (_)------------->(_)


