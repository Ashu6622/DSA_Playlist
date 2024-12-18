#include<bits/stdc++.h>
using namespace std;

// using LCS to get LPS
// make one extra string, which the reverse of main string, now perform the LCS on both the string, and the resultant length will the LPS

int solve(int i, int j, string s1, string s2, vector<vector<int>> &dp){

        //if any one of the string gets over then return 0, no more comparision
        if(i >= s1.length() || j >= s2.length()){
            return 0;
        }

        if(dp[i][j] != -1){
            return dp[i][j];
        }

        // if both the characters are same, then add 1 and incerase both the pointers
        if(s1[i] == s2[j]){
            dp[i][j] = solve(i+1,j+1, s1, s2, dp) + 1;
            return dp[i][j];
        }

        int index_i = solve(i+1, j, s1, s2, dp);
        int index_j = solve(i, j+1, s1, s2, dp);

        dp[i][j] = max(index_i, index_j);
        return max(index_i, index_j);


}

int main(){

        string s1 = "bbbab";
       string s2 = "";

       for(int i = s1.length()-1; i>=0;i--){

            s2 += s1[i];
       }

       vector<vector<int>> dp(s1.length()+1, vector<int>(s1.length(), -1));

        int result = solve(0, 0,s1, s2, dp);
        cout<<result<<endl;
}