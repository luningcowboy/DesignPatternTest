#include "Com.h"
#include "Composite.h"

Composite::Composite()
{}
Composite::~Composite()
{}
void Composite::Operation()
{
	vector<Com*>::iterator comIter = comVec.begin();
	for (; comIter != comVec.end();comIter++)
	{
		(*comIter)->Operation();
	}
}

void Composite::Add(Com * com)
{
	comVec.push_back(com);
}

void Composite::Remove(Com * com)
{	
	//comVec.erase(comVec.begin());
	vector<Com*>::iterator ite = comVec.begin();
	for (; ite != comVec.end(); ite++)
	{
		if ((*ite) == com)
		{
			comVec.erase(ite);
			break;
		}
	}
}

Com * Composite::GetChild(int index)
{
	return comVec[index];
}