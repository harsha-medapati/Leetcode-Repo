class Solution {
public:
    char nextGreatestLetter(vector<char>& l, char t) {
        sort(l.begin(),l.end());
        int i;
        char ch=l[0];
        for(i=0;i<l.size();i++)
        {
            if(t < l[i])
            {
                ch = l[i];
                break;
            }
        }
        return ch;
    }
};