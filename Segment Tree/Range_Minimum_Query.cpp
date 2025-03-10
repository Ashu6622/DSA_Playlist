#include<bits/stdc++.h>
using namespace std;

void builtMinTree(int idx, int l, int r, vector<int>& arr, vector<int>& segTree){

    if(l == r){
        segTree[idx] = arr[l];
        return;
    }

    int mid = (l+r)/2;

    builtMinTree(2*idx+1, l, mid, arr, segTree);
    builtMinTree(2*idx+2, mid+1, r, arr, segTree);

    segTree[idx] = min(segTree[2*idx+1] , segTree[2*idx+2]);
}

int main(){

    vector<int> arr = {3, 1, 2, 7};
    int n = arr.size();

    vector<int> segTree(2*n);

    builtMinTree(0,0,n-1,arr,segTree);

    for(int i=0;i<2*n-1;i++){
        cout<<segTree[i]<<" ";
    }
}