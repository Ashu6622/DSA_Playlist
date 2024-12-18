  #include<bits/stdc++.h>
  using namespace std;


  int solve(int i, int j, string &str, vector<vector<int>> &dp){

    if(i>j){   //crosses each other
            return 0;
    }

    if(dp[i][j] != -1){
        return dp[i][j];
    }


    // if same character then, nothing to insert update both the pointers 
        if(str[i] == str[j]){
            dp[i][j] = solve(i+1,j-1, str, dp);
            return dp[i][j];
        }

    // if the characters are not same then, 
    // first move from left and check, then move from right and check minimum insertion

    int include_i = solve(i+1, j, str, dp)+1;
    int include_j = solve(i, j-1,str, dp)+1;

    dp[i][j] = min(include_i, include_j); 
    return min(include_i, include_j); 

  }

  int main(){

    string str = "zzaztz";

    vector<vector<int>> dp(str.length()+1, vector<int>(str.length(), -1));

    int result = solve(0,str.length()-1,str, dp);

    cout<<result<<endl;

      
  }