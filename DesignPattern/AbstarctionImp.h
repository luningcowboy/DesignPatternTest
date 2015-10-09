#ifndef _ABSTARCTION_IMP_H_
#define _ABSTARCTION_IMP_H_

class AbstractionImp
{
public:
	virtual ~AbstractionImp();
	virtual void Operation() = 0;
protected:
	AbstractionImp();
};


class ConcreteAbstarctionImpA : public AbstractionImp
{
public:
	ConcreteAbstarctionImpA();
	~ConcreteAbstarctionImpA();
	virtual void Operation();
};

class ConcreteAbstarctionImpB : public AbstractionImp
{
public:
	ConcreteAbstarctionImpB();
	~ConcreteAbstarctionImpB();
	virtual void Operation();
};

#endif