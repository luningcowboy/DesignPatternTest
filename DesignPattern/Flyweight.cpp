#include "Flyweight.h"
#include <iostream>
using namespace std;

Flyweight::Flyweight(string intrinsicState)
{
	this->_intrinsicState = intrinsicState;
}

Flyweight::~Flyweight()
{}

void Flyweight::Operation(const string& extrinsicState)
{}

string Flyweight::GetIntrinsicState()
{
	return this->_intrinsicState;
}

ConcreteFlyweight::ConcreteFlyweight(string instrinsicState)
	:Flyweight(instrinsicState)
{
	cout << "ConcreteFlyweight Build..."<<instrinsicState << endl;
}

ConcreteFlyweight::~ConcreteFlyweight()
{}

void ConcreteFlyweight::Operation(const string& extrinsicState)
{
	cout << "ConcreteFlyweight:ÄÚÔÌ["
		<< this->GetIntrinsicState() << "]ÍâÔÌ["
		<< extrinsicState << "]" << endl;
}