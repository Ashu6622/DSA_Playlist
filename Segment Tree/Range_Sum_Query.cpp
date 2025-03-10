#include<bits/stdc++.h>
using namespace std;


void builtTree(int idx, int l, int r, vector<int> &arr, vector<int> &segTree){

    if(l == r){
        segTree[idx] = arr[l];
        return;
    }

    int mid = (l+r)/2;

    builtTree(2*idx+1, l, mid, arr, segTree);  //left part
    builtTree(2*idx+2, mid+1, r, arr, segTree); //right part

    segTree[idx] = segTree[2*idx+1] + segTree[2*idx+2];
    
}

int querySum(int idx, int l, int r, vector<int>& segTree, pair<int,int> &query){

    if(l > query.second || r < query.first){
        return 0;
    }

    if(query.first <= l && query.second >= r){
        return segTree[idx];
    }

    int mid = (l+r)/2;

    int leftPart = querySum(2*idx+1, l, mid, segTree, query);
    int rightPart = querySum(2*idx+2, mid+1, r, segTree, query);

    return leftPart + rightPart;
}

int main(){

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int n = arr.size();

    vector<int> segTree(2*n);

    builtTree(0, 0, n-1, arr, segTree);

    for(int i=0;i<2*n-1;i++){
        cout<<segTree[i]<<" ";
    }
    cout<<endl;

    pair<int,int> query = {3, 3};

    int result = querySum(0, 0, n-1, segTree, query);

    cout<<result<<endl;
}