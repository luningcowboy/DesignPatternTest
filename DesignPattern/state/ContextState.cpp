#include "ContextState.h"
#include "State.h"

ContextSate::ContextSate()
{
}
ContextSate::ContextSate(State* state)
{

}
ContextSate::~ContextSate()
{
	delete _state;
}
void ContextSate::OperationInterface()
{

}
bool ContextSate::changeState(State * state)
{
	this->_state = state;
	return true;
}
void ContextSate::OperationChangeState()
{

}