#include<bits/stdc++.h>
using namespace std;

class Node
{

public:
    Node *left;
    Node *right;
    int data;

    Node()
    {
        this->data = 0;
        this->left = NULL;
        this->right = NULL;
    }

    Node(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};



void solve(Node* root, Node* prev, map<int,Node*>& mp){

        if(root == NULL){
            return;
        }

        if(prev == NULL){
            mp[root->data] = prev;
        }
        else{
            mp[root->data] = prev;
        }

        solve(root->left, root, mp);
        solve(root->right, root, mp);
}

int findKthAncestor(Node* root, int targetNodeVal, int k) {

        map<int,Node*> mp;

        solve(root, NULL, mp);

        Node* temp = mp[targetNodeVal];
        int value = 0;

        while(temp != NULL && k > 0){

                value = temp->data;
                temp = mp[value];

                k--;
        }

        if(k != 0){
            return -1;
        }

        return value;
}
