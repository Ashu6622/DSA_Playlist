#include<bits/stdc++.h>
using namespace std;

class Node{

    public:

    int data;
    Node* left;
    Node* right;

    Node(){
        this->data = 0;
        this->left = NULL;
        this->right = NULL;
    }

    Node(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }

};

void printTree(Node* root){

    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    printTree(root->left);
    printTree(root->right);
}



int main(){

    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);

    printTree(root);

}