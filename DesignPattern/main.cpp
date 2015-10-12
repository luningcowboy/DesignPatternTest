﻿#include<iostream>
#include "Factory.h"
#include "Product.h"
#include "AbstractFactory.h"
#include "AbstractProduct.h"
#include "SingleTon.h"
#include "Prototype.h"
#include "AbstarctionImp.h"
#include "Abstarction.h"
#include "Adapter.h"
#include "Decorator.h"

using namespace std;
/*测试Factory设计模式*/
void testFactory();
/*测试抽象工厂模式*/
void testAbstractFactory();
/*测试单例模式*/
void testSingleton();
/*测试原型模式*/
void testPrototype();
/*测试桥接模式*/
void testBridge();
/*测试原型模式*/
void testAdapter();
/*测试装饰模式*/
void testDecorator();
int main()
{
	testFactory();
	testAbstractFactory();
	testSingleton();
	testPrototype();
	testBridge();
	testAdapter();
	testDecorator();

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

void testBridge()
{
	cout << "桥接模式测试" << endl;
	AbstractionImp * imp = new ConcreteAbstarctionImpA();
	Abstraction * abs = new RefinedAbstarction(imp);
	abs->Operation();
	AbstractionImp * imp1 = new ConcreteAbstarctionImpB();
	Abstraction * abs2 = new RefinedAbstarction(imp1);
	abs2->Operation();
	cout << "end================" << endl;
}

void testAdapter()
{
	cout << "原型模式测试" << endl;
	Adaptee *ade = new Adaptee;
	Target * adt = new Adapter();

	adt->Request();

	Adaptee * ade2 = new Adaptee;
	Target * adt2 = new AdapterB(ade2);
	adt2->Request();
	cout << "end================" << endl;
}

void testDecorator()
{
	cout << "装饰模式测试" << endl;
	Component * pCct = new ConcreteComponent;
	Decorator * pDot = new ConcreteDecorator(pCct);
	pDot->Operation();
	cout << "end================" << endl;
}