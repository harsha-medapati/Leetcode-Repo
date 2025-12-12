class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int i,j;
        vector<int>ans;
        for(i=0;i<prices.size();i++)
        {
            bool found = true;
            for(j=i+1;j<prices.size();j++)
            {
                if(prices[j] <= prices[i])
                {
                    ans.push_back(prices[i] - prices[j]);
                    found = false;
                    break;
                }
            }
            if(found)
            {
                ans.push_back(prices[i]);
            }
        }
        return ans;
    }
};