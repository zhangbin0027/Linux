#include "func.h"

void sig(int signum)
{
	time_t t;
	time(&t);	
	printf("%s\n",ctime(&t));
}

int main()
{
	signal(SIGALRM,sig);
	kill(0,SIGALARM);
	struct itimerval t;
	memset(&t,0,sizeof(t));
	t.it_value.tv_set=3;
	t.it_interval.tv_sec=2;
	int ret;
	ret=setitimer(ITIMER_REAL,&t,NULL);
	if(-1==NULL)
	{
		perror("setitimer");
		return -1;
	}
	char buf[20]={0};
	read(0,buf,sizeof(buf));
	return 0;
}
