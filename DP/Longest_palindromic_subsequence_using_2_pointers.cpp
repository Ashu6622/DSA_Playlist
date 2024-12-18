#include<bits/stdc++.h>
using namespace std;

int solve(string str,int start, int end, vector<vector<int>> &dp){
     
     if(start > end){
        return 0;
     }

     if(start == end){
        return 1;                  //single character, when pointers are on same index
     }

     if(dp[start][end] != -1){
        return dp[start][end];
     }


     if(str[start] == str[end]){
        dp[start][end] = solve(str, start+1, end-1, dp) + 2;  //if both the s are same then the length will be 2, as there are two characters which are same
        return dp[start][end];
     }

     int left = solve(str, start+1, end, dp);
     int right = solve(str, start, end-1, dp);

     dp[start][end] = max(left, right);

     return max(left, right);
}

int main(){
    string str = "abcaa";

    vector<vector<int>> dp(str.length()+1, vector<int>(str.length(), -1));

    int result = solve(str,0,str.length()-1, dp);

    cout<<result<<endl;
}