#include "func.h"

int main()
{
	if(!fork())
	{
		printf("I am child\n");
		sleep(5);
		exit(0);
	}else{
		wait(NULL);//回收子进程的内核PCB
		printf("I am parent\n");
		sleep(10);
		printf("after sleep,I am paent\n");
		return 0;
	}
}
