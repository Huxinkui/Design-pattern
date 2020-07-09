#ifndef _TEMPLATE_LIB_
#define _TEMPLATE_LIB_

//该模块主要是框架部分，由lib开发人员开发完成，通过父类定义的调用模板，调用应用程序开发人员写的代码
//实现方法，框架部分提前定义好调用模板步骤，应用开发人员对lib中的virtual接口函数进行重写

#include <iostream>
using namespace std;

class Library{
public:
	int Run();
	virtual ~Library(){ //析构函数应该为虚函数，否则派生类指针赋值给基类后，delete 指针可能会导致派生类对象无法析构
	cout << "This is ~Library" << endl;
	}

protected:

	void step1();
	virtual void step2(){
	cout << "This is Library step2 " << endl;
	}
	void step3();
	virtual void step4(){
	cout << "This is Library step4 " << endl;
	}
};

#endif