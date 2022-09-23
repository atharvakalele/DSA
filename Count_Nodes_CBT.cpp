#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

struct TreeNode {
int val;
   TreeNode *left;
TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

 class Solution {
public:
    int countNodes(TreeNode* root) {
        if(root==NULL)return 0;

        int leftht = left(root->left);
        int rightht = right(root->right);

        if(leftht==rightht)return pow(2,leftht)-1;
        return 1+countNodes(root->left) + countNodes(root->right);
    }
private :
    int left(TreeNode* node){
        int x=1;
        while(node){
            x+=1;
            node=node->left;
        }
        return x;        
    }

    int right(TreeNode* node){
        int x=1;
        while(node){
            x+=1;
            node=node->right;
        }
        return x;
    }
};