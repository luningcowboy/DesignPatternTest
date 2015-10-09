#ifndef _ABSTRACTION_H_
#define _ABSTRACTION_H_

class AbstractionImp;

class Abstraction
{
public:
	virtual ~Abstraction();
	virtual void Operation() = 0;

protected:
	Abstraction();

};

class RefinedAbstarction : public Abstraction
{
public:
	RefinedAbstarction(AbstractionImp * imp);
	~RefinedAbstarction();
	void Operation();

private:
	AbstractionImp * _imp;

};

#endif