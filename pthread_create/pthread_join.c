#include "func.h"
#define N 1000000

void* thread(void* p)
{
	int i;
	char *p1=(char*)malloc(20);
	strcpy(p1,"hello world");
	return p1;
}

//创建一个子线程，主线程必须是最后退出的
int main()
{
	pthread_t pthid;
	int ret;
	ret=pthread_create(&pthid,NULL,thread,NULL);
	if(ret!=0)
	{
		printf("pthread_create ret=%d\n",ret);
		return -1;
	}
	char *p;
	ret=pthread_join(pthid,(void**)&p);
	if(ret!=0)
	{
		printf("pthread_join ret=%d\n",ret);
		return -1;
	}
	printf("p=%s\n",p);
	return 0;
}
