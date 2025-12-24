class Solution {
public:
    int minimumBoxes(vector<int>& a, vector<int>& c) {
        int ans = 0;
        sort(c.begin(),c.end());
        int s = 0;
        for(auto i:a) s+=i;
        for(int j=c.size()-1;j>=0;j--)
        {
            if(s <= 0) break;
            else{
                s -= c[j];
                ans++;
            }
        }
        return ans;
    }
};