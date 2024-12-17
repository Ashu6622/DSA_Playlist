#include<bits/stdc++.h>
using namespace std;

// starting point (0,0)
// ending point (m-1,n-1)

// we have to find the total paths through which we can reach the end

int solve(int i,int j, int m, int n , vector<vector<int>> &dp){

    if(i>=m || j>=n){  
        return 0;  //if we reach out of bound, so there is no path return 0;
    }

    if(i == m-1 && j == n-1){
        return 1;  //if we reach the end, then we have discover one path so return 1
    }

    if(dp[i][j] != -1){
        return dp[i][j];
    }

    int rightPath = solve(i, j+1 , m , n , dp);
    int downPath = solve(i+1, j , m , n , dp);

    dp[i][j] = rightPath+downPath;

    return rightPath+downPath;
}


int main(){

    int m = 3;
    int n = 7;

    vector<vector<int>> dp(m, vector<int>(n,-1));

    int result = solve(0,0,m,n, dp);

    cout<<result<<endl;
}