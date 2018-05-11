#include "func.h"
void sig(int num)
{
	printf("before sleep,the sig num=%d\n",num);
	sleep(3);
	printf("after sleep,the sig num=%d\n",num);
}
int main()
{
	if(SIG_ERR==signal(SIGINT,sig))
	{
		perror("signal");
		return -1;
	}
	signal(SIGQUIT,sig);
	while(1);
	return 0;
}
