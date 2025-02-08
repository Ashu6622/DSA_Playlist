#include<bits/stdc++.h>
using namespace std;

int m = 0;
int n = 0;

void solve(int i, int j, string &path, vector<vector<int>> &maze){

    
    if(i >= m || j >= n || i < 0 || j < 0 || maze[i][j] == 0){
        return;
    }

    if(i == m-1 && j == n-1){
        cout<<path<<endl;
        return;
    }

    int x = maze[i][j];
    maze[i][j] = 0;


    path.push_back('R');
    solve(i, j+1, path, maze);
    path.pop_back();

    path.push_back('D');
    solve(i+1, j, path, maze);
    path.pop_back();

    path.push_back('L');
    solve(i, j-1, path, maze);
    path.pop_back();

    path.push_back('U');
    solve(i-1, j, path, maze);
    path.pop_back();

    maze[i][j] = x;

}

int main(){

    vector<vector<int>> maze = {{1,1,1,0}, {1,1,1,0},{1,0,1,1}, {0,0,0,1}};

     m = maze.size();
     n = maze[0].size();

    string path = "";
    solve(0,0, path, maze);

}