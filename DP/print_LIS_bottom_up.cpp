#include<bits/stdc++.h>
using namespace std;

// approach using bottom up , with back tracking the indexs of the sequence

int main(){

        vector<int> nums = {5,5,5,5,5,5,5};

        int n = nums.size();
        vector<int> dp(n,1);
        vector<int> hash(n,-1);

        for(int i=0;i<n;i++){

            for(int j=0;j<i;j++){

                if(nums[i] > nums[j] && dp[i] < dp[j]+1){
                    dp[i] = dp[j]+1;
                    hash[i] = j; 
                }
            }
        }

        int maxlength = 1;
        int startIndex = 0;
        for(int i=0;i<n;i++){

                if(dp[i] > maxlength){
                    maxlength = dp[i];
                    startIndex = i;
                }
        }

        vector<int> output;

        while(startIndex != -1){

            output.push_back(nums[startIndex]);

            startIndex = hash[startIndex];
        }

        reverse(output.begin(), output.end());

        for(int i=0;i<output.size();i++){
            cout<<output[i]<<" ";
        }
}