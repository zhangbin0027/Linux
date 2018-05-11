#include "func.h"

void sig(int signum,siginfo_T *p.void *p1)
{
	printf("the sig %d is comming\n",signum);
	printf("the sending pid+%d,uid=%d\n",p->si_pid,p->si_uid);
}

int main()
{
	struct sigaction act;
	memset(&act,0,sizeof(act));
	act.sa_sigaction=sig;
	act.sa_flags=SA_SIGINFO;
	int ret;
	ret=sigaction(SIGINT,&act,NULL);
	if(-1==ret)
	{
		perror("sigactiong");
		return -1;
	}
	while(1);
	return 0;
}
