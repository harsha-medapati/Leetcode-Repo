class Solution {
public:
    int ans=0;
    long long cs=0;
    void dfs(TreeNode* root,long long cs) {
        if(root == NULL) return;
        cs = (cs*10)+root->val;
        if(root->left == NULL && root->right == NULL) {
            ans += cs;
            cs /= 10;
            return;
        }
        dfs(root->left,cs);
        dfs(root->right,cs);
    }
    int sumNumbers(TreeNode* root) {
        dfs(root,cs);
        return ans;
    }
};