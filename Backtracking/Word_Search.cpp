#include<bits/stdc++.h>
using namespace std;


bool solve(vector<vector<char>>& grid, string word, int i, int j, int idx){

    if(idx == word.length()){
        cout<<idx<<endl;
        return true;
    }

    if(i >= grid.size() || j >= grid[0].size() || j < 0 || i < 0 || grid[i][j] == '$'){
        return false;
    }

    if(grid[i][j] != word[idx]){
            return false;
    }

    char ch = grid[i][j];
    grid[i][j] = '$';

    bool right = solve(grid, word, i, j+1, idx+1);
    if(right){
        return true;
    }
    bool down = solve(grid, word, i+1, j, idx+1);
    if(down){
        return true;
    }
    bool left = solve(grid, word, i, j-1, idx+1);
    if(left){
        return true;
    }
    bool up = solve(grid, word, i-1, j, idx+1);
    if(up){
        return true;
    }

    grid[i][j] = ch;

    return right || left || down || up;
}

int main(){

    vector<vector<char>> grid = {{'A','B','C','E'},{'S', 'F', 'C', 'S'},{'A', 'D', 'E', 'E'}};
    int m = grid.size();
    int n = grid[0].size();

    string word = "SEE";

    // we will check and start iteration from every block

    bool isPresent = false;

    for(int i = 0 ; i<m ; i++){

        for(int j = 0; j<n ; j++){

            if(grid[i][j] == word[0]){
                isPresent = solve(grid, word, i, j,0);
            }

            if(isPresent){
                cout<<"Present"<<endl;
                return 0;
            }
        }
    }

    cout<<"Not Presnet"<<endl;
    
}