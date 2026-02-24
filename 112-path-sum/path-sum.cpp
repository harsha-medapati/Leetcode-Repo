class Solution {
public:
    bool ans = false;
    int sum = 0;
    void dfs(TreeNode* root, int t,int sum) {
        if(root == NULL) return;
        sum += root->val;
        dfs(root->left,t,sum);
        dfs(root->right,t,sum);
        if(root->left == NULL && root->right == NULL) {
            if(sum == t) {
                ans = true;
                return;
            }
        }
        sum -= root->val;
    }
    bool hasPathSum(TreeNode* root, int t) {
        dfs(root,t,sum);
        return ans;
    }
};