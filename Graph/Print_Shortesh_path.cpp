#include<bits/stdc++.h>
using namespace std;

// BFS traversal
// both for directed and undirected graph

void adjacency(vector<vector<int>> &edges, unordered_map<int, list<int>> &adjList){

    for(int i=0;i<edges.size();i++){

        int u = edges[i][0];
        int v = edges[i][1];

        adjList[u].push_back(v);
        // adjList[v].push_back(u);
    }
}

void BFS(int start, unordered_map<int, list<int>> &adjList,  unordered_map<int,int> visited, vector<int> &parent){

   queue<int> q;
   q.push(start);
   visited[start] = 1;
   parent[start] = -1;

   while(!q.empty()){

        int frontNode = q.front();
        q.pop();

        for(auto i:adjList[frontNode]){

            if(visited[i] == 0){
                parent[i] = frontNode;
                visited[i] = 1;
                q.push(i);
            }
        }
   }
}

int main(){
            
    vector<vector<int>> edges = {{0, 2}, {2, 4}, {4, 8}, {0, 1}, {1, 5}, {5, 6}, {6, 8}, {0, 3}, {3, 7}, {7, 8}};

    unordered_map<int, list<int>> adjList;
    adjacency(edges, adjList);

    unordered_map<int,int> visited;

    vector<int> parent(9);

    int s = 0;
    int e = 8;

    BFS(s,adjList, visited, parent);

    vector<int> path;

    int idx = 8;

    while(idx != -1){
        path.push_back(idx);
        idx = parent[idx];
    }

    for(int i=path.size()-1;i>=0;i--){
        cout<<path[i]<<" ";
    }
}