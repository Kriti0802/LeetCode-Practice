/*A binary tree is uni-valued if every node in the tree has the same value.

Given the root of a binary tree, return true if the given tree is uni-valued, or false otherwise.*/



struct TreeNode {
     int val;
      TreeNode *left;
     TreeNode *right;
  };

  class Solution {
public:
    bool solve(TreeNode* root,int data)
    {
        if(root==NULL)
        {
            return true;
        }
        if(root->val!=data)
        {
            return false;
        }
        bool left=solve(root->left,data);
        bool right=solve(root->right,data);
        
        if(left && right)
        {
            return true;
        }
        return false;
    }
    bool isUnivalTree(TreeNode* root) {
        return solve(root,root->val);
    }
};