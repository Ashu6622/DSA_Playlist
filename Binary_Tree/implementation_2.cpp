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

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){

            Node* front = q.front();
            q.pop();

            int val = 0;
            cout<<"Enter the left child of "<<front->data<<endl;
            cin>>val;

            if(val != -1){
                    Node* newNode = new Node(val);
                    front->left = newNode;
                    q.push(newNode);
            }

            cout<<"Enter the right child of "<<front->data<<endl;
            cin>>val;

            if(val != -1){

                    Node* newNode = new Node(val);
                    front->right = newNode;
                    q.push(newNode);
            }
    }

    printTree(root);


}