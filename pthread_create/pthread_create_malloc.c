#include "func.h"
#define N 100000
//子线程加100万
void* thread(void* p)
{

	int i;
	int *p1=(int*)p;
	for(i=0;i<N;i++)
	{
		*p1=*p1+1;
	}
	return NULL;
}
//创建一个子线程
int main()
{
	pthread_t pthid;
	int ret;
	int *p=(int*)malloc(4);
	*p=0;
	ret=pthread_create(&pthid,NULL,thread,p);
	if(ret!=0)
	{
		printf("pthread_create ret=%d\n",ret);
		return -1;
	}
	int i;
	for(i=0;i<N;i++)
	{
		*p=*p+1;
	}
	sleep(1);
	printf("*p=%d\n",*p);
	return 0;
}
