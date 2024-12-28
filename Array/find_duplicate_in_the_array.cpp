// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

// There is only one repeated number in nums, return this repeated number.

// You must solve the problem without modifying the array nums and using only constant extra space.

 

// Example 1:

// Input: nums = [1,3,4,2,2]
// Output: 2

// Example 3:

// Input: nums = [3,3,3,3,3]
// Output: 3

#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> nums = {4,2,1,3,4};

    int slow = 0;
    int fast = 0;

    do{
        slow = nums[slow];
        fast = nums[nums[fast]];
    }while(slow!=fast);

    fast = 0;

    while(fast != slow){
        slow = nums[slow];
        fast = nums[fast];
    }

    cout<<slow<<endl;
}