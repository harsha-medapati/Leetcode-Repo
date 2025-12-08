class Solution {
public:
    vector<int> distributeCandies(int c, int n) {
        vector<int>ans(n,0);
        int p=0,i,j;
        while(c)
        {
            for(i=1;i<=n;i++)
            {
                j = i+(p*n);
                if(c >= j)
                {
                    ans[i-1] += j;
                    c = c-j;
                }
                else
                {
                    ans[i-1] += c;
                    c = 0;
                }
            }
            p++;
        }
        return ans;
    }
};