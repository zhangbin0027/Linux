#include "func.h"

int main(int argc,char* argv[])
{
	int shmid;
	shmid=shmget(IPC_PRIVATE,1<<20,IPC_CREAT|0600);
	if(-1==shmid)
	{
		perror("shmget");
		return -1;
	}
	printf("shmid=%d\n",shmid);
	return 0;
}
