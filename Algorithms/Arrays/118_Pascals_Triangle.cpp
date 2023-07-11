//URL:-https://leetcode.com/problems/pascals-triangle/description/
//Soln:-https://leetcode.com/problems/pascals-triangle/submissions/991727526/
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
vector<vector<int>> generate(int numRows) {
        if(numRows==0){
            return {};
        }
        vector<vector<int>> result;
        for(int i=1;i<=numRows;i++){
            vector<int> temp(i,1);
            for(int j=0;j<i;j++){
                if(j==0 || j==i-1){
                    temp[j]=1;
                }
                else{
                    temp[j]=result[i-2][j-1]+result[i-2][j];
                }
            }
            result.push_back(temp);
        }
        return result;
    }
int main(){
    int numRows;
    cin>>numRows;
    vector<vector<int>> result=generate(numRows);
    printMatrix(result);

return 0;
}