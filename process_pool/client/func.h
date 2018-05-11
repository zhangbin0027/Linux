#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <string.h>
#include <sys/epoll.h>
#include <netinet/in.h>
#include <arpa/inet.h>
//进程池的数据结构

#define FILENAME "file"
typedef struct childdata
{
	pid_t pid;
	int fdw;
	short busy;//表示子进程是否忙碌
}cdata,*pcdata;

typedef struct tdata
{
	int len;//代表后面真实数据的长度
	char buf[1000];//火车车厢
}td,*pid;
void make_child(pcdata,int);
void set_init(int,char*,char*);
void send_file(int);
void recv_n(int,char*,int);
