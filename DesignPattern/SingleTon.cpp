#include "SingleTon.h"

#include <iostream>
using namespace std;
Singleton * Singleton::s_pInstance = nullptr;

Singleton * Singleton::getInstance()
{
	if (!s_pInstance)
	{
		s_pInstance = new Singleton;
	}

	return s_pInstance;
}
Singleton::Singleton()
{
	cout << "singleton..." << endl;
}

Singleton::~Singleton()
{
}
