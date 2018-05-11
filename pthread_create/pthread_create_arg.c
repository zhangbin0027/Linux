#include "func.h"
void* thread(void* p)
{
	int i=(int)p;
	printf("the thread %d create success\n",i);
	pthread_exit(NULL);
}

int main()
{
	pthread_t pthid;
	int ret;
	int i;
	for(i=0;i<2;i++)
	{
		ret=pthread_create(&pthid,NULL,thread,(void*)i);
		if(ret!=0)
		{
			printf("pthread_create ret=%d\n",ret);
			return -1;
		}
	}
	sleep(1);
	printf("main thread is here\n");
	return 0;
}
