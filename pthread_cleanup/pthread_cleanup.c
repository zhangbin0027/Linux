#include "func.h"

void cleanup(void* p)
{
	printf("clean func %d\n",(int)p);
}
//push和pop一起使用
//只有pthread_exit和pthread_cancel会执行清理函数
void* thread(void *p)
{
	pthread_cleanup_push(cleanup,(void*)1);
	sleep(3);
	printf("I am wakeup\n");
	pthread_exit(NULL);
	pthread_cleanup_pop(1);//弹清理函数栈，并执行函数
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
	pthread_join(pthid,NULL);
	return 0;
}
