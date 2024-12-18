#include<bits/stdc++.h>
using namespace std;

int solve(int index, vector<int> &jumps, vector<int> &dp){

    if(index == jumps.size()-1){
        return 0;
    }

    if(dp[index] != -1){
        return dp[index];
    }

    int step_1 = solve(index+1, jumps, dp) + abs(jumps[index] - jumps[index+1]);
    int step_2 = 0;

    if(index < jumps.size()-2){
        step_2 = solve(index+2, jumps, dp) + abs(jumps[index] - jumps[index+2]);
    }

    dp[index] = min(step_1, step_2);

    return min(step_1, step_2);
}

int main(){

    vector<int> jumps = {7, 4, 4, 2, 6, 6, 3, 4 };
    vector<int> dp(jumps.size()+1,-1);

    int result = solve(0,jumps, dp);

    cout<<result<<endl;
}