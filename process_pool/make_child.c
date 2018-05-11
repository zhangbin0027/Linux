#include "func.h"
//子进程处理函数
void handle_request(int fdr)
{
	int new_fd;
	short flag=1;
	while(1)
	{
		recv_fd(fdr,&new_fd);
		printf("new_fd=%d\n",new_fd);
		send_file(new_fd);
		write(fde,&flag,sizeof(flag));//告诉父进程活干完了
	}
}
void make_child(pcdata p,int count)
{
	int fds[2];
	int i;
	pid_t pid;
	for(i=0;i<count;i++)
	{
		socketpair(AF_LOCAL,SOCK_STREAM,0,fds);
		pid=fork();
		if(0==pid)
		{
			close(fds[1]);
			handle_request(fds[0]);
		}
		p[i].pid=pid;
		p[i].fdw=fds[1];
		p[i].busy=0;
		close(fds[0]);
	}
}
