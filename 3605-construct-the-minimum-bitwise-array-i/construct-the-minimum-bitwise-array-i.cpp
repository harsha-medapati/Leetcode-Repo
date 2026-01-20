class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++) {
            int v = 1;
            bool flag = true;
            while(v <= nums[i]) {
                if((v | (v+1)) == nums[i]) {
                    ans.push_back(v);
                    flag = false;
                    break;
                }
                v++;
            }
            if(flag) {
                ans.push_back(-1);
            }
        }
        return ans;
    }
};