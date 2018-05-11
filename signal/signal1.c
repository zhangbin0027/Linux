#include "func.h"

void sig(int num)
{
	printf("the sig num=%d\n",num);
}

int main()
{
	if(SIG_ERR==signal(SIGINT,sig))
	{
		perror("signal");
		return -1;
	}
	while(1);
	return 0;
}
