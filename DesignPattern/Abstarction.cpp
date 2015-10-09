#include "Abstarction.h"
#include "AbstarctionImp.h"
#include <iostream>
using namespace std;

Abstraction::Abstraction()
{}

Abstraction::~Abstraction()
{}

RefinedAbstarction::RefinedAbstarction(AbstractionImp * imp)
{
	_imp = imp;
}
RefinedAbstarction::~RefinedAbstarction()
{}

void RefinedAbstarction::Operation()
{
	_imp->Operation();
}