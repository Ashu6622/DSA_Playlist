#include<bits/stdc++.h>
using namespace std;

bool canPlace(vector<string> &board, int row, int col, int n){

    for(int i=row;i>=0;i--){  //for row
        if(board[i][col] == 'Q'){
            return false;
        }
    }
    int k = col;
    for(int j=row ; j>=0 && k<n ; j--, k++){  //for right column
            if(board[j][k] == 'Q'){
                return false;
            }
    }
    
    k = col;
    for(int j=row ; j>=0 && k>=0 ; j--, k--){  //for left column
        if(board[j][k] == 'Q'){
            return false;
        }
    }

    return true;
}

void solve(int r_index, vector<string> &board, int n){

    if(r_index >= n){
        
        for(int i=0;i<n;i++){
            cout<<board[i]<<endl;
        }
        cout<<endl;
        return;
    }

    for(int i=0; i<n; i++){  //column iteration

        if(canPlace(board,r_index, i, n)){ //we will only call the function for next row if we can place the queen in the current row

            board[r_index][i] = 'Q';
            solve(r_index+1, board, n);
            board[r_index][i] = '.';
        }
    
        }
}

int main(){
     
    int n = 4;

    vector<string> board(n, string(n, '.'));

    solve(0, board, n);
}