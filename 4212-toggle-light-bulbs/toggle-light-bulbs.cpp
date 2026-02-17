class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<int>ans;
        map<int,int>mp;
        for(auto i:bulbs) mp[i]++;
        for(auto i:mp) {
            if(i.second % 2 == 0) continue;
            else ans.push_back(i.first);
        }
        return ans;
    }
};