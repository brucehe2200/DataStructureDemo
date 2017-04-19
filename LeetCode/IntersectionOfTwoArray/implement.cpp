#include <iostream>
#include <map>
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
int main()
{
    vector<int> nums1, nums2;
    nums1.push_back(1);
	nums1.push_back(2);
	nums1.push_back(2);
	nums1.push_back(1);
	nums2.push_back(3);
	nums2.push_back(2);
	nums2.push_back(1);
	nums2.push_back(2);
	vector<int> result =intersect(nums1,nums2);
	for(auto & tmp:result){
	   cout<<tmp<<endl;
	}
   
   return 1;	
}
