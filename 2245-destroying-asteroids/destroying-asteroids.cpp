class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& a) {
        sort(a.begin(),a.end());
        long long ans = mass;
        for(int i=0;i<a.size();i++) {
            if(ans < a[i]) return false;
            else {
                ans += a[i];
            }
        }
        return true;
    }
};