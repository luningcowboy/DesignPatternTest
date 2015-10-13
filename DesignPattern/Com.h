#ifndef _COM_H_
#define _COM_H_

class Com
{
public:
	Com();
	virtual ~Com();
public:
	virtual void Operation() = 0;
	virtual void Add(const Com &);
	virtual void Remove(const Com &);
	virtual Com * GetChild(int);

};

#endif