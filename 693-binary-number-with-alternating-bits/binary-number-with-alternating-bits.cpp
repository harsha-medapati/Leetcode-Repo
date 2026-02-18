class Solution {
public:
    bool hasAlternatingBits(int n) {
        bitset<32>b(n);
        for(int i=0;i<31;i++) {
            if((b[i] == b[i+1]) && (n >> (i+1)) > 0) {
                return false;
            }
        }
        return true;
    }
};