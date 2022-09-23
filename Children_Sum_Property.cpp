#include <iostream>

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
class Solution{
    public:
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    int isSumProperty(Node *root)
    {
        if(root== NULL)return 1;
        if(!root->left && !root->right)return 1;

        int sum = 0;

        if(root->left)sum+=root->left->data;

        if(root->right)sum+=root->right->data;

        if(sum == root->data)return isSumProperty(root->left) && isSumProperty(root->right);

        return 0;
    }
};