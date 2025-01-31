#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& nums, int k){

    int n = nums.size();
    vector<int> prefixSum(n);

    int j=0;
    int minlength = INT_MAX;
    deque<int> dq;

    while(j < n){

        if(j == 0){
            prefixSum[0] = nums[0];
        }
        else{
            prefixSum[j] = prefixSum[j-1] + nums[j]; 
        }

        if(prefixSum[j] >= k){
            minlength = min(j+1, minlength);
        }

        while(!dq.empty() && prefixSum[j]-prefixSum[dq.front()] >= k){
            minlength = min(j-dq.front(), minlength);
            dq.pop_front();
            
        }

        while(!dq.empty() && prefixSum[dq.back()] >= prefixSum[j]){
            dq.pop_back();
        }

        dq.push_back(j);
        j++;
    }

    return minlength;
}

int main(){

        vector<int> nums = {84,-37,32,40,95};
        int k = 167;

        int ans = solve(nums, k);

        cout<<ans<<endl;
}