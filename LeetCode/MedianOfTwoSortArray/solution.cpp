#include <iostream>
#include <vector>

using namespace std;
{
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> resultList;
        int i=0,j=0;
        int index = 0;
        while(i<nums1.size()&&j<nums2.size()){
            if(nums1[i] <= nums2[j]){
                resultList.push_back(nums1[i]);
                i++;
            }
            if(nums1[i] >= nums2[j]){
                resultList.push_back(nums2[j]);
                j++;
            }
        }
        while(i < nums1.size()){
            resultList.push_back(nums1[i]);
            i++;
        }
        while(j < nums2.size()){
            resultList.push_back(nums2[j]);
            j++;
        }
        if(resultList.empty()){ return 0.0;}
        if(resultList.size()%2 == 0){
            return (resultList[resultList.size()/2 - 1] + resultList[resultList.size()/2])/2.0;
        }
        return resultList[resultList.size()/2];
    }
};
int main(){
  vector<int> nums1,nums2;
  nums1 = {1,3};
  nums2 = {2};
  cout<<findMedianSortedArrays(nums1,nums2)<<endl;
  return 1;
}
