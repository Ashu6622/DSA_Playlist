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

    vector<int> inorder(Node* root){

        if(root->left == NULL && root->right == NULL){
            return {root->data};
        }

            vector<int> output;
            stack<Node*> st1;
            stack<int> st2;

            st1.push(root);
            st2.push(0);

            while(!st1.empty()){


                    auto top = st1.top();
                    st1.pop();
                    // cout<<top->data<<" ";

                    int visit = st2.top();
                    st2.pop();

                    if(visit == 0){

                            if(top->right){
                                st2.push(0);
                                st1.push(top->right);
                            }

                            st2.push(1);
                            st1.push(top);

                            if(top->left){
                                st2.push(0);
                                st1.push(top->left);
                            }
                    }
                    else{
                        output.push_back(top->data);
                    }


            }

            return output;
    }
    

};