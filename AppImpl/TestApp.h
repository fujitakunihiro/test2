#ifndef INCLUDED_TESTAPP
#define INCLUDED_TESTAPP

#include "../AppFW/AppBase.h"
#include "../AppFW/HandlerInterface.h"
#include "Handler.h"


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
	Handler* m_handler;
};
#endif
