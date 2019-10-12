#include "AppBase.h"



AppBase::AppBase()
{
}


AppBase::~AppBase()
{
}

void AppBase::setDone() {
	isDone = true;
}

bool AppBase::done() {
	return isDone;
}

void AppBase::run() {
	init();
	while (!done()) {
		idle();
	}
	cleanup();
}