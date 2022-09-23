#include <iostream>
#include <vector>
#include <stack>

using namespace std;

struct Node
 {
     int data;
     Node* left, *right;
}; 

void f(Node* root, long long& sum, vector<int>ds)
{
    ds.push_back(root->data);
    if(root->left)f(root->left,sum,ds);
    if(root->right)f(root->right,sum,ds);
    if(!root->left && !root->right){
        int x = 1;
        for(int i=ds.size()-1;i>=0;i--){
            sum += (ds[i]*x);
            x*=10;
        }
    }
}

long long treePathsSum(Node *root)
{
    long long sum = 0;
    vector<int>ds;
    f(root,sum,ds);
    return sum;
}


