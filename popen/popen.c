#include "func.h"

int main(int argc,char* argv[])
{
	if(argc!=2)
	{
		printf("error args\n");
		return -1;
	}
	FILE* fp;//管道的另外一端
	fp=popen(argv[1],"r");
	if(NULL==fp)
	{
		perror("fopen");
		return -1;
	}
	char buf[30]={0};
	fgets(buf,sizeof(buf),fp);//读标准输入
	printf("%s",buf);
	return 0;
}
