class Solution {
public:
    long long ans = 0;

    void dfs(TreeNode* root) {
        if(root == NULL) return;
        dfs(root->right);
        ans += root->val;
        root->val = ans;
        dfs(root->left);
    }
    TreeNode* bstToGst(TreeNode* root) {
        dfs(root);
        return root;
    }
};