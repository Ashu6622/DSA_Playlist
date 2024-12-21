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



class Solution {
public:
    void flatten(Node* root) {

        if(root == NULL){
            return;
        }
        
        Node* temp = NULL;


        stack<Node*> st;
        st.push(root);

        while(!st.empty()){

            Node* front = st.top();
            st.pop();

            if(front->right){
                st.push(front->right);
            }

            if(front->left){
                st.push(front->left);
            }

            if(temp == NULL){
                temp = front;
                temp->left = NULL;
            }
            else{
                temp->right = front;
                temp->left = NULL;
                temp = temp->right;
            }
        }
    }
};