// /OsExp/Lab1/exp_2/main.c
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/sem.h>
#include <sys/shm.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/wait.h>

/* 实现三个并发程序的实现，采用Linux系统下的QT库，其大体思想是在主进程中利用fork函数产生三个子进程;每个子进程内利用execv函数分别调用事先在QT已经写好的三个可执行文件。为了实现在每个子进程中显示对应进程的PID号，所以在每个子进程中利用getpid函数获得对应的PID号，并当做execv的参数传递给子进程。
 */

int main(int argc, char* argv[])
{
    int child_process_1, child_process_2, child_process_3;
    //The first child process: show the system time
    child_process_1 = fork();
    if(child_process_1 == 0)
    {
        int pid_1 = getpid();
        char str_1[25];
        sprintf(str_1, "%d", pid_1);
        argv[1] =str_1;
        if(execv("show", argv) == -1)
        {
            printf("Error!\n");
            return 0;
        }
    }
    //The second child process: show 0-9 loop
    child_process_2 = fork();
    if(child_process_2 == 0)
    {
        int pid_2 = getpid();
        char str_2[25];
        sprintf(str_2, "%d", pid_2);
        argv[1] =str_2;
        if(execv("loop", argv) == -1)
        {
            printf("Error!\n");
            return 0;
        }
    }
    //The second child process: get the sum of 1-1000
    child_process_3 = fork();
    if(child_process_3 == 0)
    {
        int pid_3 = getpid();
        char str_3[25];
        sprintf(str_3, "%d", pid_3);
        argv[1] =str_3;
        if(execv("add", argv) == -1)
        {
            printf("Error!\n");
            return 0;
        }
    }
}
