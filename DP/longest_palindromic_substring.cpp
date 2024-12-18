#include<bits/stdc++.h>
using namespace std;

// check recursively

bool isPalindrome(int start, int end , string &str, vector<vector<int>> &dp){

        if(start > end){
            return true;
        }

        if(dp[start][end] != -1){
            return dp[start][end];
        }

        if(str[start] == str[end]){
            dp[start][end] = isPalindrome(start+1, end-1, str, dp);
            return dp[start][end];
        }

        dp[start][end] =  false;
        return dp[start][end];
}

int main(){

    string str = "ababc";

    vector<vector<int>> dp(str.length()+1 , vector<int>(str.length()+1, -1));

    int startIndex = 0;
    int maxlength = 0;

    // generate all the sub string, and check wheather it is palindrome or not

    for(int i=0;i<str.length();i++){

        for(int j=i;j<str.length();j++){

            if(isPalindrome(i,j,str, dp)){

                    if(j - i + 1 > maxlength){
                        startIndex = i;
                        maxlength = j - i + 1;
                    }
            }
        }
    }

    string ans = str.substr(startIndex , maxlength);
    cout<<ans<<endl;
}