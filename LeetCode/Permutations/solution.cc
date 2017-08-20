#include <iostream>
#include <vector>
using namespace std;
// we use recursion to implement the backtrack, then we can get all permutations
// in the case, the item in array is not repeat
void backtrack(vector<int>& nums, int beginIndex,vector<vector<int>> &result) {
    if (beginIndex >= nums.size()) {
        result.push_back(nums);
        return ; 
    }
    for (int i = beginIndex; i < nums.size(); i++) {
        swap(nums[i],nums[beginIndex]);
        backtrack(nums,beginIndex+1,result);
        swap(nums[i],nums[beginIndex]);
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> resultList;
        backtrack(nums, 0,resultList);
        return resultList;
    }
    int main(){
      vector<int> nums = {1,2,3};// the method is adjust for the no repeat array
      vector<vector<int>> resultList = permute(nums);
      for(int i = 0;i < resultList.size();i++){
        for(int j = 0;j < resultList[i].size();j++){
          cout<<resultList[i][j];
          if(j < resultList[i].size() -1){cout<<"-->";}
        }
          cout<<endl;
      }
      return 1;
    }
