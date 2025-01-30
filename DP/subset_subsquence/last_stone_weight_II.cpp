#include<bits/stdc++.h>
using namespace std;

int solve(int index, int sum, int targetSum, vector<int> &nums, vector<vector<int>> &dp){

    if(index >= nums.size()){
        return sum;
    }

    if(dp[index][sum] != -1){
        return dp[index][sum];
    }

    int take = sum;

    if(sum + nums[index] <= targetSum){
            take = solve(index+1, sum + nums[index], targetSum, nums, dp);
    }

    int nottake = solve(index+1, sum, targetSum, nums, dp);

    dp[index][sum] = max(take, nottake);
    return dp[index][sum];
}

int main(){

        vector<int> nums = {31,26,33,21,40};

        int n = nums.size();

        int sum = 0;

        for(int i=0;i<n;i++){
            sum += nums[i];
        }

        int targetSum = sum/2;  //find the subset with sum equal to or less then targetSum

        vector<vector<int>> dp(n+1, vector<int>(targetSum+1,-1));
        int result = solve(0, 0, targetSum, nums, dp);

        int ans = sum - 2*result;

        cout<<ans<<endl;
}