class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(auto i:nums) mp[i]++;
        vector<pair<int,int>>vp;
        for(auto i:mp) vp.push_back({i.second,i.first});
        sort(vp.rbegin(),vp.rend());
        for(int i=0;i<k;i++) {
            ans.push_back(vp[i].second);
        }
        return ans;
    }
};