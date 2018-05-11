#include "func.h"

int main()
{
	int maxfd=3;
	if(fork())
	{
		exit(0);
	}
	setsid();//成为会话组组长
	chdir("/");//改变工作目录到根
	int i;
	for(i=0;i<maxfd;i++)
	{
		close(i);
	}
	while(1);
	return 0;
}
