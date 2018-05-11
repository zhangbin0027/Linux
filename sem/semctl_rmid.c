#include "func.h"

int main()
{
	int semid;//信号量集合
	semid=semget(1234,1,IPC_CREAT|0600);
	if(-1==semid)
	{
		perror("semget");
		return -1;
	}
	int ret;
	ret=semctl(semid,0,IPC_RMID);
	if(-1==ret)
	{
		perror("semctl");
		return -1;
	}
	printf("the semval=%d\n",ret);
	return 0;
}
