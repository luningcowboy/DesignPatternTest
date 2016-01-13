#ifndef _SUB_H_
#define _SUB_H_
#include <list>
#include <string>
using namespace std;
typedef string StateStr;
class Observer;
class Sub
{
public:
	virtual ~Sub();
	virtual void Attach(Observer * obv);
	virtual void Detach(Observer * obv);
	virtual void Notify();
	virtual void SetState(const StateStr& st) = 0;
	virtual StateStr GetState() = 0;
protected:
	Sub();
private:
	list<Observer*> *_obvs;

};

class ConcreteSub :public Sub
{
public:
	ConcreteSub();
	~ConcreteSub();
	StateStr GetState();
	void SetState(const StateStr&st);
private:
	StateStr _st;
};

#endif