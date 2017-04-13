#include <iostream>
using namespace std;
// the funcation is used for get the max sum of sub array in an array..
int MaxSubArray(int *array, int length){
	if(length ==0){
	   return 0;
	}
	if(length == 1){
	  return array[0];
	}
	int maxsum = array[0];
	int currsum = 0;
	for(int i = 0;i < length;i++){
	  currsum = array[i] > currsum+array[i]?array[i]:currsum+array[i];
	  maxsum = maxsum > currsum?maxsum:currsum;
	}
	return maxsum;
}

int main(){
	int array[]={1,3,-1,9,-4,7};
	int length = sizeof(array)/sizeof(int);
	int sum = MaxSubArray(array,length);
    std::cout<<sum<<endl;
	return 1;
}
