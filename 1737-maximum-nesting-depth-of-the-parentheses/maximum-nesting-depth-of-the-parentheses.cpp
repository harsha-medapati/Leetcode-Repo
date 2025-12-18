class Solution {
public:
    int maxDepth(string s) {
        int i,ans=0,c=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i] == '(')
            {
                c++;
            }
            else if(s[i] == ')')
            {
                ans = max(ans,c);
                c = c - 1;
            }
        }
        return ans;
    }
};