class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        if(nums.size() == 0 || nums.size() == 1) return nums;
        deque<int>d;
        for(auto i:nums) {
            if(i >= 0) {
                d.push_back(i);
            }
        }
        if(d.empty()) return nums;
        while(k--) {
            int val = d.front();
            d.pop_front();
            d.push_back(val);
        }
        int i = 0;
        while(!d.empty() && i < nums.size()) {
            if(nums[i] >= 0) {
                nums[i] = d.front();
                d.pop_front();
            }
            i++;
        }
        return nums;
    }
};