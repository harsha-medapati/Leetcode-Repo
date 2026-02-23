class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        deque<TreeNode*>q;
        q.push_back(root);
        TreeNode *t1=nullptr, *t2=nullptr;
        while(!q.empty()) {
            int n = q.size();
            for(int i=0;i<n;i++) {
                TreeNode* curr = q.front();
                if(curr->left != NULL) {
                    if(curr->left->val == x) t1 = curr;
                    else if(curr->left->val == y) t2 = curr; 
                    q.push_back(curr->left);
                }
                if(curr->right != NULL) {
                    if(curr->right->val == x) t1 = curr;
                    else if(curr->right->val == y) t2 = curr;
                    q.push_back(curr->right);
                }
                q.pop_front();
            }
            if((t1 && !t2) || (!t1 && t2)) return false;
            else if((t1 && t2) && (t1->val == t2->val)) return false;
        }
        return true;
    }
};