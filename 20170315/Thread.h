#include"Noncopyable.h"
#include<pthread.h>
namespace wd
{
class Thread
: private Noncopyable//实现继承
//:public Noncopyable//接口继承
{
public:
	Thread();
	virtual ~Thread();
	virtual void run()=0;//纯虚函数
	void start();//给线程提供开启线程的方法
	void join();//回收线程
	static void * threadFunc(void * arg);
private:
	pthread_t _pthId;//标识线程
	bool _isRuning;//判断线程是否正在运行
};
}//end of namespace wd
