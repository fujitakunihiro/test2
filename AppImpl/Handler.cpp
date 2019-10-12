#include "Handler.h"



Handler::Handler()
	: m_handler(0)
{
}


Handler::~Handler()
{
}

void Handler::addHandler(HandlerInterface* handler)
{
	if (this->m_handler == 0) {
		this->m_handler = handler;

		this->m_handler->request();
	}
}

//void Handler::request()
//{
//	if (this->m_handler) {
//		this->m_handler->request();
//	}
//}

// スレッド作成
// run()
// この中でhanderが登録されていたらrequest()を呼ぶようにする
// キューを作る