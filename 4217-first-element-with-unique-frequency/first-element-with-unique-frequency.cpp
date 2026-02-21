class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int>mp1,mp2;
        for(auto i:nums) mp1[i]++;
        for(auto i:mp1) mp2[i.second]++;
        vector<int>fr;
        for(auto i:mp2) {
            if(i.second == 1) fr.push_back(i.first);
        }
        for(auto i:nums) {
            if(find(fr.begin(),fr.end(),mp1[i]) != fr.end()) return i;
        }
        return -1;
    }
};