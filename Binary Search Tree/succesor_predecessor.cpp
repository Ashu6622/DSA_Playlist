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



class Solution
{
    public:
    void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    {   
        // predesessor
        Node* temp = root;
        
        while(temp != NULL){

        if(temp->data >= key){
                temp = temp->left;
        }
        else{
                pre = temp;
                temp = temp->right;
        }
    }

        temp = root;

    // successor
    while(temp != NULL){

        if(temp->data > key){
            suc = temp;
            temp = temp->left;
        }
        else{
            temp = temp->right;
        }
    }

    }
};