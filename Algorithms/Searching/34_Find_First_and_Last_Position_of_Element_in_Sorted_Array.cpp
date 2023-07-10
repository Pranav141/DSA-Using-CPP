// 34. Find First and Last Position of Element in Sorted Array
// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
// If target is not found in the array, return [-1, -1].
// You must write an algorithm with O(log n) runtime complexity.
// nums = [5,7,7,8,8,10], target = 8
 //URL:-https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
 //soluntion:- https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/submissions/990305208/
 //Approach
 //Create 2 functions 1. to find the first occurence 2. to find second occurence
 //set ans=-1
 //in First occurence after finding the target set ans=mid move e=mid-1 i.e move to the left.
 //in Last occurence after finding the target set ans=mid move s=mid+1 i.e move to the right.
 //return ans from both functions
 #include<bits/stdc++.h>
 #include<iostream>
 using namespace std;
 int firstOccurence(vector<int>& nums, int target){
    int s=0,e=nums.size()-1;
    int mid=s+(e-s)/2;
    int result=-1;
    while(s<=e){
        mid=s+(e-s)/2;
        if(target==nums[mid]){
            result=mid;
            e=mid-1;
        }
        else if(target<nums[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return result;
 }
 int lastOccurence(vector<int>& nums, int target){
    int s=0,e=nums.size()-1;
    int mid=s+(e-s)/2;
    int result=-1;
    while(s<=e){
        mid=s+(e-s)/2;
        if(target==nums[mid]){
            result=mid;
            s=mid+1;
        }
        else if(target<nums[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return result;
 }
 vector<int> searchRange(vector<int>& nums, int target) {
        int first=firstOccurence(nums,target);
        int last=lastOccurence(nums,target);
        return {first,last};
    }
 int main(){
    vector<int> nums={5,7,7,8,8,10};
    int target=8;
    vector<int> result=searchRange(nums,target);
    cout<<result[0]<<result[1];
 return 0;
 }
