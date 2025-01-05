#include<bits/stdc++.h>
using namespace std;

// Given an array nums of integers, return the length of the longest arithmetic subsequence in nums.

// Note that:

// A subsequence is an array that can be derived from another array by deleting some or no elements without changing the order of the remaining elements.
// A sequence seq is arithmetic if seq[i + 1] - seq[i] are all the same value (for 0 <= i < seq.length - 1).
 

// Example 1:

// Input: nums = [3,6,9,12]
// Output: 4
// Explanation:  The whole array is an arithmetic sequence with steps of length = 3.

int main(){

    vector<int> nums = {20,1,15,3,10,5,8};


    int n=nums.size();
        
        
        vector<vector<int>> t(n, vector<int>(1001,0));
        //t[i][j] = Max AP length till ith index (0 to i) having common difference j

        int result = 0;
        
        for (int i = 1; i<n; i++) {
            
            for (int j=0; j<i; j++) {
                
                int diff    = (nums[i] - nums[j]) + 500; //to avoid negative diff
                t[i][diff] = t[j][diff] > 0 ? t[j][diff] + 1 : 2;
                
                result = max(result, t[i][diff]);
            }
        }

        cout<<result<<endl;
}