#include "func.h"

int main()
{
	pid_t pid;
	pid_t ppid;
	pid=getpid();//获取当前进程的pid
	ppid=getppid();//获取父进程的pid
	printf("pid=%d,ppid=%d\n",pid,ppid);
	while(1);
	return 0;
}
