#include "AbstractProduct.h"
#include <iostream>
using namespace std;

AbstractProductA::AbstractProductA()
{}
AbstractProductA::~AbstractProductA()
{}

ProductA1::ProductA1()
{
	cout << "ProductA1" << endl;
}
ProductA1::~ProductA1()
{
}

ProductA2::ProductA2()
{
	cout << "ProductA2" << endl;
}
ProductA2::~ProductA2()
{}

ProductA3::ProductA3()
{
	cout << "ProductA3" << endl;
}
ProductA3::~ProductA3()
{}

AbstractProductB::AbstractProductB()
{}
AbstractProductB::~AbstractProductB()
{}

ProductB1::ProductB1()
{
	cout << "ProductB1" << endl;
}
ProductB1::~ProductB1()
{}

ProductB2::ProductB2()
{
	cout << "ProductB2" << endl;
}
ProductB2::~ProductB2()
{}

ProductB3::ProductB3()
{
	cout << "ProductB3" << endl;
}
ProductB3::~ProductB3()
{}