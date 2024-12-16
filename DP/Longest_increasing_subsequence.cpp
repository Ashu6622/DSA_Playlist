#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums, int index, int prevIndex, vector<vector<int>> &dp){

    if(index >= nums.size()){
        return 0;
    }

    if(prevIndex != -1 && dp[index][prevIndex] != -1){
        return dp[index][prevIndex];
    }

    int take = 0;
    if(prevIndex == -1 || nums[prevIndex] < nums[index]){
        take = solve(nums, index+1, index, dp)+1;
    }

    int skip = solve(nums, index+1, prevIndex, dp);

    if(prevIndex != -1){
        dp[index][prevIndex] = max(skip, take);
    }

    return max(skip, take);
}

int main(){
    vector<int> nums = {5,5,5,5,5,5};

    vector<vector<int>> dp(nums.size()+1, vector<int>(nums.size()+1, -1));
    int result = solve(nums, 0, -1, dp);

    cout<<result<<endl;
}