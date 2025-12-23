/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    struct info{
        int h;
        int d;
    };

    info diameter(TreeNode* root){
        if(root == NULL) return {0,0};
        info left = diameter(root->left);
        info right = diameter(root->right);
        info curr;
        curr.h = max(left.h,right.h)+1;
        curr.d = max(left.h + right.h, max(left.d, right.d));
        return curr;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        info ans = diameter(root);
        return ans.d;
    }
};