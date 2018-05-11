#include "func.h"

int main()
{
	sleep(5);
	char buf[20]={0};
	read(0,buf,sizeof(buf));
	puts(buf);
	return 0;
}
