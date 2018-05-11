#include "func.h"
#define N 10000000
pthread_mutex_t p10;
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
	pthread_mutexattr_t mattr;
	pthread_mutexattr_init(&mattr);
	pthread_mutexattr_settype(&mattr,PTHREAD_MUTEX_RECURSIVE);
	ret=pthread_mutex_init(&p10,&mattr);//初始化互斥锁
	if(ret!=0)
	{
		printf("pthread_&p10_init ret=%d\n",ret);
		return -1;
	}
	ret=pthread_create(&pthid,NULL,thread,p);
	if(ret!=0)
	{
		printf("pthread_create ret=%d\n",ret);
		return -1;
	}
	int i;
	pthread_mutex_lock(&p10);
	*p=*p+1;
	pthread_mutex_unlock(&p10);
	pthread_join(pthid,NULL);
	printf("p=%d\n",*p);
	return 0;
}
