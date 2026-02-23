class Solution {
public:
    bool ans = true;
    void dfs(TreeNode* rs, TreeNode* ls) {
        if(rs == NULL && ls == NULL) return;
        if(!rs || !ls || rs->val != ls->val) {
            ans = false;
            return;
        }
        dfs(rs->left,ls->right);
        dfs(rs->right,ls->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root->left == NULL && root->right == NULL) return ans;
        dfs(root->left,root->right);
        return ans;
    }
};