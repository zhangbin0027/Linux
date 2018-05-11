#include "func.h"

//2号信号正在处理信号处理流程，3号信号到来，在信号处理流程中检测信号是否被挂起
void sig(int signum,siginfo_t *p,void *p1)
{
	printf("before sleep,the sig %d is coming\n",signum);
	sleep(3);
	sigset_t set;
	sigemptyset(&set);
	sigpending(&set);//检测当前进程控制块的信号状态
	if(sigismember(&set,SIGQUIT))
	{
		printf("SIGQUIT is pending\n");
	}else{
		printf("SIGQUIT is not pending\n");
	}
	printf("after sleep,the sig %d is coming\n",signum);
}

int main()
{
	struct sigaction act;
	memset(&act,0,sizeof(act));
	act.sa_sigaction=sig;
	act.sa_flag=SA_SIGINFO;
	sigemptyset(&act.sa_mask);
	sigaddset(&act.sa_mask,SIGQUIT);
	int ret;
	ret=sigaction(SIGINT,&act,NULL);
	if(-1==ret)
	{
		perror("sigaction");
		return -1;
	}
	ret=sigaction(SIGQUIT,&act,NULL);
	if(-1==ret)
	{
		perror("sigaction");
		return -1;
	}
	while(1);
	return 0;
}
