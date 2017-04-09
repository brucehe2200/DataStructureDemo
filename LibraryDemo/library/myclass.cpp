#include "myclass.h"
#include <iostream>
using namespace std;

extern "C" MyClass* createMyClass()
{
	return new MyClass;
}
extern "C" void destoryMyClass(MyClass* object){
	delete object;
}
MyClass::MyClass(){
	m_value = 100;
}
void MyClass::Dosomething(){
	cout<<"the value is"<<m_value<<endl;
}
