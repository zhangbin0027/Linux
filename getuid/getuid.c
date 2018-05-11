#include "func.h"

int main(int argc,char* argv[])
{
	printf("uid=%d,gid=%d,euid=%d,egid=%d\n",getuid(),getgid(),geteuid(),getegid());
	int fd;
	fd=open(argv[1],O_RDWR);
	if(-1==fd)
	{
		perror("open");
		return -1;
	}
	write(fd,"hello",5);
	close(fd);
	return 0;
}
