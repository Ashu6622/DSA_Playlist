#include<bits/stdc++.h>
using namespace std;

int solve(int index, vector<int> &nums, vector<int> &dp){

    if(index >= nums.size()){
        return 0;
    }

    if(dp[index] != -1){
        return dp[index];
    }

    // add the current element
    int take = solve(index+2, nums , dp) + nums[index];

    // skip the current element and move to next element
    int nottake = solve(index+1, nums , dp);

    // return the maximum, which is by taking the current element or by skiping the current element 
    dp[index] = max(take, nottake);
    return max(take, nottake);
}


int main(){

    vector<int> nums = {1, 2, 3, 1, 3, 5, 8, 1, 9};

    vector<int> dp(nums.size()+1, -1);

    int result = solve(0,nums, dp);

    cout<<result<<endl;

}