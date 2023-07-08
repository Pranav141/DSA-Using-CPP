//itreate through array and search the array in a linear pattern time complexity O(n)
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
vector<int> v={1,2,3,4,5};
cout<<"Enter No. to be  searched";
int n;
cin>>n;
bool found=false;
for(int i=0;i<v.size();i++){
    if(v[i]==n){
        found=true;
        cout<<"Found the element at"<<i;
    }
}
if(!found){
    cout<<"Element not Found";
}

return 0;
}

