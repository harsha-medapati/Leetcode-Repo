class Solution {
public:
    int minSubArrayLen(int t, vector<int>& nums) {
        int i,j=0,ans=INT_MAX,sum=0,c=0;
        for(i=0;i<nums.size();i++) {
            sum += nums[i];
            while(sum > t) {
                if(sum >= t) ans = min(ans,i-j+1);
                sum -= nums[j];
                j++;
            }
            if(sum >= t) ans = min(ans,i-j+1);
        }
        if(ans == INT_MAX) return 0;
        return ans;
    }
};