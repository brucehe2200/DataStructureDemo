#include <iostream>
#include "../library/hello.h"
#include "../library/myclass.h"
using namespace std;
int main(int argc, char **argv)
{
    printHello();
	MyClass classDemo;
 	classDemo.Dosomething();
	cout<<"it is complete"<<endl;
	return 1;
}

