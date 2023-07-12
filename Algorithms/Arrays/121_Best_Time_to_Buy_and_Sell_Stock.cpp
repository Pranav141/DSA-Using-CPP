// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int maxProfit(vector<int>& prices) {
        int prev=prices[0];
        int profit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<prev){
                prev=prices[i];
            }
            profit=prices[i]-prev>profit?prices[i]-prev:profit;
        }
        return profit;
    }
int main(){
    vector<int> prices={7,1,5,3,6,4};
    int result=maxProfit(prices);
    cout<<result;
    return 0;
}