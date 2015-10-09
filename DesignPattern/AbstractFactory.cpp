#include "AbstractFactory.h"
#include "AbstractProduct.h"
AbstarctFactory::AbstarctFactory(){}
AbstarctFactory::~AbstarctFactory(){}

ConcreteFactory1::ConcreteFactory1(){}
ConcreteFactory1::~ConcreteFactory1(){}
AbstractProductA * ConcreteFactory1::createProductA()
{
	return new ProductA1();
}
AbstractProductB * ConcreteFactory1::createProductB()
{
	return new ProductB1();
}

ConcreteFactory2::ConcreteFactory2(){}
ConcreteFactory2::~ConcreteFactory2(){}
AbstractProductA * ConcreteFactory2::createProductA()
{
	return new ProductA2;
}
AbstractProductB * ConcreteFactory2::createProductB()
{
	return new ProductB2;
}


ConcreteFactory3::ConcreteFactory3(){}
ConcreteFactory3::~ConcreteFactory3(){}
AbstractProductA * ConcreteFactory3::createProductA()
{
	return new ProductA3;
}
AbstractProductB * ConcreteFactory3::createProductB()
{
	return new ProductB3;
}