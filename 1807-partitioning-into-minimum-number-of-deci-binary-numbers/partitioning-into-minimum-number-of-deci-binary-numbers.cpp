class Solution {
public:
    int minPartitions(string n) {
        int ans = INT_MIN;
        for(char ch:n) ans = max(ans,ch-'0');
        return ans;
    }
};