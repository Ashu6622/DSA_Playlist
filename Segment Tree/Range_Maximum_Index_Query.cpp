#include<bits/stdc++.h>
using namespace std;

void builtTree(int idx, int l, int r, vector<int>& arr, vector<int>& segTree){

    if(l == r){
        segTree[idx] = l;
        return;
    }

    int mid = (l+r)/2;

    builtTree(2*idx+1, l, mid, arr, segTree);
    builtTree(2*idx+2, mid+1, r, arr, segTree);

    int leftIdx = segTree[2*idx+1];
    int rightIdx = segTree[2*idx+2];

    if(arr[leftIdx] >= arr[rightIdx]){
        segTree[idx] = leftIdx;
    }
    else{
        segTree[idx] = rightIdx;
    }
}

int queryMax(int idx, int l, int r, vector<int>&segTree, vector<int>& arr, pair<int,int> &query){

    if(query.first > r || query.second < l){
        return -1;
    }

    if(query.first <= l && query.second >= r){
        return segTree[idx];
    }

    int mid = (l+r)/2;

    int leftIdx = queryMax(2*idx+1, l, mid, segTree, arr, query);
    int rightIdx = queryMax(2*idx+2, mid+1, r, segTree, arr, query);

    if(leftIdx == -1){
        return rightIdx;
    }

    if(rightIdx == -1){
        return leftIdx;
    }

    if(arr[leftIdx] >= arr[rightIdx]){
            return leftIdx;
    }
    return rightIdx;
} 

int main(){

    vector<int> arr = {3, 1, 4, 7};

    int n = arr.size();

    vector<int> segTree(4*n);

    builtTree(0,0, n-1, arr, segTree);

    for(int i=0;i<4*n;i++){
        cout<<segTree[i]<<" ";
    }
    
    pair<int,int> query = {0, 2};

    int index = queryMax(0,0,n-1,segTree, arr, query);

    cout<<endl;

    cout<<index<<endl;
}