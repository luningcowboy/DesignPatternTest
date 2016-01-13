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

StateA::StateA()
{}
StateA::~StateA()
{}	
void StateA::OperationChangeState(ContextSate* con)
{
	OperationInterface(con);
	if (strcmp(con->getInfo().c_str(),"a_2_b")==0)
	{
		this->ChangeState(con, new StateB());
	}
	else if (strcmp(con->getInfo().c_str(),"a_2_c")== 0)
	{
		this->ChangeState(con,new StateC());
	}
}
void StateA::OperationInterface(ContextSate* con)
{
	cout << "StateA::OperationInterface" << endl;
}

StateB::StateB()
{}
StateB::~StateB()
{}
void StateB::OperationChangeState(ContextSate* con)
{
	OperationInterface(con);
	if (strcmp(con->getInfo().c_str(), "b_2_d") == 0)
	{
		this->ChangeState(con, new StateD());
	}
	else if (strcmp(con->getInfo().c_str(), "b_2_c") == 0)
	{
		this->ChangeState(con, new StateC());
	}
}
void StateB::OperationInterface(ContextSate* con)
{
	cout << "StateB::OperationInterface" << endl;
}

StateC::StateC()
{}
StateC::~StateC()
{}
void StateC::OperationChangeState(ContextSate* con)
{
	OperationInterface(con);
	if (strcmp(con->getInfo().c_str(), "c_2_d") == 0)
	{
		this->ChangeState(con, new StateD());
	}
}
void StateC::OperationInterface(ContextSate* con)
{
	cout << "StateC::OperationInterface" << endl;
}

StateD::StateD()
{}
StateD::~StateD()
{}
void StateD::OperationChangeState(ContextSate* con)
{
	OperationInterface(con);
	if (strcmp(con->getInfo().c_str(), "d_2_a") == 0)
	{
		this->ChangeState(con, new StateA());
	}
}
void StateD::OperationInterface(ContextSate* con)
{
	cout << "StateD::OperationInterface" << endl;
}