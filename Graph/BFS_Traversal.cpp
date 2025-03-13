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

void bfs(unordered_map<int,list<int>>& adjList, int val, unordered_map<int,int> &visited, vector<int>& ans){

    queue<int> q;
    q.push(val);

    visited[val] = 1;

    while(!q.empty()){

        int frontVal = q.front();
        q.pop();

        ans.push_back(frontVal);

        for(auto &i : adjList[frontVal]){

            if(visited[i] == 0){
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}

void printBFS(vector<int>& arr){

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
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
    unordered_map<int, int> visited;
    vector<int> ans;

    for(int i=0;i<nodes;i++){

        if(visited[i] == 0){
            bfs(adjList, i, visited, ans);
        }
    }

    printBFS(ans);




}