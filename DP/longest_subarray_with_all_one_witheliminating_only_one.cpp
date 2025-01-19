#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums, int i, int length){

    if(i >= nums.size()){
        return length;
    }

    int maxLength = length;

    if(nums[i] == 0){
        int take = solve(nums, i+1, length);
        int nottake = solve(nums, i+1, 0);
        maxLength + max(take,nottake);

    }
        
}

int main(){

    vector<int> nums = {1,1,0,1};

    int result = solve(nums, 0, 0);

    cout<<result<<endl;
}