/*You are given the root of a binary tree that consists of exactly 3 nodes: the root, its left child, and its right child.

Return true if the value of the root is equal to the sum of the values of its two children, or false otherwise.

 */
#include<bits\stdc++.h>
#include<vector>
using namespace std;

struct TreeNode {
     int val;
      TreeNode *left;
     TreeNode *right;
  };

  class Solution {
public:
    bool checkTree(TreeNode* root) {
        
        if(root==NULL)
        {
            return true;
        }
        
        int data=root->val;
        int left=root->left->val;
        int right=root->right->val;
        int sum=0;
        sum=left+right;
        if(data!=sum)
        {
            return false;
        }
        return true;
    }
};