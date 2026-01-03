class Solution {
public:
    TreeNode* ans = nullptr;
    void dfs(TreeNode* o,TreeNode* c,TreeNode* t) {
        if(o == NULL || c == NULL) return;
        if(o == t) {
            ans = c;
        }
        dfs(o->left,c->left,t);
        dfs(o->right,c->right,t);
    }
    TreeNode* getTargetCopy(TreeNode* o, TreeNode* c, TreeNode* t) {
        dfs(o,c,t);
        return ans;
    }
};