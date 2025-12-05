class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int i,j,sum1=0,sum2,c=0;
        for(i=0;i<nums.size()-1;i++)
        {
            sum1 += nums[i];
            sum2=0;
            for(j=i+1;j<nums.size();j++)
            {
                sum2 += nums[j];
            }
            if(abs(sum1-sum2)%2==0) c++;
        }
        return c;
    }
};