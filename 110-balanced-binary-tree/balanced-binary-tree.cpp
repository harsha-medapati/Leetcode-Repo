class Solution {
public:

    bool flag = true;

    struct info {
        int h=0;
    };

    struct info height(TreeNode* root) {
        if(root == NULL) return {0};
        struct info lh = height(root->left);
        struct info rh = height(root->right);
        struct info curr;
        curr.h = max(lh.h,rh.h)+1;
        if(abs(lh.h-rh.h) > 1) flag = false;
        return curr;
    }

    bool isBalanced(TreeNode* root) {
        if(root == NULL) return true;
        struct info ans;
        ans = height(root);
        if(flag) return true;
        return false;
    }
};