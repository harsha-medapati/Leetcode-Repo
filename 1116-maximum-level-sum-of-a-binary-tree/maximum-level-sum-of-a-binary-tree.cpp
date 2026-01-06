class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        if(root == NULL) return 0;
        queue<TreeNode*>q;
        q.push(root);
        int c=1,ans=1,s=root->val;
        while(!q.empty()) {
            int n = q.size(),cs=0;
            for(int i=0;i<n;i++) {
                TreeNode* curr = q.front();
                q.pop();
                cs += curr->val;
                if(curr->left != NULL) {
                    q.push(curr->left);
                }
                if(curr->right != NULL) {
                    q.push(curr->right); 
                }
            }
            if(cs > s) {
                s = cs;
                ans = c;
            }
            c++;
        }
        return ans;
    }
};