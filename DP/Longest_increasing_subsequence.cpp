#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums, int index, int prevIndex){

    if(index >= nums.size()){
        return 0;
    }

    int take = 0;
    if(prevIndex == -1 || nums[prevIndex] < nums[index]){
        take = solve(nums, index+1, index)+1;
    }

    int skip = solve(nums, index+1, prevIndex);

    return max(skip, take);
}

int main(){
    vector<int> nums = {10,9,2,5,3,7,101,18};

    int result = solve(nums, 0, -1);

    cout<<result<<endl;
}