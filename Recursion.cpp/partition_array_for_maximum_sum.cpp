#include<bits/stdc++.h>
using namespace std;

int solve(int idx, vector<int>& nums, int k){

    if(idx == nums.size()){
        return 0;
    }


    int currMax = 0;
    int maxSum = 0;

    for(int i=idx ; i < idx+k && i < nums.size() ; i++){
            currMax = max(currMax, nums[i]);
            int sum = currMax* (i - idx +1) + solve(i+1,nums, k);
            maxSum = max(maxSum, sum);
            cout<<currMax<<" "<<sum<<" "<<maxSum<<endl;
    }

    return maxSum;
}

int main(){

    vector<int> nums = {1, 15, 7, 9};
    int k = 2;

    int result = solve(0, nums, k);

    cout<<result<<endl;
}