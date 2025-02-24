#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums, int i, int j){

    if(i > j){
        return 0;
    }

    if(i == j){
        return nums[i];
    }

    int include_i = nums[i] + min(solve(nums, i+2, j), solve(nums, i+1, j-1));
    int include_j = nums[j] + min(solve(nums, i, j-2), solve(nums, i+1, j-1));

    return max(include_i, include_j);
}
int main(){

    vector<int> nums = {3, 7, 2, 3};

    int totalScore = 0;
    int n = nums.size();
    
    for(int i=0;i<n;i++){
        totalScore += nums[i];
    }


    int score_A = solve(nums, 0, n-1);

    if(totalScore - score_A < 0){
        cout<<"Lose"<<endl;
        return 0;
    }

    cout<<"Winner"<<endl;
}