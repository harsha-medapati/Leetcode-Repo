class Solution {
public:
    bool ans=true;
    void dfs(TreeNode* root,int curr) {
        if(root == NULL) return;
        if(root->val != curr) ans = false;
        dfs(root->left,curr);
        dfs(root->right,curr);
    }
    bool isUnivalTree(TreeNode* root) {
        int curr = root->val;
        dfs(root,curr);
        return ans;
    }
};