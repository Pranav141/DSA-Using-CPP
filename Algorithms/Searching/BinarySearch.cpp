#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
vector<int> v={1,2,3,4,5,6,7};
int n;
cout<<"ENTER THE NUMBER TO BE FOUND ";
cin>>n;
int s=0,e=v.size()-1;
int mid=s+(e-s)/2;
bool found=false;
while(s<=e){
    mid=s+(e-s)/2;
    if(v[mid]==n)
    {
        cout<<"ELEMENT FOUND AT "<<mid;
        found=true;
        break;
    }
    else if(v[mid]>n){
        e=mid-1;
    }
    else{
        s=mid+1;
    }
}
if(!found){
    cout<<"ELEMENT NOT PRESENT IN THE ARRAY";
}
return 0;
}