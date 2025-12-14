class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int maxi=0,mini=0,i = 0,j=nums.size()-1;
        while(k)
            {
                mini += nums[i];
                maxi += nums[j];
                i++;
                j--;
                k--;
            }
        return abs(maxi-mini);
    }
};