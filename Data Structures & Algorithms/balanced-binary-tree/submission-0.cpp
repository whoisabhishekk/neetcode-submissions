class Solution {
public:

    int height(TreeNode* root){
        if(!root) return 0;

        int left = height(root->left);
        int right = height(root->right);

        return max(left,right)+1;
    }

    bool helper(TreeNode* root){
        if(!root) return true;
        
        bool flag = false;
        int left = height(root->left);
        int right = height(root->right);

        if(abs(left-right) <= 1)
        {
            flag = helper(root->left) && helper(root->right);
        }

        return flag;
    }
    bool isBalanced(TreeNode* root) {
        if(!root) return true;

        return helper(root);
    }
};