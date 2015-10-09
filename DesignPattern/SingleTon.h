#ifndef _SINGLETON_H_
#define _SINGLETON_H_

class Singleton
{
public:
	static Singleton * getInstance();
public:
	Singleton();
	~Singleton();

private:
	static Singleton * s_pInstance;

};

#endif