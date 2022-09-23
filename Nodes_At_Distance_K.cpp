#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    struct Node *left, *right;
};

class Solution
{
private:

    void Mark_Parent(Node* root,unordered_map<Node*,Node*>& parent)
    {
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            Node* current = q.front();
            q.pop();
            if(current->left){
                parent[current->left]=current;
                q.push(current->left);
            }
            if(current->right){
                parent[current->right]=current;
                q.push(current->right);
                }
        }
    }

    Node* FindTarget(Node* root, int target)
    {
        if(root==NULL)return NULL;
        if(root->data == target)return root;
        Node* node1 = NULL;
        if(root->left)node1 = FindTarget(root->left,target);
        if(node1)return node1;
        Node* node2 = NULL;
        if(root->right)node2 = FindTarget(root->right,target);
        if(node2)return node2;
        return NULL;
    }

public:

    vector <int> KDistanceNodes(Node* root, int target , int k)
    {
        unordered_map<Node*,Node*>parent;
        Mark_Parent(root,parent);

        unordered_map<Node*,bool>visited;
        //find node target.
        Node* Target = FindTarget(root,target);
        visited[Target] = true;
        queue<Node*>q;
        q.push(Target);
        int ts = 0;
        while(!q.empty()){
            int size = q.size();
            if(ts++==k)break;
            for(int i = 0;i<size;i++){
                Node* current = q.front();
                q.pop();
                if(current->left && !visited[current->left]){
                    q.push(current->left);
                    visited[current->left] = true;
                }
                if(current->right && !visited[current->right]){
                    q.push(current->right);
                    visited[current->right] = true;
                }
                if(parent[current] && !visited[parent[current]]){
                    q.push(parent[current]);
                    visited[parent[current]] = true;
                }
            }
        }

        vector<int>ds;

        while(!q.empty()){
            ds.push_back(q.front()->data);
            q.pop();
        }
        sort(ds.begin(),ds.end());
        return ds;
    }
};

