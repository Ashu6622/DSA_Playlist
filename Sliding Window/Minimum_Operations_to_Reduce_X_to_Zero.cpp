#include<bits/stdc++.h>
using namespace std;

// Very Important Problem

int longestSubarray(vector<int>& nums, int k){

    if(k == 0){
        return 0;
    }

    int i = 0;
    int j = 0;
    int maxlength = INT_MIN;
    int sum = 0;

    while(j < nums.size()){

            sum += nums[j];

            while(sum > k && j > i){
                sum -= nums[i];
                i++;
            }

            if(sum == k){
                maxlength = max(maxlength, j-i+1);
            }

            j++;
    }

    return maxlength;

}

int main(){

    vector<int> nums = {5,6,7,8,9};

    int  k = 4;

    int sum = 0;

    for(int i=0;i<nums.size();i++){
        sum += nums[i];
    }


    int X = sum - k;

    int length = longestSubarray(nums, X);

    if(length == INT_MIN){
        cout<<-1<<endl;
        return 0;
    }

    cout<<nums.size() - length<<endl;

}