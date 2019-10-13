#include <Windows.h>
#include <iostream>
#include "ThreadBase.hpp"

ThreadBase::ThreadBase()
	: is_done_(false)
{
}

ThreadBase::~ThreadBase()
{
}

void ThreadBase::start()
{
    pthread_create(&m_pthread, 0, &ThreadBase::launchThread, this);
}

void ThreadBase::run()
{
    std::cout << "run() running" << std::endl;
    return;
}

void ThreadBase::stop()
{
    is_done_ = true;
}

void ThreadBase::join()
{
    pthread_join(m_pthread, 0);
}

void *ThreadBase::launchThread(void *pParam)
{
    reinterpret_cast<ThreadBase *>(pParam)->run();
    pthread_exit(0);
}

bool ThreadBase::done()
{
    return is_done_;
}