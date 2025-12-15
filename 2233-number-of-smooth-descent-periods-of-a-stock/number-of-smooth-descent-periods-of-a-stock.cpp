class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long count = 1,sum = 1;
        int i,j;
        for(i=1;i<prices.size();i++)
        {
            if(prices[i] == (prices[i-1]-1))
            {
                count++;
            }
            else
            {
                count = 1;
            }
            sum += count;
        }
        return sum;
    }
};