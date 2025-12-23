class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        if(q.front()->val % 2 == 0) return false;
        int c = 0;
        while(!q.empty())
        {
            int n = q.size();
            vector<int>v;
            c = c + 1;
            for(int i=0;i<n;i++)
            {
                TreeNode* curr = q.front();
                if(curr->left != NULL)
                {
                    q.push(curr->left);
                    int k = curr->left->val;
                    if(c%2 == 0 && k%2 == 0) return false;
                    if(c%2 != 0 && k%2 != 0) return false;
                    v.push_back(k);
                }
                if(curr->right != NULL)
                {
                    q.push(curr->right);
                    int k = curr->right->val;
                    if(c%2 == 0 && k%2 == 0) return false;
                    if(c%2 != 0 && k%2 != 0) return false;
                    v.push_back(k);
                }
                q.pop();
            }
            if(!v.empty()) {
                if(c%2 != 0)
                {
                    for(int j = 0;j < v.size() - 1;j++)
                    {
                        if(v[j] <= v[j+1]) return false;
                    } 
                }
                if(c%2 == 0)
                {
                    for(int j=0;j<v.size()-1;j++)
                    {
                        if(v[j] >= v[j+1]) return false;
                    }
                }
            }
        }
        return true;
    }
};
