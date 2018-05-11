#include "func.h"

int main()
{
	int semid;//信号集合ID
	semid=semget(1234,1,IPC_CREAT|0600);
	if(-1==semid)
	{
		perror("semget");
		return -1;
	}
	int ret;
	struct semid_ds buf;
	memset(&buf,0,sizeof(buf));
	ret=semctl(semid,0,IPC_STAT,&buf);
	if(-1==ret)
	{
		perror("semctl");
		return -1;
	}
	printf("uid=%d,mode=%o,num=%ld\n",buf.sem_perm.uid,buf.sem_perm.mode,buf.sem_nsems);
	return 0;
}
