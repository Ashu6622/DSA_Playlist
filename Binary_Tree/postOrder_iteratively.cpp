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

class Solution{

    public:
    
    vector<int> solve(Node* root){

        if(root->left == NULL && root->right == NULL){
            return {root->data};
        }

        vector<int> output;

        stack<Node*> st;
        st.push(root);

        while(!st.empty()){

            Node* top = st.top();
            st.pop();

            output.push_back(top->data);

            if(top->left){
                    st.push(top->left);
            }

            if(top->right){
                    st.push(top->right);
            }
        }

        reverse(output.begin(), output.end());

        return output;
    }

};
