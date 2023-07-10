// 35. Search Insert Position
// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
// You must write an algorithm with O(log n) runtime complexity.

// nums = [1,3,5,6], target = 5
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int firstOccurence(vector<int> &nums,int target){
    int s=0;
    int e=nums.size()-1;
    int mid=s+(e-s)/2;
    
    while (s<=e)
    {
        mid=s+(e-s)/2;
        if(target==nums[mid]){
            e=mid-1;
        }
        else if(target>nums[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return s;
}
int main(){
vector<int> v={1,3,4,6};
int target=7;
cout<<firstOccurence(v,target);
return 0;
}

