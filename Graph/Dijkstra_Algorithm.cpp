//  shortest path between nodes
// undirected graph

#include<bits/stdc++.h>
using namespace std;

void adjacency(vector<vector<int>>& edges, unordered_map<int, list<pair<int,int>>>& adjList){

    for(int i=0;i<edges.size();i++){

        int u = edges[i][0];
        int v = edges[i][1];
        int wt = edges[i][2];

        adjList[u].push_back({v, wt});
    }

}

void BFS(int src, vector<int>& dist, unordered_map<int, list<pair<int,int>>>& adjList, set<pair<int,int>> &st ){

        dist[src] = 0;  //starting node
        st.insert({0,src});

        while(!st.empty()){

            auto node = *(st.begin());
            st.erase(node);

            int weight = node.first;
            int value = node.second;

            for(auto it:adjList[value]){

                if(dist[value] + it.second < dist[it.first]){
                    auto record = st.find({dist[it.first], it.first});  //if this node is already visited

                    if(record != st.end()){
                        st.erase(record);
                    }

                    dist[it.first] = dist[value] + it.second ;
                    st.insert(make_pair(dist[it.first], it.first));
                }
            }
        }
}

int main(){

    vector<vector<int>> edges ={{0,2,8},
{0,1,5},
{1,3,2},
{2,3,6},
{1,2,9}};

    unordered_map<int,list<pair<int,int>>> adjList;

    adjacency(edges, adjList);

    vector<int> dist(4, INT_MAX);
    set<pair<int,int>> S;

    int src = 0;

    BFS(src, dist, adjList, S);

    for(int i=0;i<dist.size();i++){
        cout<<dist[i]<<" ";
    }


}