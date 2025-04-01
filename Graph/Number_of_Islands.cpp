#include<bits/stdc++.h>
using namespace std;

vector<int> X = {0,0,1,-1,-1,1,1,-1};
vector<int> Y = {1,-1,0,0,1,1,-1,-1};
int m ;
int n ;

void dfs(int i, int j, vector<vector<int>> &grid, vector<vector<int>> &visited){

    if(i < 0 || j < 0 || i >= m || j >= n || visited[i][j] == 1 || grid[i][j] == 0){
            return ;
    }

    visited[i][j] = 1;

    for(int k=0;k<8;k++){

        int x = i + X[k];
        int y = j + Y[k];

            dfs(x, y, grid, visited);
    }
}

int main(){

    vector<vector<int>> grid = {{0,1,1,0,1,0,0}, {0,0,1,1,0,1,0}};

    m = grid.size();
    n = grid[0].size();
    int cnt = 0;

    vector<vector<int>> visited(m, vector<int>(n, 0));

    for(int i=0;i<m;i++){

        for(int j=0;j<n;j++){

            if(grid[i][j] == 1 && visited[i][j] == 0){
                    dfs(i,j,grid, visited);
                    cnt++;
            }
                
        }
    }
    cout<<cnt<<endl;
}