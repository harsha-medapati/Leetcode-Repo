class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int ans = 0;
        for(int i=left;i<=right;i++) {
            int c = __builtin_popcount(i);
            int p = 0;
            for(int i=1;i<=c;i++) {
                if(c % i == 0) p++;
            }
            if(p == 2) ans++; 
        }
        return ans;
    }
};