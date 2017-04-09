#include "func.h"

void set_init(int sfd,char* ip,char* port)
{
	struct sockaddr_in ser;
	memset(&ser,0,sizeof(ser))
	ser.sin_port=htons(atoi(port));
	ser.sin_addr.s_addr=inet_addr(ip);
	int ret;
	ret=bind(sfd,(struct sockaddr*)&ser,sizeof(ser));
	if(-1==ret)
	{
		perror("bind");
		return;
	}
}
