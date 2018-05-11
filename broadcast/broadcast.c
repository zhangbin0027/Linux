#include "func.h"

void* threadfunc(void* p)
{
	pthd d=(pthd)p;
	printf("I am child thread,I will wait\n");
	pthread_mutex_lock(&d->mutex);
	int ret=pthread_cond_wait(&d->cond,&d->mutex);
	if(ret!=0)
	{
		printf("pthread_cond_wait ret=%d\n",ret);
		return (void*)-1;
	}
	pthread_mutex_unlock(&d->mutex);
	printf("I am child thread,I am wakeup\n");
	pthread_exit(NULL);
}
int main()
{
	thd d;
	pthread_mutex_init(&d.mutex,NULL);
	int ret=pthread_cond_init(&d.cond,NULL);
	if(ret!=0)
	{
		printf("pthread_cond_init ret=%d\n",ret);
		return -1;
	}
	int i;
	pthread_t thid[5];
	for(i=0;i<5;i++)
	{
		pthread_create(&thid[i],NULL,threadfunc,&d);
	}
	sleep(1);
	pthread_cond_broadcast(&d.cond);//让条件变量成立
	printf("have signal\n");
	for(i=0;i<5;i++)
	{
		pthread_join(thid[i],NULL);
	}
	return 0;
}
