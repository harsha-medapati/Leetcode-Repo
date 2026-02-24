class Solution {
public:
    long long sum = 0;
    string s;
    void dfs(TreeNode* root,string s) {
        if(root == NULL) return;
        s.push_back(root->val + '0');
        if(root->left == NULL && root->right == NULL) {
            sum += stoll(s,nullptr,2);
            return;
        }
        dfs(root->left,s);
        dfs(root->right,s);
    }
    int sumRootToLeaf(TreeNode* root) {
        dfs(root,"");
        return sum;
    }
};