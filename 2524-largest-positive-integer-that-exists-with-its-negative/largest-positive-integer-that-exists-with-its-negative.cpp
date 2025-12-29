class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        while(i<=j && nums[i] <= 0)
        {
            if((nums[i]*-1) == nums[j])
            {
                return nums[j];
            }
            else if((nums[i]*-1) > nums[j])
            {
                i++;
            }
            else if((nums[i]*-1) < nums[j])
            {
                j--;
            }
        }
        return -1;
    }
};