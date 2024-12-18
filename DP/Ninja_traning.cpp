#include<bits/stdc++.h>
using namespace std;

int solve(int row, int prev, vector<vector<int>> &grid, vector<vector<int>> &dp){

        if(row >= grid.size()){
            return 0;
        }

        if(prev != -1 && dp[row][prev] != -1){
            return dp[row][prev];
        }

        int maximum = 0;

        for(int i=0;i<3;i++){

            if(prev == -1 || prev != i){
             int take = solve(row+1,i,grid, dp) + grid[row][i];
             maximum = max(maximum , take);
            }
        }

        if(prev != -1){
            dp[row][prev] = maximum;
        }
        return maximum;
}

int main(){

        vector<vector<int>> grid = {{1,2,5},{3 ,1 ,1} ,{3,3,3}};

        vector<vector<int>> dp(grid.size()+1, vector<int>(3,-1));
        int result = solve(0,-1,grid, dp);

        cout<<result<<endl;
}