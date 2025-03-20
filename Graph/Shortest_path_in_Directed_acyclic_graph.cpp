#include<bits/stdc++.h>
using namespace std;

// this can be done using Topological sort

void adjacency(vector<vector<int>> &edges , unordered_map<int,list<pair<int,int>>> &adjList){

        for(int i=0;i<edges.size();i++){

            int u = edges[i][0];
            int v = edges[i][1];
            int weight = edges[i][2];

            adjList[u].push_back({v, weight});
        }
}

void topoSort(int node, unordered_map<int,list<pair<int,int>>>& adjList, stack<int> &st, unordered_map<int,int> &visited ){

        visited[node] = 1;

        for(auto it:adjList[node]){
            
            if(visited[it.first] == 0){
                topoSort(it.first, adjList, st, visited);
            }
        }

        st.push(node);

}

void BFS(int src, stack<int>& st, vector<int> &dist,  unordered_map<int, list<pair<int, int>>> &adjList){

        dist[src] = 0;

        while(!st.empty()){

            int node = st.top();
            st.pop();
            cout<<node<<" ";
            if(dist[node] != INT_MAX){
                
                // iterate through all its adjacency list
                // cout<<node<<" ";
                for(auto i:adjList[node]){

                    if(dist[node] + i.second < dist[i.first]){
                        // cout<<"* ";
                            dist[i.first] = dist[node] + i.second;
                    }
                }
            }
        }
        cout<<endl;
}

int main(){

    vector<vector<int>> edges = {{0,1,5},
    {0,2,3},
    {1,2,2},
    {1,3,6},
    {2,3,7},
    {2,4,4},
    {2,5,2},
    {3,4,-1},
    {4,5,-2}};

    unordered_map<int,list<pair<int,int>>> adjList;

    adjacency(edges, adjList);

    stack<int> st;
    unordered_map<int, int> visited;

    for(int i=0;i<=5;i++){

        if(visited[i] == 0){
            topoSort(i, adjList, st, visited);
        }
    }

    vector<int> dist(6, INT_MAX);
    
    int src = 1;

    BFS(src, st, dist, adjList);

    for(int i=0;i<dist.size();i++){
        cout<<dist[i]<<" ";
    }
   
         
}