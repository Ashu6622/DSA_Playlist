#include<bits/stdc++.h>
using namespace std;

void adjacency(vector<vector<int>> &edges, unordered_map<int,list<int>> &adjList){

    for(int i=0;i<edges.size();i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adjList[u].push_back(v);
    }
}

void topoSort(int node, unordered_map<int,list<int>> &adjList, stack<int>& st, unordered_map<int,int>& visited){

    visited[node] = 1;

    for(auto i : adjList[node]){

        if(visited[i] == 0){
                topoSort(i, adjList, st, visited);       
        }
    }

    st.push(node);
}

int main(){

    vector<vector<int>> edges = {{1,2},{1,3},{2,5},{3,5},{5,4}};

    unordered_map<int,list<int>> adjList;

    adjacency(edges, adjList);

    unordered_map<int,int> visited;
    stack<int> st;

    for(int i=1;i<=5;i++){

        if(visited[i] == 0){
            topoSort(i, adjList, st, visited);
        }
    }

    vector<int> arr;

    while(!st.empty()){

        arr.push_back(st.top());
        st.pop();
    }

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}