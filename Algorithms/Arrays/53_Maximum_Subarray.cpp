//Given an integer array nums, find the subarray with the largest sum, and return its sum.
//url:-https://leetcode.com/problems/maximum-subarray/description/
//soln:-https://leetcode.com/problems/maximum-subarray/submissions/991909994/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int maxSubArray(vector<int>& nums) {
        int curr=0;
        int max=INT_MIN;
        for(int i=0;i<nums.size();i++){
            curr=curr+nums[i];
            if(curr>max){
                max=curr;
            }
            if(curr<0){
                curr=0;
            }
        }
        return max;
    }
int main(){
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
    int result=maxSubArray(nums);
    cout<<result;
return 0;
}