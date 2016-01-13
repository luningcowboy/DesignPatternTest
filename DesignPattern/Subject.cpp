#include "Subject.h"
#include "Observer.h"
#include <iostream>
Sub::Sub()
{
	_obvs = new list<Observer*>;
}
Sub::~Sub()
{}
void Sub::Attach(Observer * obv)
{
	_obvs->push_back(obv);
}
void Sub::Detach(Observer * obv)
{
	if (obv != nullptr)
	{
		_obvs->remove(obv);
	}
}
void Sub::Notify()
{
	list<Observer*>::iterator it;
	it = _obvs->begin();
	for (; it != _obvs->end();it++)
	{
		(*it)->UpDate(this);
	}
}

ConcreteSub::ConcreteSub()
{
	_st = '\0';
}
ConcreteSub::~ConcreteSub()
{}
StateStr ConcreteSub::GetState()
{
	return _st;
}
void ConcreteSub::SetState(const StateStr&st)
{
	_st = st;
}