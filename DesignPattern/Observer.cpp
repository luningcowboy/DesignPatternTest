#include "Observer.h"
#include "Subject.h"
#include <iostream>
//typedef string State;
Observer::Observer()
{
	_st = '\0';
}
Observer::~Observer()
{}

ObserverA::ObserverA(Sub * sub)
{
	_sub = sub;
	_sub->Attach(this);
}
ObserverA::~ObserverA()
{
	_sub->Detach(this);
	if (_sub!=nullptr)
	{
		delete _sub;
	}
}
Sub * ObserverA::GetSubject()
{
	return _sub;
}
void ObserverA::PrintInfo()
{
	cout << "ObserverA observer..."<< _sub->GetState() << endl;
}
void ObserverA::UpDate(Sub * sub)
{
	_st = sub->GetState();
	PrintInfo();
}

ObserverB::ObserverB(Sub * sub)
{
	_sub = sub;
	_sub->Attach(this);
}
ObserverB::~ObserverB()
{
	_sub->Detach(this);
	if (_sub != nullptr)
	{
		delete _sub;
	}

}
Sub * ObserverB::GetSubject()
{
	return _sub;
}
void ObserverB::PrintInfo()
{
	cout << "ObserverB observer..."<<_sub->GetState() << endl;
}
void ObserverB::UpDate(Sub*sub)
{
	_st = sub->GetState();
	PrintInfo();
}