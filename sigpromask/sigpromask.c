#include "func.h"
void sig(int signum)
{
	printf("sig %d is comming\n",signum);
}
//屏蔽信号一段时间，并判断这段时间内是否到来
int main()
{
	signal(SIGINT,sig);
	sigset_t set;
	sigaddset(&set,SIGINT);
	int ret;
	ret=sigpromask(SIG_BLOCK,&set,NULL);
	if(-1==ret)
	{
		perror("sigpromask");
		return -1;
	}
	sleep(10);
	sigset_t pset;
	sigemptyset(&pset);
	if(sigismember(&pset,SIGINT))
	{
		printf("SIGINT is pending\n");
	}else{
		printf("SIGINT is not pending\n");
	}
	ret=sigpromask(SIG_UNBLOCK,&set,NULL);
	if(-1==ret)
	{
		perror("sigprocmask1");
		return -1;
	}
	return 0;
}
