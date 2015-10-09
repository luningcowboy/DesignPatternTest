#include<iostream>
#include "Factory.h"
#include "Product.h"
#include "AbstractFactory.h"
#include "AbstractProduct.h"

using namespace std;
/*测试Factory设计模式*/
void testFactory();
/*测试抽象工厂模式*/
void testAbstractFactory();
int main()
{
	testFactory();
	testAbstractFactory();

	cout << "Hello world" << endl;
	system("pause");
	return 0;
}

void testFactory()
{
	cout << "测试工厂模式" << endl;
	Factory * fac = new ConcreteFactory();
	Product * pro = fac->CreateProduct();
	cout << "end============" << endl;
}

void testAbstractFactory()
{
	cout << "测试抽象工厂模式" << endl;
	AbstarctFactory * af1 = new ConcreteFactory1;
	AbstarctFactory * af2 = new ConcreteFactory2;
	AbstarctFactory * af3 = new ConcreteFactory3;

	af1->createProductA();
	af1->createProductB();
	af2->createProductA(); 
	af2->createProductB();
	af3->createProductA();
	af3->createProductB();
	cout << "end=============" << endl;
}