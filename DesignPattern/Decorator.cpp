#include "Decorator.h"
#include <iostream>

Component::Component()
{}
Component::~Component()
{}

void Component::Operation()
{}

ConcreteComponent::ConcreteComponent()
{}

ConcreteComponent::~ConcreteComponent()
{}

void ConcreteComponent::Operation()
{
	std::cout << "ConcreteComponent::Operation" << std::endl;
}
Decorator::Decorator(Component * com)
{
	m_pCom = com;
}

Decorator::~Decorator()
{}

void Decorator::Operation()
{}

ConcreteDecorator::ConcreteDecorator(Component * com)
	:Decorator(com)
{
}

ConcreteDecorator::~ConcreteDecorator()
{}

void ConcreteDecorator::AddedBehavior()
{
	std::cout << "ConcreteDecorator::AddedBehavior" << std::endl;
}

void ConcreteDecorator::Operation()
{
	m_pCom->Operation();
	this->AddedBehavior();
}
