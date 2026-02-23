class Solution {
public:
    vector<int>ans;
    int dfs(TreeNode* root) {
        if(root == NULL) return 0;
        int ls = dfs(root->left);
        int rs = dfs(root->right);
        int curr = ls+rs+root->val;
        ans.push_back(curr);
        return curr;
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        dfs(root);
        unordered_map<int,int>mp;
        for(auto i:ans) mp[i]++;
        int maxi = 0;
        for(auto i:mp) {
            if(i.second > 1) {
                maxi = max(maxi,i.second);
            }
        }
        if(maxi) ans.clear();
        for(auto i:mp) {
            if(i.second == maxi) ans.push_back(i.first); 
        }
        return ans;
    }
};