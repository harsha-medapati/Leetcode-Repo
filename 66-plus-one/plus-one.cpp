class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        reverse(d.begin(), d.end());
        d[0] += 1;
        if (d[0] > 9) {
            int i = 0;
            while (i < d.size() && d[i] > 9) {
                int carry = d[i] / 10;
                d[i] %= 10;
                if (i + 1 < d.size()) {
                    d[i + 1] += carry;
                } else {
                    d.push_back(carry);
                }
                i++;
            }
        }
        reverse(d.begin(), d.end());
        return d;
    }
};