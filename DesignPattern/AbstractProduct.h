#ifndef _ABSTRACT_PRODUCT_H_
#define _ABSTRACT_PRODUCT_H_

class AbstractProductA{
public:
	~AbstractProductA();
protected:
	AbstractProductA();

};

class ProductA1 : public AbstractProductA
{
public:
	ProductA1();
	~ProductA1();
};

class ProductA2 :public AbstractProductA
{
public:
	ProductA2();
	~ProductA2();

};

class ProductA3 : public AbstractProductA
{
public:
	ProductA3();
	~ProductA3();
};

class AbstractProductB{

public:
	~AbstractProductB();
protected:
	AbstractProductB();
};

class ProductB1 :public AbstractProductB
{
public:
	ProductB1();
	~ProductB1();
};

class ProductB2 : public AbstractProductB
{
public:
	ProductB2();
	~ProductB2();

private:

};

class ProductB3 : public AbstractProductB
{
public:
	ProductB3();
	~ProductB3();

private:

};
#endif