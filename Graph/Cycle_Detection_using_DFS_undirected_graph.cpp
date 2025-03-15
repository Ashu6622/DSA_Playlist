#include<bits/stdc++.h>
using namespace std;

void adjacency(vector<vector<int>> &edges, unordered_map<int,list<int>> &adjList){

    for(int i=0;i<edges.size();i++){

        int u = edges[i][0];
        int v = edges[i][1];
        
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
}

bool isCycle(int node, int parent, unordered_map<int,list<int>> &adjList, unordered_map<int,int> &visited){

    visited[node] = 1;

    for(auto i : adjList[node]){

        if(visited[i] == 0){
            bool flag = isCycle(i, node, adjList,visited);
            if(flag){
                return true;
            }
        }
        else if(visited[i] == 1 && i != parent){
                return true;
        }
    }
    return false;
}

int main(){

    vector<vector<int>> edges = {{1,2},{2, 3}, {3,4}, {4,5}, {3,5} ,{2,6}};

    unordered_map<int,list<int>> adjList;
    adjacency(edges, adjList);
    
    unordered_map<int,int> visited;


    // for every nodes
    for(int i=1;i<=6;i++){

        if(visited[i] == 0){
            bool result = isCycle(i, -1, adjList, visited);
            if(result){
                cout<<"True :"<<endl;
                return 0;
            }
        }
    }

    cout<<"False :"<<endl;
}