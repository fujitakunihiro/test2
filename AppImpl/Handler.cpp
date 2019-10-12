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

// �X���b�h�쐬
// run()
// ���̒���hander���o�^����Ă�����request()���ĂԂ悤�ɂ���
// �L���[�����