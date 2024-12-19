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

void print(Node* root){

    if(root == NULL){
        return ;
    }

    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}

int main(){

    vector<int> nums = {1,2,3,4,5,6,7};
    int size = nums.size();

    Node* root = new Node(nums[0]);


    queue<Node*> q;
    q.push(root);
    int index = 0;

    while(!q.empty()){

        auto front = q.front();
        q.pop();
        
        // left child
        Node *leftnode = NULL;
        if(2*index + 1 < size){
            leftnode = new Node(nums[2*index+1]);
            front->left = leftnode;
        }

        // right child
        Node *rightnode = NULL;
        if(2*index + 2 < size){
            rightnode = new Node(nums[2*index+2]);
            front->right = rightnode;
        }


        if(leftnode){
            q.push(leftnode);
        }
        if(rightnode){
             q.push(rightnode);
        }

        index++;
    }

    print(root);
}