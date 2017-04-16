#include <iostream>
// the lambda expressions is the new features in the C++ 11, we can find it in other object program language such as python and so on
// the lambda is anonymous function
using namespace std;
int main(){
    for(int i =0;i < 10;i++){
	  /*
	   * [] do not capture value or reference
	   * [=] capture the variable by value
	   * [&] capture the variable by reference
	   * [x,&y] capture the x by value,capture the y by reference
	   * [=,&z] capture the z by reference, capture other variables by value
	   * [&,x] capture the x by value,capture others by reference
	   * */
	  auto func = [=](){return i*(i+1);};
	  cout<<func()<<endl;
	}
	return 1;
}
