class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*>q;
        int a=0,b=root->val;
        q.push(root);
        while(!q.empty())
        {
            int n = q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode* curr = q.front();
                if(curr->left != NULL)
                {
                    q.push(curr->left);
                    a+=curr->left->val;
                }
                if(curr->right != NULL)
                {
                    q.push(curr->right);
                    a+=curr->right->val;
                }
                q.pop();
            }
            if(!q.empty())
            {
                b = a;
                a = 0;
            }
        }
        return b;
    }
};