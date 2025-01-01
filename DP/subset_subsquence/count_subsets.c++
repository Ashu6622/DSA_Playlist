#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& nums, int n, int index, int k, vector<vector<int>> &dp ){

    if(index == n){

        if(k == 0){
            return 1;
        }
        return 0;
    }

    if(dp[index][k] != -1){
        return dp[index][k];
    }


    int take = 0;
    if(k >= nums[index]){
        take = solve(nums, n, index+1, k-nums[index], dp); // this will also consider 0 , it will perform take and nottake operation on 0 as well, so the subsets with 0 will also be counted
    }

    int nottake = solve(nums, n, index+1, k, dp);

    dp[index][k] = take+nottake;
    return dp[index][k];
}

int main(){

    vector<int> nums = {1, 1, 1};
    int n = nums.size();
    int k = 2;
    vector<vector<int>> dp(n+1, vector<int>(k+1,-1));
    int result = solve(nums,n,0,k,dp);
    cout<<result<<endl;
}