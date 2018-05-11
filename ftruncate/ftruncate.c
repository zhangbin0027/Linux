#include "func.h"

int main(int argc,char* argv[])
{
	if(argc!=2)
	{
		printf("error args\n");
		return -1;
	}
	int fd;
	fd=open(argv[1],O_RDWR|O_CREAT,0666);
	if(-1==fd)
	{
		perror("open");
		return -1;
	}
	int ret;	
	ret=ftruncate(fd,1<<20);
	if(ret!=0);
	{
		perror("ftruncate");
		return -1;
	}
	close(fd);
	return 0;
}
