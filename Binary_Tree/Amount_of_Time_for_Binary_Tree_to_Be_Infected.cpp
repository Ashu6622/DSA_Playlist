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


    void solve(Node* root, Node* prev,  map<int, Node*> &mp){

        if(root == NULL){
            return;
        }

        if(prev == NULL){
            mp[root->data] = NULL;
        }
        else{
            mp[root->data] = prev;
        }

        solve(root->left, root, mp);
        solve(root->right, root, mp);
    }

    Node* findNode(Node* root, int start){

        if(root == NULL){
            return NULL;
        }

        if(root->data == start){
            return root;
        }

        Node* leftchild = findNode(root->left, start);
        Node* rightchild = findNode(root->right, start);

        if(leftchild != NULL){
            return leftchild;
        }

        if(rightchild != NULL){
            return rightchild;
        }

        return NULL;
    }
    int amountOfTime(Node* root, int start) {

        Node* target = findNode(root,start);

        map<int, Node*> mp;

        Node* prev = NULL;

        solve( root,  prev, mp);

        queue<Node* > q;
        set<int> st;
        q.push(target);
        st.insert(target->data);

        int time = 0;

        while(!q.empty()){

            int n = q.size();  //size of level
            time++;

            while(n--){
                Node* front = q.front();
                q.pop();

                if(front->left && st.find(front->left->data) == st.end()){
                    q.push(front->left);
                    st.insert(front->left->data);
                }

                if(front->right && st.find(front->right->data) == st.end()){
                    q.push(front->right);
                    st.insert(front->right->data);
                }

                if(mp[front->data] != NULL && st.find(mp[front->data]->data) == st.end()){
                    q.push(mp[front->data]);
                    st.insert(mp[front->data]->data);
                }
            }
        }
        return time-1;
    }
};