#include <iostream>
#include <vector>

using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

class Solution
{
    public:
    bool hasPathSum(Node *root, int S) {
        if(root==NULL)return 0;

        S-=root->data;

        if(S==0 && !root->left && !root->right)return 1;

        return hasPathSum(root->left,S) || hasPathSum(root->right,S);
    }
};