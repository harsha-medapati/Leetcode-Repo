class Solution {
public:
    TreeNode* reverseOddLevels(TreeNode* root) {
        deque<TreeNode*>q;
        q.push_back(root);
        int c = 0;
        while(!q.empty())
        {
            c = c+1;
            int n = q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode* curr = q.front();
                q.pop_front();
                if(curr->left != NULL) q.push_back(curr->left);
                if(curr->right != NULL) q.push_back(curr->right);
            }
            if(c % 2 != 0)
            {
                deque<TreeNode*>v(q);
                while(!v.empty())
                {
                    TreeNode* temp1 = v.front();
                    TreeNode* temp2 = v.back();
                    v.pop_front();
                    v.pop_back();
                    int temp = temp1->val;
                    temp1->val = temp2->val;
                    temp2->val = temp;
                }
            }
        }
        return root;
    }
};