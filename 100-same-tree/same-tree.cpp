class Solution {
public:
    bool f = true;
    void same(TreeNode* p,TreeNode* q)
    {
        if(p == NULL && q == NULL) return;
        if((p == NULL && q != NULL) || (p != NULL && q == NULL) || (p->val != q->val))
        {
            f = false;
            return;
        }
        same(p->left,q->left);
        same(p->right,q->right);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        same(p,q);
        return f;
    }
};