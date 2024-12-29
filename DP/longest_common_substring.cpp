#include<bits/stdc++.h>
using namespace std;

// solving this problem using recursion

int solve(int i, int j, string &s1, string &s2, int count, map<string,int> &dp){

    if(i >= s1.length() || j >= s2.length()){
            return count;
    }

    string key = to_string(i) + "-" + to_string(j) + "-" + to_string(count);

    if(dp.find(key) != dp.end()){
        return dp[key];
    }
   
    int maxLength = count;  //in substring the continues index must be taken


    // if the characters are same then increase the count by 1, this can be the part of substring
    if(s1[i] == s2[j]){
            maxLength = solve(i+1,j+1,s1,s2,count+1, dp);
    }

    // if not same then the previous substring which were same , can not be the part of upcoming coomon substring, so count = 0
    int include_i = solve(i+1, j, s1,s2,0, dp);
    int include_j = solve(i, j+1, s1,s2,0, dp);


    dp[key] = max(maxLength, max(include_i, include_j));

    return dp[key];

}
int main(){

        string s1 = "pban";
        string s2 = "pcan";

        map<string,int> dp;


        int result = solve(0,0,s1,s2, 0,dp);

        cout<<result<<endl;
}