// Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and 
// return an array of the non-overlapping intervals that cover all the intervals in the input.
//input:- intervals = [[1,3],[2,6],[8,10],[15,18]]
//Output:- [[1,6],[8,10],[15,18]]
//url:-
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector<vector<int>> merge(vector<vector<int>>& intervals) {
    sort(intervals.begin(),intervals.end());
    vector<vector<int>> ans;
    for(int i=0;i<intervals.size();i++){
        int start=intervals[i][0];
        int end=intervals[i][1];
        if(!ans.empty() && end <= ans.back()[1]){//to check wheater whole interval is part of me.
            continue;
        }
        for(int j=i+1;j<intervals.size();j++){
            if(intervals[j][0]<= end){//to merge thye intervals
                end=max(end,intervals[j][1]);
            }
            else{
                break;//stop when not mergeable
            }
        }
        ans.push_back({start,end});//add to new vector
    }
    return ans;        
}
vector<vector<int>> mergeOptimal(vector<vector<int>>& intervals) {
    sort(intervals.begin(),intervals.end());
    vector<vector<int>> ans;
    for(int i=0;i<intervals.size();i++){
        if(ans.empty() || ans.back()[1]< intervals[i][0]){//if ans is empty put the current pair or if the current pair is not inclusive/mergeable with ans.back()
            ans.push_back(intervals[i]);//then insert it inside the ans
        }
        else{
            ans.back()[1]=max(ans.back()[1],intervals[i][1]);//if it is mergeable then merge them and upadte the value present at ans.back()[1]
        }
    }
    return ans;        
}
void printIntervals(vector<vector<int>>& arr){
    for(int i=0;i<arr.size();i++){
        cout<<"["<<arr[i][0]<<","<<arr[i][1]<<"]";
    }
    cout<<endl;
}
int main(){
    vector<vector<int>> intervals={{1,3},{2,6},{8,10},{15,18}};
    printIntervals(intervals);
    vector<vector<int>> ans=mergeOptimal(intervals);
    printIntervals(ans);

return 0;
}