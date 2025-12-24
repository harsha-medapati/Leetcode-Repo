class Solution {
public:
    unordered_map<int,int>mp;
    void fre(TreeNode* root)
    {
        if(root == NULL) return;
        fre(root->left);
        mp[root->val]++;
        fre(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        fre(root);
        int maxi = 0;
        vector<int>ans;
        for(auto i:mp)
        {
            if(i.second > maxi) maxi = i.second;
        }
        for(auto i:mp)
        {
            if(i.second == maxi) ans.push_back(i.first);
        }
        return ans;
    }
};