/*
*Factory 模式:
*功能：
*1.定义创建对象的接口，封装了对象的创建
*2.使得具体化类的工作延迟到了子类中
*/

#ifndef _FACTORY_H_
#define _FACTORY_H_

class Product;
class Factory{

public:
	virtual ~Factory() = 0;
	virtual Product * CreateProduct() = 0;
protected:
	Factory();
};

class ConcreteFactory :public Factory
{
public:
	~ConcreteFactory();
	ConcreteFactory();

	Product * CreateProduct();

};

#endif