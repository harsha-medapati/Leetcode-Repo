class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_set<int>s;
        for(auto i:nums) s.insert(i);
        nums.clear();
        for(auto i:s) nums.push_back(i);
        sort(nums.rbegin(),nums.rend());
        if(nums.size() <= k) return nums;
        int i=0;
        while(k--) {
            ans.push_back(nums[i]);
            i++;
        }
        return ans;
    }
};