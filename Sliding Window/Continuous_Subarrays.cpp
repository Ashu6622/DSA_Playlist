// You are given a 0-indexed integer array nums. A subarray of nums is called continuous if:

// Let i, i + 1, ..., j be the indices in the subarray. Then, for each pair of indices i <= i1, i2 <= j, 0 <= |nums[i1] - nums[i2]| <= 2.
// Return the total number of continuous subarrays.

// A subarray is a contiguous non-empty sequence of elements within an array.

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    vector<int> nums = {1,2,3};

    map<int,int> mp;

    int i=0;
    int j=0;
    int n = nums.size();

    ll countSubarray = 0;

    while(j < n){
         mp[nums[j]]++;

         while(mp.size() >= 1 && abs(mp.begin()->first - mp.rbegin()->first) > 2){

                mp[nums[i]]--;

                if(mp[nums[i]] == 0){
                    mp.erase(nums[i]);
                }
                i++;
         }

         countSubarray += j-i+1;

         j++;
    }

    cout<<countSubarray<<endl;
}