#include "func.h"

int main()
{
	pid_t pid;
	pid=fork();
	if(0==pid)
	{
		printf("I am child,mypid=%d,mypgid=%d\n",getpid(),getpgid(0));
		exit(0);
	}else{
		printf("I am parent,mypid=%d,mypgid=%d\n",getpid(),getpgid(0));
		wait(NULL);
		return 0;
	}
}
