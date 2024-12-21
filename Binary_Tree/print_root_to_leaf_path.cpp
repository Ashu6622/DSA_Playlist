#include <bits/stdc++.h>
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

class Solution
{

    void solve(Node *root, Node *prev, map<int, Node *> &mp)
    {

        if (root == NULL)
        {
            return;
        }

        if (prev == NULL)
        {
            mp[root->data] = NULL;
        }
        else
        {
            mp[root->data] = prev;
        }

        solve(root->left, root, mp);
        solve(root->right, root, mp);
    }

    vector<int> printPath(Node *root, int x)
    {
        map<int, Node *> mp;

        Node *prev = NULL;

        vector<int> output;
        output.push_back(x);

        solve(root, prev, mp);
        Node *node = mp[x];

        while (node != NULL)
        {

            output.push_back(node->data);
            node = mp[node->data];
        }

        reverse(output.begin(), output.end());

        return output;
    }
};