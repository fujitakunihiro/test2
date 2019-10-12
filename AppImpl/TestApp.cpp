#include <iostream>
#include "TestApp.h"
#include "Handler.h"


TestApp::TestApp()
	: m_handler(new Handler())
{
	m_handler->addHandler(this);
}


TestApp::~TestApp()
{
}


void TestApp::init()
{
	std::cout << "init()" << std::endl;
	return;
}

void TestApp::idle()
{
	std::cout << "idle()" << std::endl;


	// ����
	setDone();
	return;
}

void TestApp::cleanup()
{
	std::cout << "cleanup()" << std::endl;
	return;
}

void TestApp::request()
{
	std::cout << "handler request()" << std::endl;
	return;
}
