class Solution {
public:
    int ans = 0;

    void dfs(TreeNode* root) {
        if(root == NULL) return;
        if(root->val%2 == 0) {
            if(root->left != NULL && root->left->left != NULL) {
                ans += root->left->left->val;
            }
            if(root->right != NULL && root->right->right != NULL) {
                ans += root->right->right->val;
            }
            if(root->left != NULL && root->left->right != NULL) {
                ans += root->left->right->val;
            }
            if(root->right != NULL && root->right->left != NULL) {
                ans += root->right->left->val;
            }
        }
            dfs(root->left);
            dfs(root->right);
    }

    int sumEvenGrandparent(TreeNode* root) {
        dfs(root);
        return ans;
    }
};