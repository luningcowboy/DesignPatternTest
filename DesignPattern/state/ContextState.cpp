#include "ContextState.h"
#include "State.h"

ContextSate::ContextSate()
{
	_info = "a_2_b";
}
ContextSate::ContextSate(State* state)
{
	this->_state = state;
	_info = "a_2_b";
}
ContextSate::~ContextSate()
{
	delete _state;
}
void ContextSate::OperationInterface()
{
	_state->OperationInterface(this);
}
bool ContextSate::changeState(State * state)
{
	this->_state = state;
	return true;
}
void ContextSate::OperationChangeState()
{
	_state->OperationChangeState(this);
}
std::string ContextSate::getInfo()
{
	return _info;
}
void ContextSate::setInfo(std::string info)
{
	_info = info;
}