#ifndef _ABSTRACT_FACTORY_H_
#define _ABSTRACT_FACTORY_H_

class AbstractProductA;
class AbstractProductB;

class AbstarctFactory{
public:
	virtual ~AbstarctFactory();
	virtual AbstractProductA * createProductA() = 0;
	virtual AbstractProductB * createProductB() = 0;
protected:
	AbstarctFactory();

};

class ConcreteFactory1 : public AbstarctFactory
{
public:
	ConcreteFactory1();
	~ConcreteFactory1();
	AbstractProductA * createProductA();
	AbstractProductB * createProductB();
};


class ConcreteFactory2 : public AbstarctFactory
{
public:
	ConcreteFactory2();
	~ConcreteFactory2();
	AbstractProductA * createProductA();
	AbstractProductB * createProductB();

};

class ConcreteFactory3 : public AbstarctFactory
{
public:
	ConcreteFactory3();
	~ConcreteFactory3();
	AbstractProductA * createProductA();
	AbstractProductB * createProductB();
};
#endif