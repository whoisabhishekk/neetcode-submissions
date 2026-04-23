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
    vector<int> ans1;
    vector<int> ans2;

    void helper(TreeNode* root){
        if(!root) {
            ans1.push_back(NULL);
            return;
        }

        ans1.push_back(root->val);
        helper(root->left);
        helper(root->right);
        return ;
    }
    void helper2(TreeNode* root){
        if(!root) {
            ans2.push_back(NULL);
            return;
        }

        ans2.push_back(root->val);
        helper2(root->left);
        helper2(root->right);

        return;
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        helper(p);
        helper2(q);
        if(ans1 == ans2) return true;
        else return false;
    }
};
