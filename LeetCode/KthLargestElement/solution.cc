#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findKthLargest(vector<int>&nums, int k){
    make_heap(nums.begin(),nums.end());
    pop_heap(nums.begin(),nums.end());// move the largeest element to the last-1 position
    for(int i = 1;i < k;i++){
        nums.pop_back();
        make_heap(nums.begin(),nums.end());
        pop_heap(nums.begin(),nums.end());
    }
    return nums.back();
}
int main() {
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    int value = findKthLargest(nums,1);
    return 0;
}
