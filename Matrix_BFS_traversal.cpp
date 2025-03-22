#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<vector<int>> matrix = {
    {1,2,3},
    {4,5,6},
    {7,8,9}};

    int m = matrix.size();
    int n = matrix[0].size();

    vector<int> X = {0,0,-1,1};
    vector<int> Y = {1,-1, 0,0};

    queue<pair<int,int>> q;
    vector<vector<int>> visited(m, vector<int>(n,-1));
    q.push({0,0});
    visited[0][0] = 1;

    while(!q.empty()){

        auto top = q.front();
        q.pop();
        
        cout<<top.first<<" "<<top.second<<endl;

        for(int i=0;i<4;i++){

            int x = top.first + X[i];
            int y = top.second + Y[i];

            if(x >= 0 && y >= 0 && x < m && y < n && visited[x][y] == -1){

                q.push({x,y});
                visited[x][y] = 1;

            }
        }

    }
}