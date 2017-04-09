#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/uio.h>
#include <sys/socket.h>
#include <string.h>
#include <sys/epoll.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define FILENAME "file"
typedef struct childdata
{
	pid_t pid;
	int fdw;
	short busy;
}cdata,*pcdata;

typedef struct tdata
{
	int len;
	char buf[1000];
}td,*ptd;
void make_child(pcdata,int);
void set_init(int,char*,char*);
void send_file(int);
void recv_n(int,char*,int);
