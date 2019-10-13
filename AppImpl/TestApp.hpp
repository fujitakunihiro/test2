#ifndef INCLUDED_TESTAPP
#define INCLUDED_TESTAPP

#include "../AppFW/AppBase.hpp"
#include "../AppFW/ThreadBase.hpp"
#include "Handler.hpp"
#include "ThreadA.hpp"

//class AppBase;
//class HandlerInterface;

class TestApp :
	public AppBase, HandlerInterface 
{
public:
	TestApp();
	virtual ~TestApp();

public:
	void init();
	void idle();
	void cleanup();

public:
	void request();

public:
	Handler* handler_;
	ThreadA threadA_;
};
#endif
