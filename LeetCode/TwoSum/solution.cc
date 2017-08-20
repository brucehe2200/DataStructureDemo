#include <iostream>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> numlist; 
    vector<int> resultList;
    for(int i = 0;i < nums.size();i++){
        int numneedfind = target - nums[i];
        if(numlist.find(numneedfind) != numlist.end()){
            resultList.push_back(numlist[numneedfind]);
            resultList.push_back(i);
        }
        numlist.insert(std::pair<int,int>(nums[i],i));//insert the value 
    }
    return resultList;
}
int main(){
   vector<int> testlist = {2,7,11,15};
   cout<<twoSum(testlist,9)<<endl;
   return 1;
}
    
