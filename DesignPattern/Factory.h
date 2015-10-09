/*
*Factory ģʽ:
*���ܣ�
*1.���崴������Ľӿڣ���װ�˶���Ĵ���
*2.ʹ�þ��廯��Ĺ����ӳٵ���������
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