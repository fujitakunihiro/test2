#ifndef INCLUDED_HANDLER
#define INCLUDED_HANDLER

#include "../AppFW/HandlerInterface.h"

class Handler
{
public:
	Handler();
	~Handler();

public:
	void addHandler(HandlerInterface*);

	HandlerInterface* m_handler;
};
#endif