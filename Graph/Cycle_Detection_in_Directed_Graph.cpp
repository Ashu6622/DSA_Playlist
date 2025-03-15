#include<bits/stdc++.h>
using namespace std;

void adjacency(vector<vector<int>> &arr, unordered_map<int, list<int>> &adjList){

    for(int i=0;i<arr.size();i++){

        int u = arr[i][0];
        int v = arr[i][1];

        adjList[u].push_back(v);
    }

}

bool isCycle(int node, unordered_map<int, list<int>> &adjList, unordered_map<int,int> &visited, unordered_map<int,int> &dfsCall){

    visited[node] = 1;
    dfsCall[node] = 1;


    for(auto it:adjList[node]){

        if(visited[it] == 0){
            bool flag = isCycle(it, adjList, visited, dfsCall);
            if(flag){
                return true;
            }
        }
        else if(visited[it] == 1 && dfsCall[it] == 1){
            return true;
        }
    }

    dfsCall[node] = 0;
    return false;
}


int main(){

    vector<vector<int>> arr = {{1,2},{2,3},{3,7},{3,8},{8,7},{2,4},{4,5},{5,6}, {6,4}};

    unordered_map<int, list<int>> adjList;

    adjacency(arr, adjList);

    unordered_map<int,int> visited;
    unordered_map<int,int> dfsCall;

    for(int i=1;i<=8;i++){

        if(visited[i] == 0){
            int result = isCycle(i, adjList, visited, dfsCall);
            if(result){
                cout<<"True"<<endl;
                return 0;
            }
        }
    }

    cout<<"False"<<endl;
}