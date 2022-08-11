1)  what is process ?
ans. Process is a program in execution i.e it is running or not yet finished.
below program is an example of process -

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
   int mypid, myppid;
   printf("Program to know PID and PPID's information\n");
   mypid = getpid();
   myppid = getppid();
   printf("My process ID is %d\n", mypid);
   printf("My parent process ID is %d\n", myppid);
   printf("Cross verification of pid's by executing process commands on shell\n");
   system("ps -ef");
   return 0;
}

2) what is ps -a ?
ans. We execute this command to view all processes with exception of processes associated with terminal and session leaders. A session leader is a process that starts other processes. 
3) what is top command ?
ans. This command is used to view the continious usage of memory. if some processes is some kind of hang state (consuming more memory and time to execute), then we can identify those processes and take appropriate action(such as killing the process)
4) what is fork()?
ans. This command is used to create a process .Whenever we execute this system call two process is created - Parent process and child process.
5) how to check pid,ppid from terminal?
ans.By executing 'ps -ef' command we can check pid(process ID) and ppid(parent process ID).
