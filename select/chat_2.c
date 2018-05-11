#include "func.h"

int main(int argc,char* argv[])
{
	if(argc!=3)
	{
		printf("error args\n");
		return -1;
	}
	int fdw,fdr;
	fdw=open(argv[1],O_WRONLY);//打开1号管道的写端
	if(-1==fdw)
	{
		perror("open");
		return -1;
	}
	fdr=open(argv[2],O_RDONLY);//打开2号管道的读端
	if(-1==fdr)
	{
		perror("open1");
		return -1;
	}
	printf("process 2 open pipe success\n");
	char buf[20];
	int ret;
	fd_set rdset;
	while(1)
	{
		FD_ZERO(&rdset);
		FD_SET(0,&rdset);
		FD_SET(fdr,&rdset);
		ret=select(fdr+1,&rdset,NULL,NULL,NULL);
		if(ret>0)
		{
			if(FD_ISSET(STDIN_FILENO,&rdset))
			{
				memset(buf,0,sizeof(buf));
				if(read(STDIN_FILENO,buf,sizeof(buf))>0)
				{
				write(fdw,buf,strlen(buf)-1);//写到对端
				}else{
					break;
				}
			}
			if(FD_ISSET(fdr,&rdset))
			{
				memset(buf,0,sizeof(buf));
				if(read(fdr,buf,sizeof(buf)-1)>0)
				{
					puts(buf);
				}else{
					break;
				}
			}
		}
	}
	return 0;
}
