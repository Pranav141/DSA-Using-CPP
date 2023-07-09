// There is an integer array nums sorted in ascending order (with distinct values).
// Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].
// Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.
// You must write an algorithm with O(log n) runtime complexity.
// Input: nums = [4,5,6,7,0,1,2], target = 0
// Output: 4
//URL:-https://leetcode.com/problems/search-in-rotated-sorted-array/
//solution:- https://leetcode.com/problems/search-in-rotated-sorted-array/submissions/990231326/

//Approach
//First try to find the pivot element in the array 
//ie. the smallest element
//we can find the pivot element using the next and prev element to mid
//but have to keey in mind that we shouldnt go out of bounds.
//To do that we have to find next=(mid+1)%n and prev=(mid+n-1)%n
//after which we have find whether in which section the target lies
//for eg: 4,5,6,7,  0,1,2
//            1        2  
//we can see section 1 and 2
//here first we have to check whether the target is present in section 2 or not
//Whyyy?? beacuse there can be edge case where the array is completely and is actual sorted
//and out pivot(smallest element) is present at 0 position
//but we dont know that so in that scenario if we do 0 to pivot-1 then it can go out of bounds
//thats why we have search in an inclusive search space.       
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int pivot(vector<int>& nums){
    int s=0,e=nums.size()-1;
    int mid=s+(e-s)/2;
    int n=nums.size();

    while(s<=e){
        mid=s+(e-s)/2;
        int next=(mid+1)%n;
        int prev=(mid+n-1)%n;
        if(nums[mid]<=nums[next] && nums[mid]<=nums[prev]){
            return mid;
        }
        else if(nums[mid]>nums[0]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return 0;
}
int BS(vector<int> &nums,int s,int e,int target){
    int mid=s+(e-s)/2;
    while(s<=e){
        
        mid=s+(e-s)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}
int search(vector<int>& nums,int target){
    int p=pivot(nums);
    if(target>=nums[p] && target<=nums[nums.size()-1]){
        return BS(nums,p,nums.size()-1,target);
    }
    else{
        return BS(nums,0,p-1,target);
    }
}
int main(){
    vector<int> nums={4,5,6,7,0,1,2};
    int target;
    cout<<"ENTER THE TARGET ";
    cin>>target;
    int ans=search(nums,target);
    cout<<ans;
return 0;
}