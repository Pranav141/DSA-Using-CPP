#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void print(int &x){
    cout<<x;
}
int main(){
 
int temp=32;
cout<<temp;
int* ptr=&temp; //& is used to get the address of the variable where as * is used to go the address retirval the value present there
cout<<ptr<<" "<<*ptr; //we have use * to access the value present at the address
print(temp);
return 0;
}