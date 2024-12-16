#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> nums = {1,3,5,4,7};

    vector<int> dp(nums.size(), 1);
    int n = nums.size();

    for(int i=0;i<n;i++){

        for(int j=0;j<i;j++){

            if(nums[i] > nums[j] && dp[i] < dp[j]+1){
                dp[i] = dp[j]+1;
            }
        }
    }

    int maxLength = 1;

    for(int i=0;i<n;i++){

        if(dp[i] > maxLength){
            maxLength = dp[i];
        }
    }

    cout<<maxLength<<endl;
}