class Solution {
public:

    TreeNode* ans = NULL;

    void b(TreeNode* root,int val) {
        if(root == NULL) return;
        if(root->val == val) {
            ans = root;
        }
        if(root->val < val) {
            b(root->right,val);
        }
        else {
            b(root->left,val);
        }

    }

    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == NULL) return root;
        b(root,val);
        return ans;
    }
};