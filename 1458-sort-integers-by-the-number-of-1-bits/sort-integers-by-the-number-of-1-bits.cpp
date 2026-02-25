class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>v;
        for(auto i:arr) {
            int n = __builtin_popcount(i);
            v.push_back({n,i});
        }
        sort(v.begin(),v.end());
        vector<int>ans;
        for(auto i:v) ans.push_back(i.second);
        return ans;
    }
};