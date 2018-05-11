#include "func.h"

int main(int argc,char* argv[])
{
	if(argc!=3)
	{
		printf("error args\n");
		return -1;
	}
	int fdr,fdw;
	fdr=open(argv[1],O_RDONLY);//打开管道1的读端
	if(-1==fdr)
	{
		perror("open");
		return -1;
	}
	fdw=open(argv[2],O_WRONLY);//打开管道2的写端
	if(-1==fdw)
	{
		perror("open1");
		return -1;
	}
	printf("open pipe success\n");
	char buf[20]={0};
	while(1)
	{
		memset(buf,0,sizeof(buf));
		if(read(fdr,buf,sizeof(buf)-1)>0)
		{
			puts(buf);
		}else{
			break;
		}
		memset(buf,0,sizeof(buf));
		if(read(STDIN_FILENO,buf,sizeof(buf))>0)
		{
			write(fdw,buf,strlen(buf)-1);
		}else{
			break;
		}
	}
	close(fdr);
	return 0;
}
