#include<bits/stdc++.h>
using namespace std;

int solve(int index, vector<int> &jumps, vector<int> &dp){

    if(index >= jumps.size()-1){
        return true;
    }

    if(dp[index] != -1){
        return dp[index];
    }

    for(int i=1 ; i<=jumps[index] ; i++){

        bool ans = solve(index+i, jumps, dp);

        if(ans == true){
            dp[index] = true;
            return dp[index];
        }
    }

    dp[index] = false;
    return dp[index];
}
int main(){

        vector<int> jumps = {3, 2, 1, 0, 4};

        vector<int> dp(jumps.size(), -1);

        bool result = solve(0, jumps, dp);

        cout<<result<<endl;
}