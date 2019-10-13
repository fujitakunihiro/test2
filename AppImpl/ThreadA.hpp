#ifndef INCLUDED_THREADA
#define INCLUDED_THREADA

#include "../AppFW/ThreadBase.hpp"


class ThreadA :
	public ThreadBase 
{
public:
	ThreadA();
	virtual ~ThreadA();

public:
	virtual void run();

public:
	void request();
};
#endif
