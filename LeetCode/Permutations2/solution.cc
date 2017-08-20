#include <iostream>
#include <vector>
using namespace std;
void backtrack(vector<int>& nums, int beginIndex,vector<vector<int>>& result) {
    if (beginIndex >= nums.size()) {
        result.push_back(nums);
        return ;
    }
    for (int i = beginIndex; i < nums.size(); i++) {
        if (find(nums.begin() + i +1, nums.end(), nums[i]) != nums.end()) { 
        // when we find the repeat value, we just skip it
            continue; 
        }
        swap(nums[i], nums[beginIndex]);
        backtrack(nums, beginIndex + 1, result);
        swap(nums[i], nums[beginIndex]);
    }
}
vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> resultList;
    backtrack(nums,0,resultList);
    return resultList;
}
int main(){
  vector<int> nums = {1,2,2,1};// the method is used for repeat value array
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
