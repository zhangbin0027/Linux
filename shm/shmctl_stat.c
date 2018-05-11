#include "func.h"

int main(int argc,char* argv[])
{
	int shmid;
	shmid=shmget(1234,1<<20,IPC_CREAT|0600);
	if(-1==shmid)
	{
		perror("shmget");
		return -1;
	}
	int ret;
	struct shmid_ds s;
	ret=shmctl(shmid,IPC_STAT,&s);
	if(-1==ret)
	{
		perror("shmctl");
		return -1;
	}
	printf("cuid=%d,mode=%o,size=%d,nattach=%ld\n",s.shm_perm.cuid,s.shm_perm.mode,s.shm_segsz,s.shm_nattch);
	return 0;
}
