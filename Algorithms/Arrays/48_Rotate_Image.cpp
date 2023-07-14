// You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
// You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.
//Url:-https://leetcode.com/problems/rotate-image/description/
//soln:-https://leetcode.com/problems/rotate-image/submissions/994095087/
//input :-
//1 2 3
//4 5 6
//7 8 9
//output:-
// 7 4 1
// 8 5 2
// 9 6 3

//Approach:- 
//1:We can clearly see in the input and output that the original matrix is being transposed and then each row 
//is reversed so we will also do the same.
//n=matrix.size();
//2.Tranpose the matrix: First for loop will run from i to n and second from j to i,but why because we only 
//want to swap the value once and also not swap the diagonal elements
//3.now run a for loop from i to n and reverse each of the array or vector present in the matrix.
//DONE :)


#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void rotate(vector<vector<int>>& matrix){
    int n=matrix.size();
    for(int i=0;i<n;i++){
        for (int j = 0; j < i; j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
}
void printMatrix(vector<vector<int>>& matrix){
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};
    printMatrix(matrix);
    rotate(matrix);
    printMatrix(matrix);
return 0;
}
 