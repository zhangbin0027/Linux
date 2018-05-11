#include "func.h"
#define N 10000000
pthread_mutex_t p1p0;
//子线程加100万
void* thread(void* p)
{
	int i;
	int *p1=(int*)p;
	pthread_mutex_lock(&p10);
	pthread_mutex_lock(&p10);
	*p1=*p1+1;
	pthread_mutex_unlock(&p10);
	pthread_mutex_unlock(&p10);
	return NULL;
}

//创建一个子线程
int main()
{
	pthread_t pthid;
	int ret;
	int *p=(int*)malloc(4);
	*p=0;
	ret=pthread_mutex_init(&p10,NULL);//初始化互斥锁
	if(ret!=0)
	{
		printf("pthread_&p10_init ret=%d\n",ret);
		return -1;
	}
	int i;
	pthread_mutex_lock(&p10);
	ret=pthread_mutex_teylock(&p10);
	*p=*p+1;
	pthread_mutex_unlock(&p10);
	printf("ret=%d\n",ret);
	return 0;
}
