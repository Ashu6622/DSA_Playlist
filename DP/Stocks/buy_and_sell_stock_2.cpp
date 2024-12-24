#include<bits/stdc++.h>
using namespace std;

int solve(int index, vector<int>& prices, int buy, vector<vector<int>> &dp){

    if(index >= prices.size()){
        return 0;
    }

    int profit = INT_MIN;

    if(dp[index][buy] != -1){
        return dp[index][buy];
    }

    if(buy){
        int buy_it = solve(index+1,prices, 0, dp) - prices[index];
        int not_buy = solve(index+1, prices, 1, dp);
        profit = max(buy_it , not_buy);
    }
    else{
        int sell = solve(index+1, prices, 1, dp) + prices[index];
        int not_sell = solve(index+1, prices, 0, dp);
        profit = max(sell , not_sell);
    }

    dp[index][buy] = profit;

    return profit;
}

int main(){

    vector<int> prices = {3,2,6,5,0,3};
    int n = prices.size();
    vector<vector<int>> dp(n , vector<int>(2,-1));

    int totalprofit = solve(0, prices,1, dp);

    cout<<totalprofit<<endl;
}