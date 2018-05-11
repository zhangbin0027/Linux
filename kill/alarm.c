#include "func.h"

void sig(int signum)
{
	//printf("signum=%d is coming\n",signum);
}
int main()
{
	signal(SIGALRM,sig);
	alarm(3);//设定3秒后,定时器向当前进程发送一个singalarm信号
	pause();
	return 0;
}
