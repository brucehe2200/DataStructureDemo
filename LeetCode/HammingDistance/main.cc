#include <iostream>
using namespace std;

/*
Example:

Input: x = 1, y = 4

Output: 2

Explanation:
1   (0 0 0 1)
4   (0 1 0 0)
       ↑   ↑

	   The above arrows point to positions where the corresponding bits are differe
*/
int hammingDistance(int x,int y){
	int result = x^y;
	int count = 0;
	while(result){
		if(result&1){count++;}
		result>>=1;// move the result to right 1 bit
	}
	return count;
}
int main(){
 cout<< hammingDistance(3,5)<<endl;
 return 1;
}
