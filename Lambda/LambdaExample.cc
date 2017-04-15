#include <iostream>
// the lambda expressions is the new features in the C++ 11, we can find it in other object program language such as python and so on
// the lambda is anonymous function
using namespace std;
int main(){
	int i;
	for(i =0;i < 10;i++){
		cout<<[=](){ return i*i+1;}<<endl;
	}
	return 1;
}
