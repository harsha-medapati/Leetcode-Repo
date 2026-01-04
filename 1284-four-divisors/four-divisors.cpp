class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int s = 0;
        for (int x : nums) {
            int count = 0, sum = 0;
            vector<int> ans;
            for (int i = 1; i * i <= x; i++) {
                if (x % i == 0) {
                    ans.push_back(i);
                    count++;
                    if (i != x / i) {
                        ans.push_back(x / i);
                        count++;
                    }
                }
            }
            if (count == 4) {
                for (int d : ans) {
                    sum += d;
                }
                s += sum;
            }
        }
        return s;
    }
};