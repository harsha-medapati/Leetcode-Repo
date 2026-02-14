class Solution {
public:
    void same(TreeNode* root,vector<int>&temp) {
        if(root == NULL) return;
        if(root->left == NULL && root->right == NULL) temp.push_back(root->val);
        if(root->left != NULL) same(root->left,temp);
        if(root->right != NULL) same(root->right,temp   );
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        if(root1 == NULL && root2 == NULL) return true;
        vector<int>ans1,ans2;
        same(root1,ans1);
        same(root2,ans2);
        if(ans1 == ans2) return 1;
        return 0;
    }
};