class Solution {
public:
    string frequencySort(string s) {
        int i;
        vector<pair<int,int>>vp;
        string ans;
        map<char,int>mp;
        for(i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        for(auto &it:mp)
        {
            vp.push_back({it.second,it.first});
        }
        sort(vp.rbegin(),vp.rend());
        for(auto &it:vp)
        {
            while(it.first > 0)
            {
                ans += it.second;
                it.first--;
            }
        }
        return ans;
    }
};