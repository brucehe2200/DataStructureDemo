#include <iostream>
#include "myclass.h"
#include "hello.h"
using namespace std;
int main(int argc, char **argv)
{
	printHello();
	MyClass classDemo;
 	classDemo.Dosomething();
	cout<<"it is complete"<<endl;
	return 1;
}

