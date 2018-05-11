#include "func.h"

void sig(int signum,siginfo_t *p.void *p1)
{
	printf("the sig %d is coming\n",signum);
}

int main()
{
	struct sigaction act;
	memset(&act,0,sizeof(act));
	act.sa_sigaction=sig;
	act.sa_flags=SA_SIGINFO|SA_RESTART;
	int ret;
	ret=sigaction(SIGINT,&act,NULL);
	if(-1==ret)
	{
		perror("sigaction");
		return -1;
	}
	char buf[20]={0};
	ret=read(0,buf,sizeof(buf));
	printf("buf=%s,ret=%d\n",buf,ret);
	return 0;
}
