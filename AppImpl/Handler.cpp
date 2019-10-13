#include "Handler.hpp"



Handler::Handler()
	: handler_(0)
{
}


Handler::~Handler()
{
}

void Handler::addHandler(HandlerInterface* handler)
{
	if (this->handler_ == 0) {
		this->handler_ = handler;

		this->handler_->request();
	}
}
