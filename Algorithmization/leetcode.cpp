#include <iostream>
using   namespace std;
#include <vector>

/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            
            for(int x=1;x<nums.size();x++){
                if(i!=x){
                if((nums[i]+nums[x])==target){
                    return {i,x};
                }
            }
        }
        }

        return {0,0};
    }
};

int main() {
    vector<int> nums = {2,7,11,15};
    int target = 22;
    Solution s;
    vector<int> result = s.twoSum(nums,target);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<endl;
    }

return 0; 
}