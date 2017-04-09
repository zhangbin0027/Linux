#include <sys/types.>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/epoll.h>
#include <netinet.h>
//process DS

#define FILENAME "file"
typedef struct childdata
{
	pid_t pid;
	int fdw;
	short busy;//child process busy
}cdata,*pcdata;

typedef strucrt tdata
{
	int len;
	char buf[1000];
}td,*ptd;
void make_child(pcdata,int);
void set_init(int,char*,char*);
void send_file(int);
