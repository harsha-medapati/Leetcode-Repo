class Solution {
public:
    int isWinner(vector<int>& p1, vector<int>& p2) {
        int ans1=0,ans2=0,i;
        for(i=0;i<p1.size();i++)
        {
            if(i == 1 && p1[0] == 10) ans1+=p1[i]*2;
            else if(i >= 2 && (p1[i-1] == 10 || p1[i-2] == 10))
            {
                ans1 += p1[i]*2;
            }
            else
            {
                ans1 += p1[i];
            }
        }
        for(i=0;i<p2.size();i++)
        {
            if(i == 1 && p2[0] == 10) ans2+=p2[i]*2;
            else if(i >= 2 && (p2[i-1] == 10 || p2[i-2] == 10))
            {
                ans2 += p2[i]*2;
            }
            else
            {
                ans2 += p2[i];
            }
        }
        cout<<ans1<<" "<<ans2;
        if(ans1 > ans2) return 1;
        else if(ans2 > ans1) return 2;
        return 0;
    }
};