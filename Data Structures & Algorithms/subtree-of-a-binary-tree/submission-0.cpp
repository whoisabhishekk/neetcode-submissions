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
    vector<int> ans;
    vector<int> ans1;

    void helper(TreeNode* root){
        if(!root){
            ans.push_back(INT_MIN);
            return;
        }

        ans.push_back(root->val);
        helper(root->left);
        helper(root->right);
    }
    void helper1(TreeNode* root){
        if(!root){
            ans1.push_back(INT_MIN);
            return;
        }

        ans1.push_back(root->val);
        helper1(root->left);
        helper1(root->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root && !subRoot) return true;
        if(!root || !subRoot) return false;

        helper(root);
        helper1(subRoot);

        int i=0;
        int j=0;

        while(i < ans.size()){
            if(ans[i] == ans1[j]){
                int k=i;
                int l=j;

                while(k < ans.size() && l < ans1.size() && ans[k] == ans1[l]){
                    k++;
                    l++;
                }
                if(l == ans1.size()) return true;
            }
            i++;
        }
        return false;
    }
};