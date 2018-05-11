#include "func.h"

int main(int argc,char* argv[])
{
	if(argc!=2)
	{
		printf("error args\n");
		return -1;
	}
	key_t k;
	k=ftok(argv[1],1);
	printf("k=%d\n",k);
	int shmid;
	shmid=shmget(k,1<<20,IPC_CREAT|0600);
	if(-1==shmid)
	{
		perror("shmget");
		return -1;
	}
	char* p;
	p=(char*)shmat(shmid,NULL,0);
	if((char*)-1==p)
	{
		perror("shmat");
		return -1;
	}
	strcpy(p,"hello");
	while(1);
	return 0;
}
