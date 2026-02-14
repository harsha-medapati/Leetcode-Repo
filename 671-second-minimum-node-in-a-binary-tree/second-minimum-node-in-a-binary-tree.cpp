class Solution {
public:
    void l(TreeNode* root,vector<int>& ans) {
        if(root == NULL) return;
        l(root->left,ans);
        l(root->right,ans);
        ans.push_back(root->val);
    }
    int findSecondMinimumValue(TreeNode* root) {
        if(root == NULL) return 0;
        vector<int>ans;
        l(root,ans);
        sort(ans.begin(),ans.end());
        int mini = *min_element(ans.begin(),ans.end());
        int a = -1;
        for(auto i:ans) {
            if(mini < i) {
                a = i;
                break;
            }
        }
        return a;
    }
};