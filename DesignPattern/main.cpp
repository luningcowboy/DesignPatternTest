#include<iostream>
#include "Factory.h"
#include "Product.h"
#include "AbstractFactory.h"
#include "AbstractProduct.h"
#include "SingleTon.h"
#include "Prototype.h"
using namespace std;
/*测试Factory设计模式*/
void testFactory();
/*测试抽象工厂模式*/
void testAbstractFactory();
/*测试单例模式*/
void testSingleton();
/*测试原型模式*/
void testPrototype();
int main()
{
	testFactory();
	testAbstractFactory();
	testSingleton();
	testPrototype();

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

void testSingleton()
{
	cout << "测试单例模式" << endl;
	Singleton * pSgn = Singleton::getInstance();
	cout << "end=============" << endl;
}

void testPrototype()
{
	cout << "原型模式测试" << endl; 
	Prototype * p = new ConcretePrototype();
	Prototype * p1 = p->Clone();
	cout << "end=============" << endl;
}