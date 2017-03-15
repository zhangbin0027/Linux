#include"Thread.h"
#include<iostream>
using std::cout;
using std::endl;
namespace wd
{
	Thread::Thread()
	: _pthId(0)
	, _isRuning(false)
	{}
	void Thread::start()
	{
		pthread_create(&_pthId,NULL,threadFunc,this);
		_isRuning=true;
	}
	void Thread::join()
	{
		if(_isRuning)
		{
			pthread_join(_pthId,NULL);
			_isRuning=false;
		}
	}
	void * Thread::threadFunc(void * arg)
	{
		Thread * p=static_cast<Thread*>(arg);
		if(p)
			p->run();
		return NULL;
	}
	Thread::~Thread()
	{
		if(_isRuning)
		{
			pthread_detach(_pthId);
		}
	}
}//end of namespace wd
