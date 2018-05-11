#include "func.h"

void sig(int signum,siginfo_t *p,void *p1)
{
	printf("the sig %d is coming\n",signum);
}

int main()
{
	struct sigaction act;
	memset(&act,0,sizeof(act));
	act.sa_sigaction=sig;	
	act.flags=SA_SIGINFO|SA_RESETHAND;
	int ret;
	ret=sigaction(SIGINT,&act,NULL);
	if(-1==ret)
	{
		perror("sigaction");
		return -1;
	}
	while(1);	
	return 0;
}
