#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    Node* left;
    Node* right;
    int data;


    int solve(Node* root){

        // level order traversal

        queue<pair<int,Node*>> q;
        q.push({0,root});
        int maxWidth = 0;

        while(!q.empty()){

            int s = q.front().first;
            int e = q.back().first;

            maxWidth = max(maxWidth, e-s+1);  //this will give the width of levels

            int n = q.size(); //this will give the number of nodes at every levels

            while(n--){

                auto front = q.front();
                q.pop();

                int level = front.first;

                if(front.second->left){ 
                        q.push({2*level+1, front.second->left});
                }
                if(front.second->right){
                        q.push({2*level+2, front.second->right});
                }
            }
        }

        return maxWidth;
    }


    int maxWidth(Node* root){

        int result = solve(root);

        cout<<result<<endl;
    }


};