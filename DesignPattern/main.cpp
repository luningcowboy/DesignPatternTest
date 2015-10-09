#include<iostream>
#include "Factory.h"
#include "Product.h"

using namespace std;
/*测试Factory设计模式*/
void testFactory();
int main()
{
	testFactory();


	cout << "Hello world" << endl;
	system("pause");
	return 0;
}

void testFactory()
{
	Factory * fac = new ConcreteFactory();
	Product * pro = fac->CreateProduct();
}