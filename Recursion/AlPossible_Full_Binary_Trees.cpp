#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int val;
    Node* left;
    Node* right;


    Node(int val){
        this->val = val;
        this->right = NULL;
        this->left = NULL;
    }

};

vector<Node*> solve(int n){

    if(n%2 == 0){
        return {};
    }

    if(n == 1){
        Node* node = new Node(0);
        return {node};
    }
    
    vector<Node*> result;

    for(int i = 1 ; i < n ; i+=2){

        vector<Node*> leftpart = solve(i);
        vector<Node*> rightpart = solve(n-i-1);

        for(auto &l:leftpart){

            for(auto &r: rightpart){

                Node* temp = new Node(0);

                temp->left = l;
                temp->right = r;

                result.push_back(temp);
            }
        }
    }

    return result;
}

int main(){

        int n = 7;

        vector<Node*> result = solve(n);
}