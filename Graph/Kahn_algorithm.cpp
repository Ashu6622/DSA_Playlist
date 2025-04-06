// Topological sorting using BFS
#include<bits/stdc++.h>
using namespace std;

void adjacency(vector<vector<int>> &edges, unordered_map<int, list<int>> &adjList, vector<int> &inDegree){

    for(int i=0;i<edges.size();i++){

        int u = edges[i][0];
        int v = edges[i][1];

        adjList[v].push_back(u);
        inDegree[u]++;
       
    }
}

vector<int> bfs(int n, vector<int>& inDegree, unordered_map<int, list<int>> &adjList){

    queue<int> q;
    vector<int> topo;
    
    for(int i=0;i<n;i++){

        if(inDegree[i] == 0){
            q.push(i);
        }
    }

    while(!q.empty()){

        int top = q.front();
        q.pop();
        topo.push_back(top);

        for(auto it:adjList[top]){

            inDegree[it]--;

            if(inDegree[it] == 0){
                q.push(it);
            }
        }
    }

    return topo;

}

    int main(){
        
        vector<vector<int>> prerequisites = {{1,0},{2,0},{3,1},{3,2}};

        int n = 4;
        vector<int> inDegree(n,0);
        unordered_map<int, list<int>> adjList;

        adjacency(prerequisites, adjList, inDegree);

        vector<int> ans = bfs(n, inDegree, adjList);

        if(ans.size() == n){
            
            for(int i=0;i<n;i++){
                cout<<ans[i]<<" ";
            }
            return 0;
        }

        cout<<0<<endl;

    }