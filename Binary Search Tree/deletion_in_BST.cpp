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

    Node(int data){
        this->left = NULL;
        this->right = NULL;
        this->data = data;
    }

};




class Solution {
public:

Node* getNode(Node* root, int &x){

    if(root->left == NULL && root->right != NULL){
          x = root->data;
          return root->right;
    }
    if(root->left == NULL && root->right == NULL){
        x = root->data;
        return NULL;
    }


    root->left = getNode(root->left, x);

    return root;
}

Node* solve(Node* root, int key){

    if(root == NULL){
        return NULL;
    }

    if(root->data == key){
        
        if(root->right == NULL){
            return root->left;
        }
        else{
            int x = 0;
            root->right = getNode(root->right, x);
            root->data = x;
            return root;
        }
    }

    if(root->data > key){
        root->left = solve(root->left, key);
    }
    else{
        root->right = solve(root->right, key);
    }


    return root;
}



    Node* deleteNode(Node* root, int key) {
        return solve(root, key);
    }
};