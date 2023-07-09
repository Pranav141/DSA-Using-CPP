#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void printArr(int *arr,int size){//calling function where we pass 2 arguments First the pointer to starting address of the array and second size so that for loop doesnt go out of bounds 
    
    cout<<arr<<"hERE";
    for (int i = 0; i < size; i++)
    {
        cout<<*arr+i<<endl;
    }
    
}
void printArr1(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i];
    }
    
}
void printArr2(int arr[10]){
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i];
    }
}
int main(){
    int arr1[2];//array with garbage values
    int arr2[]={1,2,3,4};//array without size but with specify values
    int arr[10]={1,2,3,4,5,6,7,8,9,10}; //intializing an array with specify size and values
    int aar3[3]={};//array with specify size but no value Empty or Null array
    int n;
     cout<<"ENTER VALUE FOR N";
     cin>>n;
     int arr4[n];//array with size defined by the user
     for (int i = 0; i < n; i++)
     {
         cin>>arr4[i];//initializr the array from user inputs
     }

    int size=sizeof(arr)/sizeof(arr[0]); //getting the size of array
    printArr1(arr2,4);
    printArr2(arr);//*arr is the value present at arr[0] and arr,&arr are the address of arr[0]
return 0;
}