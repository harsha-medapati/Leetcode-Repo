class Solution {
public:
    string reverseWords(string s) {
        int i,v = 0;
        string s1 = "aeiou",ans;
        for(i=0;i<s.size();i++)
            {
                if(s[i] == ' ')
                {
                    break;
                }
                if(s1.find(s[i]) != string::npos)
                {
                    v += 1;
                }
            }
        vector<string>words;
        stringstream ss(s);
        string word;
        while(ss >> word)
            {
                words.push_back(word);
            }
        ans += words[0];
        for(i=1;i<words.size();i++)
            {
                string s2 = words[i];
                int j,val1 = 0;
                for(j=0;j<s2.size();j++)
                    {
                        if(s1.find(s2[j]) != string::npos)
                        {
                            val1 += 1;
                        }
                    }
                if(v == val1)
                {
                    reverse(s2.begin(),s2.end());
                }
                ans += " "+s2;
            }
        return ans;
    }
};