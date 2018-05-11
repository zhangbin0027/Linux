#include "func.h"

int main()
{
	int semid;//信号量集合ID
	semid=semget(1234,2,IPC_CREAT|0600);
	if(-1==semid)
	{
		perror("semget");
		return -1;
	}
	int ret;
	unsigned short arr[2]={1,2};
	ret=semctl(semid,0,SETALL,arr);
	if(-1==ret)
	{
		perror("semctl");
		return -1;
	}
	memset(arr,0,sizeof(arr));
	ret=semctl(semid,0,GETALL,arr);
	if(-1==ret)
	{
		perror("semctl");
		return -1;
	}
	printf("semval1=%d,semval2=%d\n",arr[0],arr[1]);
	return 0;
}
