#include "Factory.h"
#include "Product.h"
#include <iostream>

using namespace std;

Factory::Factory()
{}

Factory::~Factory()
{}

ConcreteFactory::ConcreteFactory()
{
	cout << "concrete factory ..." << endl;
}

ConcreteFactory::~ConcreteFactory()
{}

Product * ConcreteFactory::CreateProduct()
{
	return new ConcreteProduct();
}