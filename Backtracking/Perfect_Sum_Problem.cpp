#include<bits/stdc++.h>
using namespace std;

// Given an array arr of non-negative integers and an integer target, the task is to count all subsets of the array whose sum is equal to the given target.

int solve(int index, int sum, vector<int> &nums, int n, int k){

    if(index == n){
        
        if(sum == k){
            return 1;
        }

        return 0;
    }

    int take = 0;

    if(sum + nums[index] <= k){
        take = solve(index+1, sum+nums[index], nums, n, k);
    }

    int nottake = solve(index+1, sum, nums, n, k);

    return take + nottake;
}

int main(){

    vector<int> nums = {5,2,3,10,6,8};

    int k = 10;
    int count = 0;
    int n = nums.size();

    int result = solve(0, 0, nums, n, k);

    cout<<result<<endl;


}