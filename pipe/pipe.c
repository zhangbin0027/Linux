#include "func.h"

int main()
{
	int fds[2];
	pipe(fds);//关闭写端
	if(!fork())
	{
		close(fds[1]);//关闭写端
		char buf[20]={0};
		int ret;
		ret=read(fds[0],buf,sizeof(buf));
		if(ret<=0)
		{
			perror("read");
			return -1;
		}
		puts(buf);
		close(fds[0]);
		exit(0);
	}else{
		close(fds[0]);//关闭写端
		int ret=write(fds[1],"I am parent",11);
		printf("ret=%d\n",ret);
		wait(NULL);
		ret=write(fds[1],"I am parent",11);
		printf("ret=%d\n",ret);
		printf("hello world\n");
		return 0;
	}
}
