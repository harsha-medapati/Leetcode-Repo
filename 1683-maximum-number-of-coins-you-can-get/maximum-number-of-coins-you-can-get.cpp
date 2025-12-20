class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int i,n = piles.size()/3;
        int ans=0;
        for(i=n;i<piles.size();i=i+2)
        {
            ans += piles[i];
        }
        return ans;
    }
};