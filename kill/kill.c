#include "func.h"

int main(int argc,char* argv[])
{
	pid_t pid;
	pid=atoi(argv[1]);
	int ret;
	ret=kill(pid,SIGKILL);
	if(-1==ret)
	{
		perror("Kill");
		return -1;
	}
	while(1);
	return 0;
}
