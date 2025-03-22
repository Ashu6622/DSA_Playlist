#include<bits/stdc++.h>
using namespace std;

int find(int x, vector<int> &parent){

    if(x == parent[x]){
        return x;
    }

    return parent[x] = find(parent[x], parent);
}

int Union(int x, int y, int wt, vector<int> &parent, vector<int> &rank){

    int parent_x = find(x, parent);
    int parent_y = find(y, parent);

    if(parent_x == parent_y){
        return 0;
    }

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

    return wt;
}
int main(){

    vector<vector<int>> edges = {{0, 1, 5},
        {1, 2, 3},
        {0, 2, 1}};
    
    sort(edges.begin(), edges.end(), [](auto &i, auto &j){
            return i[2] < j[2];
    });

    int V = 3;

    vector<int> parent(V);
    vector<int> rank(V);

    for(int i=0;i<parent.size();i++){
            parent[i] = i;
            rank[i] = -1;
    }

    int totalWeight = 0;

    for(int i=0;i<edges.size();i++){

       int sum =  Union(edges[i][0], edges[i][1], edges[i][2], parent, rank);

       totalWeight += sum;
    }

    cout<<totalWeight<<endl;
}