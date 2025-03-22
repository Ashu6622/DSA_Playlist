#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> pp;

void adjacency(vector<vector<int>>& edges, unordered_map<int , list<pair<int,int>>>& adjList){

    for(int i=0;i<edges.size();i++){

        int u = edges[i][0];
        int v = edges[i][1];
        int wt = edges[i][2];

        adjList[u].push_back({v, wt});
        adjList[v].push_back({u, wt});
    }
}

int main(){

    vector<vector<int>> edges = {
        {0, 1, 2},
        {0, 3, 6},
        {1, 2, 3},
        {1, 3, 8},
        {1, 4, 5},
        {2, 4, 7}
    };
    unordered_map<int , list<pair<int,int>>> adjList;

    adjacency(edges, adjList);

    int n = edges.size();

    priority_queue<pp, vector<pp>, greater<pp>> pq; // we are using min priority queue because we want minimum weight edges at every iteration

    pq.push({0,0});

    // maintaining isMST this will tell which of the nodes are included in minimum tree
    vector<int> isMST(n, -1);

    int totalWeight = 0;

    while(!pq.empty()){

        auto top = pq.top();
        pq.pop();
        int nodeWeight = top.first;
        int nodeValue = top.second;

        if(isMST[nodeValue] != -1){
            continue;
        }

        isMST[nodeValue] = 1;

        totalWeight += nodeWeight;

        for(auto it:adjList[nodeValue]){

            if(isMST[it.first] == -1){  
                pq.push({it.second, it.first});
            }
        }
    }

    cout<<totalWeight<<endl;

}