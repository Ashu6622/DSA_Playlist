#include<bits/stdc++.h>
using namespace std;

//  1)  create the matrix of same size
    // 2)  fill the first row and col of the matrix as it is, like grid
    // 3) Now start iterating from second row and col on the grid 
    // 4) if the current blokck have 0 , then fill the corresponding block with 0 in the created matrix, 
    // and if the block contain 1 then , find minimum from up, left and diagonal block of the created matrix
    // 5) Add alll non-zeros of the created matrix

int main(){

    vector<vector<int>> grid = {{1, 1, 1},
                                {1, 1, 1},
                                {1, 1, 1}};

                              int m = grid.size();
                              int n = grid[0].size();

    vector<vector<int>> dp(m, vector<int>(n,0));

    // fill the first column
    for(int i=0;i<m;i++){
        dp[i][0] = grid[i][0];
    }

    // fill the first row
    for(int i=0;i<n;i++){
        dp[0][i] = grid[0][i];
    }

    for(int i=1;i<m;i++){

        for(int j=1;j<n;j++){

                if(grid[i][j] != 0){

                    dp[i][j] = min(dp[i][j-1] , min(dp[i-1][j-1], dp[i-1][j])) + 1;
                }
        }
    }

    int countSquares = 0;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            countSquares += dp[i][j];
        }
    }

    cout<<countSquares<<endl;
    
}