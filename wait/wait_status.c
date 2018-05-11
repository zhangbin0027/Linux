#include "func.h"

int main()
{
	if(!fork())
	{
		printf("I am child\n");
		return 5;
	}else{
		int status;
		pid_t cpid;
		cpid=wait(status);//回收子进程的内核pcb
		if(WIFEXIFD(status))
		{
			printf("the child exit value=%d\n",WEXITSTATUS(status));
		}else{
			printf("child crash\n");
		}
		printf("I am parent\n");
		return 0;
	}
}
