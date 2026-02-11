class Solution {
public:

    int ans = 0;

    int sum(TreeNode* root,bool flag) {
        if(root == NULL) return 0;
        if((root->left == NULL && root->right == NULL) && flag) ans += root->val;
        if(root->left != NULL) {
            sum(root->left,true);
        }
        if(root->right != NULL) {
            sum(root->right,false);
        }
        return ans; 
    }

    int sumOfLeftLeaves(TreeNode* root) {
        if(root == NULL) return 0;
        bool flag = false;
        int a = sum(root,flag);
        return ans;
    }
};