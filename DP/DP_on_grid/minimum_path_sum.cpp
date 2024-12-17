#include<bits/stdc++.h>
using namespace std;

int solve(int i , int j ,int m , int n , vector<vector<int>> &grid , vector<vector<int>> &dp){

            if(i >= m || j >= n){
                return INT_MAX;
            }

           if(i == m-1 && j == n-1){
                return grid[i][j];
           }

           if(dp[i][j] != -1){
             return dp[i][j];
           }

           int rightPath = solve(i,j+1, m, n, grid , dp);
           int downPath = solve(i+1,j, m, n, grid , dp);
            
           dp[i][j] = grid[i][j] + min(rightPath , downPath);

           return grid[i][j] + min(rightPath , downPath);


}

int main(){

    vector<vector<int>> grid = {{1,3,1},
                                {1,5,1},
                                {4,2,1}};


    int m = grid.size();
    int n = grid[0].size();

    vector<vector<int>> dp(m, vector<int>(n, -1));

    int result = solve(0,0,m,n,grid, dp);

    cout<<result<<endl;


}