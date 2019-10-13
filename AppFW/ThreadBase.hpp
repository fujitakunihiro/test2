#ifndef INCLUDED_TREADBASE
#define INCLUDED_TREADBASE
#include <pthread.h>


class ThreadBase
{
public:
	ThreadBase();
	~ThreadBase();

public:
    void start();
    virtual void run();
    void stop();
    void join();

    pthread_t m_pthread;

private:
    static void* launchThread(void *pParam);
    bool is_done_;

protected:
    bool done();

};
#endif