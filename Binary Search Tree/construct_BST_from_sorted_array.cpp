#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    Node* left;
    Node* right;
    int data;

    Node(){
        this->data = NULL;
        this->right = NULL;
        this->data = 0;
    }

    Node(int val){
        this->left = NULL;
        this->right = NULL;
        this->data = val;
    }

};


Node* solve(int start, int end, vector<int> &arr, int n){

    if(start > end){
        return NULL;
    }

    int mid = (start+end)/2;

    Node *root = new Node(arr[mid]);

    root->left = solve(start, mid-1, arr, n);
    root->right = solve(mid+1, end, arr, n);

    return root;
}

Node* sortedArrToBST(vector<int> &arr, int n)
{
    if(n == 1){
        return new Node(arr[0]);
    }

    solve(0, n-1, arr,n);
}