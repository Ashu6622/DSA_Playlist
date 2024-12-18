#include<bits/stdc++.h>
using namespace std;

int solve(int steps, int n, vector<int> &dp){

    if(steps == n){
        return 1;
    }

    if(steps > n){
        return 0;
    }

    if(dp[steps] != -1){
        return dp[steps];
    }

    int step_1 = solve(steps+1, n, dp);
    int step_2 = solve(steps+2, n, dp);

    dp[steps] = step_1 + step_2;

    return step_1 + step_2;
}
int main(){
    int n = 35;

    vector<int> dp(n+1, -1);

    int result = solve(0,n, dp);

    cout<<result<<endl;
}