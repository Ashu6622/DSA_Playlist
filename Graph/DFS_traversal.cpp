#include<bits/stdc++.h>
using namespace std;

void adjacenyList(vector<pair<int,int>> &arr, unordered_map<int, list<int>> &adjList){

    for(int i=0;i<arr.size();i++){

        int u = arr[i].first;
        int v = arr[i].second;

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

}

void dfs(int node, unordered_map<int,list<int>> &adjList, unordered_map<int,int> &visited, vector<int> &output){

    output.push_back(node);
    visited[node] = 1;

    for(auto i : adjList[node] ){

        if(visited[i] == 0){
            dfs(i, adjList, visited, output);
        }
    }

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

    unordered_map<int,int> visited;
    vector<int> output;

    for(int i=0;i<nodes;i++){

        if(visited[i] == 0){
            dfs(i, adjList, visited, output);
        }
    }

    for(int i=0;i<output.size();i++){
        cout<<output[i]<<" ";
    }


      
}