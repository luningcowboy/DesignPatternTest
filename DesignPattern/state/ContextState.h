#ifndef _CONTEXT_STATE_H_
#define _CONTEXT_STATE_H_
#include <iostream>
class State;
using namespace std;
class ContextSate
{
public:
	ContextSate();
	ContextSate(State * state);
	~ContextSate();
	void OperationInterface();
	void OperationChangeState();
	std::string getInfo();
	void setInfo(std::string info);
protected:
private:
	friend class State;
	bool changeState(State * state);
	
	State * _state;
	std::string _info;
};
#endif