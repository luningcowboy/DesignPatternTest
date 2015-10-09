#include<iostream>
#include "Factory.h"
#include "Product.h"
#include "AbstractFactory.h"
#include "AbstractProduct.h"
#include "SingleTon.h"
#include "Prototype.h"
using namespace std;
/*����Factory���ģʽ*/
void testFactory();
/*���Գ��󹤳�ģʽ*/
void testAbstractFactory();
/*���Ե���ģʽ*/
void testSingleton();
/*����ԭ��ģʽ*/
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
	cout << "���Թ���ģʽ" << endl;
	Factory * fac = new ConcreteFactory();
	Product * pro = fac->CreateProduct();
	cout << "end============" << endl;
}

void testAbstractFactory()
{
	cout << "���Գ��󹤳�ģʽ" << endl;
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
	cout << "���Ե���ģʽ" << endl;
	Singleton * pSgn = Singleton::getInstance();
	cout << "end=============" << endl;
}

void testPrototype()
{
	cout << "ԭ��ģʽ����" << endl; 
	Prototype * p = new ConcretePrototype();
	Prototype * p1 = p->Clone();
	cout << "end=============" << endl;
}