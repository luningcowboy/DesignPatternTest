#ifndef _CONTEXT_STATE_H_
#define _CONTEXT_STATE_H_
class State;
class ContextSate
{
public:
	ContextSate();
	ContextSate(State * state);
	~ContextSate();
	void OperationInterface();
	void OperationChangeState();
protected:
private:
	friend class State;
	bool changeState(State * state);
	State * _state;
};
#endif