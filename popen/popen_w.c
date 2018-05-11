#include "func.h"

int main(int argc,char* argv[])
{
	if(argc!=2)
	{
		printf("error args\n");
		return -1;
	}
	FILE *fp;//管道的另外一端
	fp=popen(argv[1],"w");
	if(NULL==fp)
	{
		perror("fopen");
		return -1;
	}
	char buf[30]="3 4";
	fputs(buf,fp);
	pclose(fp);
	return 0;
}
