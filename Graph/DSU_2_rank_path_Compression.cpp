#include<bits/stdc++.h>
using namespace std;

int find(int x, vector<int>& parent){

    if(x == parent[x]){
        return x;
    }

    return parent[x] = find(parent[x], parent);
}

void Union(int x, int y, vector<int> &parent, vector<int> &rank){

    int parent_x = find(x, parent);
    int parent_y = find(y, parent);

    if(parent_x != parent_y){

        if(rank[parent_x] > rank[parent_y]){
            parent[parent_y] = parent_x;
        }
        else if(rank[parent_x] < rank[parent_y]){
            parent[parent_x] = parent_y;
        }
        else{
            parent[parent_y] = parent_x;
            rank[parent_x]++;
        }
    }
}

int main(){

        vector<int> parent(7);
        vector<int> rank(7);

        for(int i=0;i<7;i++){
            parent[i] = i;
            rank[i] = 0;
        }

        vector<vector<int>> query = {{0,1},{1,2},{3,4},{5,6},{6,2}};

        for(int i=0;i<query.size();i++){
           
            int x = query[i][0];
            int y = query[i][1];
    
            Union(x, y, parent, rank);
        }

        for(int i=0;i<7;i++){
            cout<<parent[i]<<" ";
        }


}