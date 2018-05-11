#include "func.h"

//cancel子线程
void* thread(void *n)
{
	printf("thread create success\n");
	sleep(4);
	printf("I can't be here\n");
	return NULL;
}

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
	ret=pthread_cancel(pthid);
	if(ret!=0)
	{
		printf("pthread_cancel ret=%d\n",ret);
		return -1;
	}
	ret=pthread_join(pthid,NULL);
	if(ret!=0)
	{
		printf("pthread_join ret=%d\n",ret);
		return -1;
	}
	return 0;
}
