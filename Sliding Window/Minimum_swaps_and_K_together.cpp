#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> nums = {2, 1, 5, 6, 3};
    int k = 3;

    int minLength = 0;

    for(int i=0;i<nums.size();i++){
        if(nums[i] <= k){
            minLength++;
        }
    }

    int i=0;
    int j=0;
    int cnt = 0;
    int minSwap = INT_MIN;

    // find subarray of length k having maximum number of elements <= k

    while(j < nums.size()){

        if(nums[j] <= k){
            cnt++;
        }

        if(j - i + 1 == minLength){
            minSwap = max(minSwap , cnt);
            if(nums[i] <= k){
                cnt--;
            }
            i++;
        }

        j++;
    }

    minSwap = minLength - minSwap;

    cout<<minSwap<<endl;
}