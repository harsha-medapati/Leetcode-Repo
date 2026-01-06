class Solution {
public:

    void add(TreeNode* r1,TreeNode* r2) {
        if(r1 == NULL || r2 == NULL) return;
        r1->val += r2->val;
        if(r1->left == NULL && r2->left != NULL) {
            r1->left = new TreeNode(r2->left->val);
            r2->left->val = 0;
        }
        if(r1->right == NULL && r2->right != NULL) {
            r1->right = new TreeNode(r2->right->val);
            r2->right->val = 0;
        }
        add(r1->left,r2->left);
        add(r1->right,r2->right);
    }

    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1 == NULL && root2 != NULL) return root2;
        if(root1 != NULL && root2 == NULL) return root1;
        add(root1,root2);
        return root1;
    }
};