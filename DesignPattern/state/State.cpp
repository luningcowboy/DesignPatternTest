#include "State.h"
#include "ContextState.h"
#include <iostream>
using namespace std;
State::State()
{}
State::~State()
{}
void State::OperationInterface(ContextSate* con)
{
	cout << "State....." << endl;
}
bool State::ChangeState(ContextSate * con, State * st)
{
	con->changeState(st);
	return true;
}
void State::OperationChangeState(ContextSate* con)
{
}
ConcreteStateA::ConcreteStateA()
{}
ConcreteStateA::~ConcreteStateA()
{}
void ConcreteStateA::OperationInterface(ContextSate* con)
{
	cout << "ConcreteStateA::OperationInterface...." << endl;
}
void ConcreteStateA::OperationChangeState(ContextSate* con)
{
	OperationInterface(con);
	this->ChangeState(con, new ConcreteStateB());
}
ConcreteStateB::ConcreteStateB()
{}
ConcreteStateB::~ConcreteStateB()
{}
void ConcreteStateB::OperationInterface(ContextSate* con)
{
	cout << "ConcreteStateB::OperationInterface" << endl;
}
void ConcreteStateB::OperationChangeState(ContextSate* con)
{
	OperationInterface(con);
	this->ChangeState(con,new ConcreteStateA());
}