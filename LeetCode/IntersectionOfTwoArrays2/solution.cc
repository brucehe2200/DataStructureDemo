#include <iostream>
#include <vector>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
     map<int, int> templist;
     int count = 0;
     vector<int> resultList;
     for (int i = 0; i < nums1.size();i++) {
         templist[nums1[i]]++;
     }
     for (int j = 0;j <nums2.size(); j++)  {
        if (templist[nums2[j]] > 0) {
            resultList.push_back(nums2[j]);
            templist[nums2[j]]--;
         }
     }
    return resultList;
}
int main(){
  vector<int> nums1 = {1,2,2,1};
  vector<int> nums2 = {2,1,3,2};
  vector<int> resultList = intersect(nums1,nums2);
  for(auto &tmp: resultList){
    cout<<tmp<<endl
  }
  return 1;
}
