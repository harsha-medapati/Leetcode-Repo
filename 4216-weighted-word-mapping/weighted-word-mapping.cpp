class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans;
        int i,j;
        for(i=0;i<words.size();i++) {
            int sum = 0;
            for(j=0;j<words[i].size();j++) {
                sum += weights[words[i][j]-'a'];
            }
            sum = (sum%26);
            ans += 'z'-sum;
        }
        return ans;
    }
};