#include<bits/stdc++.h>
using namespace std;

int solve(int index, string& s, vector<int> &dp){

    if(index == s.length()){
        return 0;
    }

    if(dp[index] != -1){
        return dp[index];
    }

    int take = solve(index+1, s, dp) + 1;

    int nottake = solve(index+1,s, dp);

    dp[index] = take + nottake;

    return take + nottake;
}
int main(){
    string s = "abcdefghijklmnopqrstuvwxyz";

    vector<int> dp(s.length()+1, -1);

    int result = solve(0, s, dp);

    cout<<result<<endl;
}