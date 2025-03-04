#include<bits/stdc++.h>
using namespace std;

int solve(int idx, vector<int>& preSum, vector<int>& nums, int M, vector<vector<int>> &dp){

    if(idx >= preSum.size()){
        return 0;
    }

    if(dp[idx][M] != -1){
        return dp[idx][M];
    }

    int take = 0;

    if(M > 0){
        take = preSum[idx] + solve(idx+1, preSum, nums, M-1, dp);
    }

    int skip = 0 + solve(idx+1, preSum, nums, M, dp);

    dp[idx][M] = max(skip, take);
    return dp[idx][M];
}

int main(){

    vector<int> nums = {2, 10, 7, 18, 5, 33, 0};

    int M = 3;
    int K = 1;

    // M = number of non-overlapping subarrays;
    // K = length of each subarrays;

    // using DP approach 0/1 knapsack (take / nottake);
    // here take the current subarray or skip the current subarray

    int n = nums.size();

    vector<int> preSum(n-K+1);

    int sum = 0;

    for(int i=0;i<K;i++){
        sum += nums[i];
    }

    preSum[0] = sum;
    int idx = 1;

    for(int i=K, j=0;i<n;i++,j++){

        sum += nums[i] - nums[j];
        preSum[idx] = sum;
        idx++;
    }

    vector<vector<int>> dp(preSum.size()+1, vector<int>(M+1,-1));

    int result = solve(0, preSum, nums, M, dp);

    cout<<result<<endl;

}