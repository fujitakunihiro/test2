#ifndef INCLUDED_APPBASE
#define INCLUDED_APPBASE

class AppBase
{
public:
	AppBase();
	~AppBase();

public:
	virtual void init() = 0;
	virtual void idle() = 0;
	virtual void cleanup() = 0;

	void setDone();
	bool done();
	void run();

private:
	bool is_done_ = false;
};
#endif

