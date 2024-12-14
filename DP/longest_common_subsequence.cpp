#include<bits/stdc++.h>
using namespace std;

int solve(string s, string t, int i ,int j, vector<vector<int>> &dp){
        
        // if index exceed then return
        if(i >= s.length() || j >= t.length()){
            return 0;
        }

        if(dp[i][j] != -1){
            return dp[i][j];
        }

        // if same then increase both the index with include the length

        if(s[i] == t[j]){
            return solve(s, t, i+1, j+1, dp) + 1;  //plus 1 because we got similar character
        }

        int first = solve(s, t, i+1, j, dp); 
        int second = solve(s, t, i, j+1, dp);

        dp[i][j] =  max(first, second); 

        return max(first,second);

}

int main(){

    string s = "adebc";
    string t = "dcadb";

    vector<vector<int>> dp(1001, vector<int>(1001,-1));

    int length = solve(s, t, 0,0, dp);

    cout<<length<<endl;


}