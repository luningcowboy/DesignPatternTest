#ifndef _COMPOSITE_H_
#define _COMPOSITE_H_

#include "Com.h"
#include <vector>
using namespace std;

class Composite : public Com
{
public:
	Composite();
	~Composite();
public:
	void Operation();
	void Add(Com * com);
	void Remove(Com * com);
	Com * GetChild(int index);
private:
	vector<Com*> comVec;
};

#endif