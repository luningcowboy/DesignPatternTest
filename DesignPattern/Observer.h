#ifndef _OBSERVER_H_
#define _OBSERVER_H_

#include "Subject.h"
#include <string>
using namespace std;
typedef string StateStr;
class Observer
{
public:
	virtual ~Observer();
	virtual void UpDate(Sub * sub) = 0;
	virtual void PrintInfo()=0;
protected:
	Observer();
	StateStr _st;
};
class ObserverA :public Observer
{
public:
	virtual Sub* GetSubject();
	ObserverA(Sub * sub);
	virtual ~ObserverA();
	void UpDate(Sub * sub);
	void PrintInfo();
private:
	Sub * _sub;
};
class ObserverB : public Observer
{
public:
	virtual Sub * GetSubject();
	ObserverB(Sub * sub);
	virtual ~ObserverB();
	void UpDate(Sub * sub);
	void PrintInfo();
private:
	Sub * _sub;
};
#endif