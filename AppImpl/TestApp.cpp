#include <iostream>
#include <windows.h>
#include "../AppFW/AppBase.hpp"
#include "../AppFW/ThreadBase.hpp"
#include "TestApp.hpp"
#include "Handler.hpp"
#include "ThreadA.hpp"


TestApp::TestApp()
	: handler_(new Handler())
{
	handler_->addHandler(this);
}


TestApp::~TestApp()
{
}


void TestApp::init()
{
	std::cout << "init()" << std::endl;
	//子スレッド起動
	threadA_.start();
	return;
}

// アイドリング中の処理。無限ループで何度も呼ばれる。
// 終了時はsetDone()する
void TestApp::idle()
{
	std::cout << "idle()" << std::endl;
	Sleep(10000);

	//子スレッド停止
	threadA_.stop();
	//子スレッド終了待ち
	threadA_.join();

	// 自分自身を終了
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
