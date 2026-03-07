class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i,j=0;
        unordered_map<int,int>mp;
        for(i=0;i<nums.size();i++) {
            mp[nums[i]]++;
            while(j < i && mp[nums[i]] > 1) {
                if(mp[nums[j]] > 1) {
                    if(nums[i] == nums[j]) {
                        if(abs(i-j) <= k) return true;
                    }
                }
                mp[nums[j]]--;
                j++;
            }
        }
        return false;
    }
};