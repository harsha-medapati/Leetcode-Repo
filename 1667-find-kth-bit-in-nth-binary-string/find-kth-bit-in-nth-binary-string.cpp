class Solution {
public:
    char findKthBit(int n, int k) {
        string s,r,temp;
        temp.push_back('0');
        int i = 2;
        while(i <= n) {
            r = temp;
            for(char &c:r) {
                c ^= 1;
            }
            reverse(r.begin(),r.end());
            s = temp+'1'+r;
            temp = s;
            i++;
        }
        return temp[k-1];
    }
};