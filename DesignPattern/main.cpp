#include<iostream>
#include "Factory.h"
#include "Product.h"
#include "AbstractFactory.h"
#include "AbstractProduct.h"
#include "SingleTon.h"
#include "Prototype.h"
#include "AbstarctionImp.h"
#include "Abstarction.h"
#include "Adapter.h"
#include "Decorator.h"
#include "Com.h"
#include "Composite.h"
#include "Leaf.h"
#include "Flyweight.h"
#include "FlyweightFactory.h"
#include "Facade.h"
#include "Proxy.h"
#include "Template.h"
#include "Context.h"
#include "Strategy.h"
#include "state/State.h"
#include "state/ContextState.h"
#include "Observer.h"
#include "Subject.h"
#include "Memento.h"
using namespace std;
/*测试Factory设计模式*/
void testFactory();
/*测试抽象工厂模式*/
void testAbstractFactory();
/*测试单例模式*/
void testSingleton();
/*测试原型模式*/
void testPrototype();
/*测试桥接模式*/
void testBridge();
/*测试原型模式*/
void testAdapter();
/*测试装饰模式*/
void testDecorator();
/*测试混合模式*/
void testComposite();
/*测试享元模式*/
void testFlyweight();
/*测试外观模式*/
void testFacade();
/*测试代理模式*/
void testProxy();
/*测试模板模式*/
void testTemplate();
/*测试策略模式*/
void testStrategy();
/*测试state模式*/
void testState();
void testState01();
/*测试观察者模式*/
void testObserver();
/*测试备忘录模式*/
void testMemento();
int main()
{
	testFactory();
	testAbstractFactory();
	testSingleton();
	testPrototype();
	testBridge();
	testAdapter();
	testDecorator();
	testComposite();
	testFlyweight();
	testFacade();
	testProxy();
	testTemplate();
	testStrategy();
	testState();
	//testState01();
	testObserver();
	testMemento();
	cout << "Hello world" << endl;
	system("pause");
	return 0;
}

void testFactory()
{
	cout << "测试工厂模式" << endl;
	Factory * fac = new ConcreteFactory();
	Product * pro = fac->CreateProduct();
	cout << "end============" << endl;
}

void testAbstractFactory()
{
	cout << "测试抽象工厂模式" << endl;
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
	cout << "测试单例模式" << endl;
	Singleton * pSgn = Singleton::getInstance();
	cout << "end=============" << endl;
}

void testPrototype()
{
	cout << "原型模式测试" << endl; 
	Prototype * p = new ConcretePrototype();
	Prototype * p1 = p->Clone();
	cout << "end=============" << endl;
}

void testBridge()
{
	cout << "桥接模式测试" << endl;
	AbstractionImp * imp = new ConcreteAbstarctionImpA();
	Abstraction * abs = new RefinedAbstarction(imp);
	abs->Operation();
	AbstractionImp * imp1 = new ConcreteAbstarctionImpB();
	Abstraction * abs2 = new RefinedAbstarction(imp1);
	abs2->Operation();
	cout << "end================" << endl;
}

void testAdapter()
{
	cout << "原型模式测试" << endl;
	Adaptee *ade = new Adaptee;
	Target * adt = new Adapter();

	adt->Request();

	Adaptee * ade2 = new Adaptee;
	Target * adt2 = new AdapterB(ade2);
	adt2->Request();
	cout << "end================" << endl;
}

void testDecorator()
{
	cout << "装饰模式测试" << endl;
	Component * pCct = new ConcreteComponent;
	Decorator * pDot = new ConcreteDecorator(pCct);
	pDot->Operation();
	cout << "end================" << endl;
}

void testComposite()
{
	cout << "混合模式测试" << endl;
	Leaf * l = new Leaf;
	l->Operation();
	Composite * com = new Composite();
	com->Add(l);
	com->Operation();
	Com *ll = com->GetChild(0);
	ll->Operation();
	cout << "end================" << endl;
}
void testFlyweight()
{
	cout << "享元模式测试" << endl;
	FlyweightFactory * fc = new FlyweightFactory();
	Flyweight * fw1 = fc->GetFlyweight("hello");
	Flyweight * fw2 = fc->GetFlyweight("hello");
	Flyweight * fw3 = fc->GetFlyweight("world!");
	Flyweight * fw4 = fc->GetFlyweight("hello");
	cout << "end================" << endl;
}

void testFacade()
{
	cout << "外观模式测试" << endl;
	Facade * f = new Facade();
	f->OperationWrapper();
	cout << "end================" << endl;

}

void testProxy()
{
	cout << "代理模式测试" << endl;
	Subject * sub = new ConcreteSubject();
	Proxy * p = new Proxy(sub);
	p->Request();
	cout << "end================" << endl;
}

void testTemplate()
{
	cout << "模板模式测试" << endl;
	AbstractClass * p1 = new ConcreteClass1();
	AbstractClass * p2 = new ConcreteClass2();
	p1->TemplateMethod();
	p2->TemplateMethod();
	cout << "end================" << endl;
}

void testStrategy()
{
	cout << "策略模式测试" << endl;
	Strategy * ps;
	ps = new ConcreteStrategyA();
	Context *pc = new Context(ps);
	pc->DoAction();
	if (nullptr != pc)
	{
		delete pc;
	}

	Strategy * ps1 = new ConcreteStrategyB();
	Context * pc1 = new Context(ps1);
	pc1->DoAction();
	if (nullptr != pc1)
	{
		delete pc1;
	}
	cout << "end================" << endl;
}
void testState()
{
	cout << "状态模式测试01" << endl;
	State * st = new ConcreteStateA();
	ContextSate * con = new ContextSate(st);
	con->OperationChangeState();
	con->OperationChangeState();
	con->OperationChangeState();
	if (con != nullptr)
	{
		delete con;
	}
	if (st != nullptr)
	{
		st = nullptr;
	}
	cout << "end====================" << endl;
}
void testState01()
{
	cout << "状态模式测试02" << endl;
	State * st = new StateA();
	ContextSate * cs = new ContextSate();
	cs->OperationChangeState();
	cs->OperationChangeState(); 
	cs->OperationChangeState(); 
	cs->OperationChangeState();
	cout << "end==================" <<endl;
}
void testObserver()
{
	cout << "观察者模式测试" << endl;
	Sub* sub = new ConcreteSub();
	Observer * o1 = new ObserverA(sub);
	ObserverB * o2 = new ObserverB(sub);
	sub->SetState("old");
	sub->Notify();
	sub->SetState("new");
	sub->Notify();
	cout << "end====================" << endl;
}
void testMemento()
{
	Originator * o = new Originator();
	o->setState("old");
	o->PrintState();
	Memento * m = o->CreateMemento();
	o->setState("new");
	o->PrintState();
	o->RestoreToMemento(m);
	o->PrintState();
	
}