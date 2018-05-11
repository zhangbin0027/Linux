#include "func.h"

int main()
{
	pid_t pid;
	char* p=(char*)malloc(10);
	memset(p,0,10);
	strcpy(p,"hello");
	pid=fork();
	if(0==pid)
	{
		printf("I am child pid=%d,ppid=%d\n",getpid(),getppid());
		printf("child p=%s\n",p);
		sleep(2);
		printf("after sleep,child p=%s\n",p);
		return 0;
	}else{
		printf("I am parent,pid=%d,childpid=%d\n",getpid(),pid);
		printf("parent p=%s\n",p);
		strcpy(p,"world");
		printf("after copy,parent p=%s\n",p);
		sleep(5);
		return 0;
	}
}
