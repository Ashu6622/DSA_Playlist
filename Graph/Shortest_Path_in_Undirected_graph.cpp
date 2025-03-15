#include<bits/stdc++.h>
using namespace std;

void adjacenyList(vector<pair<int,int>> &arr, unordered_map<int,list<int>> &adjList){

    for(int i=0;i<arr.size();i++){

        int u = arr[i].first;
        int v = arr[i].second;

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
}

void printadjList(unordered_map<int,list<int>>& adjList){

    cout<<endl;
    for(auto &it : adjList){
        cout<<it.first<<" -> ";
        for(auto &i : it.second){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}


void shortestPath(int node, int end, unordered_map<int,int> &visited, unordered_map<int, list<int>> &adjList, int path, int&minPath){

    if(node == end){
        minPath = min(minPath, path);
        return;
    }
    visited[node] = 1; 
        for(auto i:adjList[node]){

            if(visited[i] == 0){
                shortestPath(i, end, visited, adjList, path+1, minPath);
            }
        }

        visited[node] == 0;
        
}

int main(){

    int nodes = 0;
    cout<<"Enter the nodes :"<<endl;
    cin>>nodes;

    int edges = 0;
    cout<<"Enter the Number of edges :"<<endl;
    cin>>edges;

    vector<pair<int,int>> edgeList;

    cout<<"Enter the Edges"<<endl;

    for(int i=0;i<edges;i++){
        int a = 0;
        int b = 0;
        cin>>a>>b;
        edgeList.push_back({a,b});
    }

    unordered_map<int,list<int>> adjList;
    adjacenyList(edgeList, adjList);

    printadjList(adjList);

    unordered_map<int,int> visited;

    int start = 1;
    int end = 6;

    int minPath = INT_MAX;;
    shortestPath(start, end,  visited, adjList, 0, minPath);

    cout<<endl;

    cout<<minPath<<endl;
    
}