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
	char *p;
	p=(char*)mmap(NULL,6,PROT_READ|PROT_WRITE,MAP_SHARED,fd,0);
	if(p==(char*)-1)
	{
		perror("mmap");
		return -1;
	}
	printf("p[0]=%c\n",p[0]);
	p[0]='H';
	ret=munmap(p,6);
	if(-1==ret)
	{
		perror("munmap");
		return -1;
	}
	close(fd);
	return 0;
}
