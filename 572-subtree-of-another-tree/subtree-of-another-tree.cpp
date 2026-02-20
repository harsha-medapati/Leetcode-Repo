class Solution {
public:
    bool ans = false;
    void check(TreeNode* r, TreeNode* sr) {
        if(!ans) return;
        if(r == NULL && sr == NULL) return;
        if(!r || !sr || sr->val != r->val) {
            ans = false;
            return;
        }
        check(r->left,sr->left);
        check(r->right,sr->right);
    }
    void dfs(TreeNode* r, TreeNode* sr) {
        if(r == NULL) return;
        if(r->val == sr->val && !ans) {
            ans = true;
            check(r,sr);
        }
        dfs(r->left,sr);
        dfs(r->right,sr);
    }
    bool isSubtree(TreeNode* r, TreeNode* sr) {
        dfs(r,sr);
        return ans;
    }
};