#include "func.h"

int main()
{
	pid_t pid;
	pid=fork();
	if(0==pid)
	{
		printf("I am child,mypid=%d,mypgid=%d\n",getpid(),getpgid(0));
		setpgid(0,0);
		printf("I am child,mypid=%d,mypgid=%d\n",getpid(),getpgid(0));
		exit(1);
	}else{
		printf("I am parent,mypid=%d,mypgid=%d\n",getpid(),getpgid(0));
		int status;
		wait(&status);
		if(WIFEXITED(status))
		{
			printf("the return value=%d\n",WEXITSTATUS(status));
		}
		sleep(10);
		return 0;
	}
}
