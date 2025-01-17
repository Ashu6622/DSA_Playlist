#include<bits/stdc++.h>
using namespace std;

int solve(int index, vector<int>& nums, int k){

        if(index >= nums.size()){
            return 0;
        }


        int take = solve(index+1, nums, k) + nums[index];
        int nottake = INT_MIN;
        if(nums[index] < 0 && k > 0){
            nottake = solve(index+1, nums, k-1);
        }

        return max(take, nottake);
}
int main(){

    vector<int> nums = {1, 2, 5, 6, 3, 5};
    int k = 1;

    int result = solve(0,nums, k);

    cout<<result<<endl;
}