class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {
        unordered_map<string,int>mp;
        int ans = 0;
        for(auto i:words) {
            if(i.size() < k) continue;
            string prefix = i.substr(0,k);
            mp[prefix]++;
        }
        for(auto i:mp) {
            if(i.second >= 2) ans++;
        }
        return ans;
    }
};