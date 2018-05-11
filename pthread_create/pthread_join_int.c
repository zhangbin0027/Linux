#include "func.h"
#define N 10000000

//pthread_join 接收整型数
void* thread(void* p)
{
	int i=5;
	return(void*)i;
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
	int i;
	ret=pthread_join(pthid,(void**)&i);
	if(ret!=0)
	{
		printf("pthread_join ret=%d\n",ret);
		return -1;
	}
	printf("i=%d\n",i);
	return 0;
}
