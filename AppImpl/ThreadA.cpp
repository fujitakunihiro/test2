#include <iostream>
#include <windows.h>
#include "../AppFW/ThreadBase.hpp"
#include "ThreadA.hpp"


ThreadA::ThreadA()
{
}


ThreadA::~ThreadA()
{
}

void ThreadA::run()
{
    // スレッドをキリがいいところで終わらせたいフラグ式にしている
    while (!done()) {
        std::cout << "ThreadA run() running" << std::endl;
        Sleep(1000);
    }

    return;
}