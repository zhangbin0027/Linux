#include "func.h"

int main()
{
	pid_t sid;
	sid=getsid(0);
	printf("sid=%d\n",sid);
	return 0;
}
