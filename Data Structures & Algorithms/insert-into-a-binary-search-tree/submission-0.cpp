/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* helper(TreeNode* root , int val){
        if(!root)
        {
            return new TreeNode(val);
        }
        if(val > root->val) 
        {
           root->right = helper(root->right,val);
            
        }
        else {
            root->left = helper(root->left , val);
        }
        return root;
         
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
         if(!root) {
            root->val = val;
            return root;
         }
        return helper(root , val);      

    }
};