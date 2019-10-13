#include "AppBase.hpp"



AppBase::AppBase()
	: is_done_(false)
{
}


AppBase::~AppBase()
{
}

void AppBase::setDone() {
	is_done_ = true;
}

bool AppBase::done() {
	return is_done_;
}

void AppBase::run() {
	init();
	while (!done()) {
		idle();
	}
	cleanup();
}