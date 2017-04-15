#include <iostream>
// the lambda expressions is the new features in the C++ 11, we can find it in other object program language such as python and so on
// the lambda is anonymous function
using namespace std;
int main(){
    for(int i =0;i < 10;i++){
	  auto func = [=](){return i*(i+1);};
	  cout<<func()<<endl;
	}
	return 1;
}
