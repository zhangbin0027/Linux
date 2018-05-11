#include "func.h"

int main()
{
	if(SIG_ERR==signal(SIGINT,SIG_IGN))
	{
		perror("signal");
		return -1;
	}
	while(1);
	return 0;
}
