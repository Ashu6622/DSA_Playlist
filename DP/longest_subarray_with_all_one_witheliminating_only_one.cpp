#include<bits/stdc++.h>
using namespace std;

 int solve(vector<int> &nums, int  i, int k, int length){

        if(i >= nums.size()){
            return length;
        }


        int maxLength = length;

        if(nums[i] == 1){
            maxLength = solve(nums, i+1, k, length+1);
        }
        else if(nums[i] == 0 && k > 0){
            int take = solve(nums, i+1, k, 0);
            int nottake = solve(nums, i+1, k-1, length);
            maxLength = max({maxLength, take, nottake});
        }

        return maxLength;
    }

int main(){

    vector<int> nums = {1,1,1};

    int result = solve(nums, 0, 1, 0);

     if(result == nums.size()){
            result = result -1;
        }

    cout<<result<<endl;
}