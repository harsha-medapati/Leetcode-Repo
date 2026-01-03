class Solution {
public:
    bool checkTree(TreeNode* root) {
        if(root == NULL) return false;
        if(root->right->val + root->left->val == root->val) {
            return true;
        }
        return false;
    }
};