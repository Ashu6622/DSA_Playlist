#include<bits/stdc++.h>
using namespace std;

void adjacencyList(vector<pair<int,int>> &arr, unordered_map<int,list<int>>& adjList){

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

int main(){

    int nodes = 0;
    cout<<"Enter the nodes"<<endl;
    cin>>nodes;

    int edges = 0;
    cout<<"Enter the Number of edges"<<endl;
    cin>>edges;

    vector<pair<int,int>> arr;
    
    cout<<"Enter the edges "<<endl;

    for(int i =0;i<edges;i++){

        int a = 0;
        int b = 0;
        cin>>a>>b;
        arr.push_back({a,b});
    }

    unordered_map<int,list<int>> adjList;

    adjacencyList(arr, adjList);

    printadjList(adjList);



}