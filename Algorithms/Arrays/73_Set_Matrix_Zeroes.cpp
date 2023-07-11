// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

// You must do it in place.
//Input:-
//[[1,1,1],
// [1,0,1],
// [1,1,1]]
//Output:-
//[[1,0,1],
// [0,0,0],
// [1,0,1]]
//URL:-https://leetcode.com/problems/set-matrix-zeroes/description/
//Soln:-https://leetcode.com/problems/set-matrix-zeroes/submissions/781993832/
//Approach
//Take 2 dummy array representing rows and column of the matriz
//Traverse the matrix and when found 0 then make the row[i]=0 and col[j]=0
//Next again traverse the matrix but this time have a condition that if(row[i]==0||col[j]==0) then make that element 0

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void printMatrix(vector<vector<int>>& matrix){
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
void setZeroes(vector<vector<int>>& matrix) {
        vector<int> dummyx(matrix[0].size(),1),dummyy(matrix.size(),1);
        for(int i=0;i<matrix.size();i++){
            for (int j = 0; j < matrix[i].size(); j++)
            {
                if(matrix[i][j]==0){
                    dummyx[j]=0;
                    dummyy[i]=0;
                }
            }
            
        }
        for(int i=0;i<matrix.size();i++){
            for (int j = 0; j < matrix[i].size(); j++)
            {   
                if(dummyx[j] == 0 || dummyy[i] == 0){
                    matrix[i][j]=0;
                }
            }
        }
}
int main(){
    vector<vector<int>> matrix={{0,1,1},{1,0,1},{1,1,0}};
    cout<<"Input:-"<<endl;
    printMatrix(matrix);
    setZeroes(matrix);
    cout<<"Output:-"<<endl;
    printMatrix(matrix);
return 0;
}