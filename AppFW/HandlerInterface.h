#ifndef INCLUDED_HANDLERINTERFACE
#define INCLUDED_HANDLERINTERFACE

class HandlerInterface
{
public:
	HandlerInterface();
	~HandlerInterface();

public:
	virtual void request() = 0;
};
#endif