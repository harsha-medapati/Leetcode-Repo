class Solution {
public:
    string sortSentence(string s) {
        string ans;
        vector<string>words;
        istringstream iss(s);
        string word;
        while(iss >> word)
        {
            words.push_back(word);
        }
        vector<pair<int,string>>vp;
        for(int i=0;i<words.size();i++)
        {
            int num = words[i].back()-'0';
            words[i].pop_back();
            vp.push_back({num,words[i]});
        }
        sort(vp.begin(),vp.end());
        for(int i=0;i<vp.size();i++)
        {
            ans += vp[i].second;
            if(i < vp.size()-1) ans += ' ';
        }
        return ans;
    }
};