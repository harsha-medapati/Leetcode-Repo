class Solution {
public:
    string addBinary(string a, string b) {
        if(a.size() < b.size()) while(a.size() < b.size()) a.insert(a.begin(),'0');
        if(b.size() < a.size()) while(b.size() < a.size()) b.insert(b.begin(),'0');
        int c = 0;
        int s=0;
        string ans;
        for(int i=a.size()-1;i>=0;--i)
        {
            s = 0;
            int num1 = a[i]-'0',num2 = b[i]-'0';
            s += num1+num2+c;
            if(s == 0)
            {
                ans.push_back('0');
                c = 0;
            }
            else if(s == 1)
            {
                ans.push_back('1');
                c = 0;
            }
            else if(s == 2)
            {
                ans.push_back('0');
                c = 1;
            }
            else if(s == 3)
            {
                ans.push_back('1');
                c = 1;
            }
        }
        reverse(ans.begin(),ans.end());
        if(c)
        {
            ans.insert(ans.begin(),'1');
        }
        return ans;
    }
};