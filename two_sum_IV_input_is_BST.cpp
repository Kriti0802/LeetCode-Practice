/*Given the root of a Binary Search Tree and a target number k, return true if there exist two elements in the BST
 such that their sum is equal to the given target.*/

 #include <bits\stdc++.h>
#include <vector>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};

class Solution {
public:
    void inorder(TreeNode* root,vector<int>&inord)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left,inord);
        inord.push_back(root->val);
        inorder(root->right,inord);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int>inorderval;
        inorder(root,inorderval);
           int i=0;
        int j=inorderval.size()-1;
        while(i<j)
        {
        
        int sum=inorderval[i]+inorderval[j];
        if(sum==k)
        {
            return true;
        }
        else if(sum>k)
        {
            j--;
        }
        else
         i++;
        }  
        return false;
    }
};