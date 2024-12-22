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
  
      void solve(Node* root, int &k, int &ans, bool& found){

        if(root == NULL){
            return;
        }

        solve(root->right, k, ans, found);

            if(found){
                return;
            }

        k--;
        if(k == 0){
            ans = root->data;
            found = true;
        }

        solve(root->left, k, ans, found);
    }
  
    int kthLargest(Node *root, int k) {
         int ans = 0;
        bool found = false;
        solve(root, k,ans, found);
        return ans;
    }
};