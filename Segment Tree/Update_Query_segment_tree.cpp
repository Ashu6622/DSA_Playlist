#include<bits/stdc++.h>
using namespace std;

void solve(int idx, int l , int r , vector<int> &arr, vector<int> &segTree){

    if(l == r){
        segTree[idx] = arr[l];
        return;
    }

    int mid = (l+r)/2;

    solve(2*idx+1, l, mid, arr, segTree);
    solve(2*idx+2, mid+1, r, arr, segTree);

    segTree[idx] = segTree[2*idx+1] + segTree[2*idx+2];
    
}

void updatedTree(int idx, int l ,int r, vector<int>& segTree, pair<int,int> &query){

    if(l  == r){
        // cout<<query.first<<endl;
        segTree[idx] = query.first;
        return;
    }

    int mid = (l+r)/2;

    if(query.second <= mid){
        updatedTree(2*idx+1, l, mid, segTree, query);
    }
    else{
        updatedTree(2*idx+2, mid+1, r, segTree, query);
    }

    segTree[idx] = segTree[2*idx+1] + segTree[2*idx+2];
}

int main(){

    vector<int> arr = {3,1,2,7};

    int n = arr.size();

    vector<int> segTree(2*n);
    pair<int,int> query = {9, 0};

    solve(0,0,n-1,arr,segTree);

    for(int i=0;i<2*n-1;i++){
        cout<<segTree[i]<<" ";
    }
    cout<<endl;

    updatedTree(0, 0, n-1, segTree, query);

    for(int i=0;i<2*n-1;i++){
        cout<<segTree[i]<<" ";
    }
    cout<<endl;


}