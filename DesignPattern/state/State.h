#ifndef _STATE_H_
#define _STATE_H_
class ContextSate;
class State
{
public:
	State();
	virtual ~State();
	virtual void OperationInterface(ContextSate*) = 0;
	virtual void OperationChangeState(ContextSate*) = 0;
protected:
	bool ChangeState(ContextSate * con, State * st);
private:

};

class ConcreteStateA :public State
{
public:
	ConcreteStateA();
	virtual ~ConcreteStateA();
	virtual void OperationInterface(ContextSate*);
	virtual void OperationChangeState(ContextSate*);

};

class ConcreteStateB : public State
{
public:
	ConcreteStateB();
	virtual ~ConcreteStateB();
	virtual void OperationInterface(ContextSate*);
	virtual void OperationChangeState(ContextSate*);

};

class StateA : public State
{
public:
	StateA();
	virtual ~StateA();
	virtual void OperationInterface(ContextSate*);
	virtual void OperationChangeState(ContextSate*);
};
class StateB : public State
{
public:
	StateB();
	virtual ~StateB();
	virtual void OperationInterface(ContextSate*);
	virtual void OperationChangeState(ContextSate*);
};
class StateC : public State
{
public:
	StateC();
	virtual ~StateC();
	virtual void OperationInterface(ContextSate*);
	virtual void OperationChangeState(ContextSate*);
};
class StateD : public State
{
public:
	StateD();
	virtual ~StateD();
	virtual void OperationInterface(ContextSate*);
	virtual void OperationChangeState(ContextSate*);
};

#endif