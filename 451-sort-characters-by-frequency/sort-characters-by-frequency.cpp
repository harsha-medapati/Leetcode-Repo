class Solution {
public:
    string frequencySort(string s) {
        string ans;
        unordered_map<char,int>mp;
        for(auto i:s) mp[i]++;
        vector<pair<int,char>>vp;
        for(auto i:mp) vp.push_back({i.second,i.first});
        sort(vp.rbegin(),vp.rend());
        for(int i=0;i<vp.size();i++) {
            for(int j=0;j<vp[i].first;j++) {
                ans.push_back(vp[i].second);
            }
        }
        return ans;
    }
};