#include<bits/stdc++.h>
#include<iostream>

using namespace std;
void printMap(map<int,int> m){
    for(int i=0;i<m.size();i++){
        cout<<m[i]<<" ";
    }
}
int main(){
    map<int,int> m;
    map<int,int>::iterator it;
    for(int i=0;i<5;i++){
        m[i]=i*3+1;
    }
    it=m.find(0);
    cout<<it->first<<endl;
    cout<<m.begin()->second<<endl;
    cout<<m[4]<<endl;
    cout<<m.empty()<<endl;
    printMap(m);
    return 0;
}