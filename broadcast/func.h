#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

typedef struct data
{
	pthread_mutex_t mutex;
	pthread_cond_t cond;
}thd,*pthd;
