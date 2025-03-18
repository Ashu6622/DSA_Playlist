 #include<bits/stdc++.h>
 using namespace std;

 int find(int x, vector<int> &parent){

    if(x == parent[x]){
        return x;
    }

    return find(parent[x], parent);
 }


 void Union(int x, int y, vector<int>& parent){

    int parent_x = find(x, parent);
    int parent_y = find(y, parent);

    if(parent_x != parent_y){
        parent[y] = parent_x;
    }


 }

 int main(){

    vector<int> parent(7);

    for(int i=0;i<7;i++){
        parent[i] = i;
    }

    vector<vector<int>> query = {{0,1},{2,3},{4,5},{3,6}};

    for(int i=0;i<query.size();i++){
       
        int x = query[i][0];
        int y = query[i][1];

        Union(x, y, parent);
    }

    for(int i=0;i<parent.size();i++){
        cout<<parent[i]<<" ";
    }

 }