class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string>ans;
        int i,j,k,l;
        string s1="ASDFGHJKLasdfghjkl",s2="QWERTYUIOPqwertyuiop",s3="ZXCVBNMzxcvbnm";
        for(i=0;i<words.size();i++)
        {
            string s = words[i];
            bool found = true;
            for(j=0;j<s.size();j++)
            {
                if(s1.find(s[j]) != string::npos)
                {
                    found = true;
                }
                else
                {
                    found = false;
                    break;
                }
            }
            if(found) ans.push_back(words[i]);
            for(k=0;k<s.size();k++)
            {
                if(s2.find(s[k]) != string::npos)
                {
                    found = true;
                }
                else
                {
                    found = false;
                    break;
                }
            }
            if(found) ans.push_back(words[i]);
            for(l=0;l<s.size();l++)
            {
                if(s3.find(s[l]) != string::npos)
                {
                    found = true;
                }
                else
                {
                    found = false;
                    break;
                }
            }
            if(found) ans.push_back(words[i]);
        }
        return ans;
    }
};