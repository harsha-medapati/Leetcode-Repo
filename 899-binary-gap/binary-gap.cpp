class Solution {
public:
    int binaryGap(int n) {
        bitset<32> b(n);
        string s = b.to_string();
        int ans = 0,i = 0;
        while(i < s.size()) {
            while(i < s.size() && s[i] != '1') i++;
            int j = i+1;
            while(j < s.size() && s[j] != '1') j++;
            if(j < s.size()) ans = max(ans, j - i);
            i = j;
        }
        return ans;
    }
};