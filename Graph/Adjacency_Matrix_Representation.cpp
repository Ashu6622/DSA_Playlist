#include<bits/stdc++.h>
using namespace std;

// undirected graph

void adjacencyMatrix(vector<pair<int,int>> &arr, vector<vector<int>> &adjMat){

    for(int i=0;i<arr.size();i++){
        int u = arr[i].first;
        int v = arr[i].second;

        adjMat[u][v] = 1;
        //adjMat[v][u] = 1; //by commenting this line the graph will become directed
    }
}

void printadjMat(vector<vector<int>> &adjMat){

    for(int i=0;i<adjMat.size();i++){

        for(int j=0;j<adjMat[0].size();j++){
            cout<<adjMat[i][j]<<" ";
        }

        cout<<endl;
    }
}

int main(){

    int nodes = 0;
    cout<<"Enter the nodes"<<endl;
    cin>>nodes;
    
    int edges = 0;

    cout<<"Enter number of edges"<<endl;
    cin>>edges;

    vector<pair<int,int>> arr;

    cout<<"Enter edges"<<endl;

    for(int i =0;i<edges;i++){
        int a = 0;
        int b = 0;
        cin>>a>>b;
        arr.push_back({a,b});
    }

    vector<vector<int>> adjMat(nodes, vector<int>(nodes,0));

    adjacencyMatrix(arr, adjMat);

    printadjMat(adjMat);
}