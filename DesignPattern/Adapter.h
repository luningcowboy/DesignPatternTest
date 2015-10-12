#ifndef _ADAPTER_H_
#define _ADAPTER_H_

class Target
{
public:
	Target();
	virtual ~Target();
	virtual void Request();

};

class Adaptee
{
public:
	Adaptee();
	~Adaptee();
	virtual void SpecificRequest();
};

class Adapter : public Target, private Adaptee
{
public:
	Adapter();
	~Adapter();
	void Request();

};

class AdapterB : public Target
{
public:
	AdapterB(Adaptee * ape);
	~AdapterB();
	void Request();
private:
	Adaptee * m_pApe; 
};

#endif