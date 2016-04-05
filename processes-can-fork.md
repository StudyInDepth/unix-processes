1. We use the fork(2) system call to create a new process programmatically from a running process. The forked process is an exact copy of the original process. 

2. When forking, the process that initiates the fork(2) is called the "parent" process, and the newly created process is call the "child".

3. The child process inherits a **copy of all memory** in use by its parent, as well as any open file descriptors belonging to the parent.

4. Since the child process is entirely a new process, it gets its own pid. The child process inherits any open file descriptors
from its parent at the time of the fork(2). It's given the same map of file descriptor numbers that the parent process has.
In this way, the two processes can shares files, sockets, etc.

The child process inherits **a copy of everything** that the parent process has in main memory. It's faster when an app running
with multiple instances at the same time, just start one first, then fork other instances from the started one.
