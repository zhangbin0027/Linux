#include "func.h"
void* thread(void* p)
{
	printf("the thread create success\n");
	return NULL;
}

//创建一个子线程
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
	sleep(1);
	printf("main thread is here\n");
	return 0;
}
