#include<bits/stdc++.h>
using namespace std;

// undirected graph

void adjacenyList(vector<pair<int,int>> &arr, unordered_map<int, list<int>> &adjList){

    for(int i=0;i<arr.size();i++){

        int u = arr[i].first;
        int v = arr[i].second;

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

}

    bool detectCycle(unordered_map<int, list<int>> &adjList, unordered_map<int,int>& visited,  int node){

    unordered_map<int,int> parentNode;

    queue<int> q;
    q.push(node);
    visited[node] = 1;
    parentNode[node] = -1;

    while(!q.empty()){

        int pnt = q.front();
        q.pop();
        
        for(auto i:adjList[pnt]){

            if(visited[i] == 0){
                parentNode[i] = pnt;
                q.push(i);
                visited[i] = 1;
            }
            else if(visited[i] == 1 && parentNode[pnt] != i){
                return true;
            }
        }

    }

    return false;
}

int main(){

    int nodes = 0;
    cout<<"Enter the nodes :"<<endl;
    cin>>nodes;

    int edges = 0;
    cout<<"Enter the Number of edges :"<<endl;
    cin>>edges;

    vector<pair<int,int>> EdgesList;

    cout<<"Enter the edges :"<<endl;

    for(int i=0;i<edges;i++){
        int a = 0;
        int b = 0;
        cin>>a>>b;
        EdgesList.push_back({a,b});
    }

    unordered_map<int,list<int>> adjList;

    adjacenyList(EdgesList, adjList);
    
    
    // to handle disconnected node we are using loop
    unordered_map<int,int> visited;

    for(int i = 0;i < nodes; i++){

        if(!visited[i]){

        bool result = detectCycle(adjList, visited, i);
        
        if(result){
            cout<<"True"<<endl;
            return 0;
        }
      }
    }

    cout<<"False";


}