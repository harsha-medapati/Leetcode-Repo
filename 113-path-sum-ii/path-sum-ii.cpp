class Solution {
public:
    vector<vector<int>>ans;
    vector<int>temp;
    int sum = 0;
    void dfs(TreeNode* root,int t,int sum) {
        if(root == NULL) return;
        sum += root->val;
        temp.push_back(root->val);
        if(root->left == NULL && root->right == NULL) {
            if(sum == t) {
                ans.push_back(temp);
                temp.pop_back();
                return;
            }
        }
        dfs(root->left,t,sum);
        dfs(root->right,t,sum);
        sum -= root->val;
        temp.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int t) {
        dfs(root,t,sum);
        return ans;
    }
};