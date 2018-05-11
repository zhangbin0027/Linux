#include "func.h"

int main(int argc,char* argv[])
{
	int shmid;
	shmid=shmget((key_t)1234,1<<20,IPC_CREAT|0600);
	if(-1==shmid)
	{
		perror("shmget");
		return -1;
	}
	return 0;
}
