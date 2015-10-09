#include "AbstarctionImp.h"
#include <iostream>
using namespace std;

AbstractionImp::AbstractionImp()
{}
AbstractionImp::~AbstractionImp()
{}

void AbstractionImp::Operation()
{
	cout << "AbstractionImp...imp..." << endl;
}

ConcreteAbstarctionImpA::ConcreteAbstarctionImpA()
{}

ConcreteAbstarctionImpA::~ConcreteAbstarctionImpA()
{}

void ConcreteAbstarctionImpA::Operation()
{
	cout << "ConcreteAbstarctionImpA" << endl;
}

ConcreteAbstarctionImpB::ConcreteAbstarctionImpB()
{}

ConcreteAbstarctionImpB::~ConcreteAbstarctionImpB()
{}

void ConcreteAbstarctionImpB::Operation()
{
	cout << "ConcreteAbstarctionImpB..." << endl;
}