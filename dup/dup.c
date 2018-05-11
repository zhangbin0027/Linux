#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc,char *argv[]){
	if(argc!=2){
		printf("error args\n");
		return -1;
	}
	int fd;
	fd=open(argv[1],O_RDWR);
	if(-1==fd){
		perror("open");
		return -1;
	}
	printf("\n");//激活
	close(1);//关闭标准输出
	int fd1;
	fd1=dup(fd);
	printf("fd=%d,fd1=%d\n",fd,fd1);
	return 0;
}

