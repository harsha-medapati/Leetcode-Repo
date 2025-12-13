class Solution {
public:
    vector<int> processQueries(vector<int>& q, int m) {
        vector<int>ans,p;
        int i,j;
        for(i=1;i<=m;i++) p.push_back(i);
        for(i=0;i<q.size();i++)
        {
            auto it = find(p.begin(),p.end(),q[i]);
            ans.push_back(it-p.begin());
            p.erase(it);
            p.insert(p.begin(),q[i]);
        }
        return ans;
    }
};