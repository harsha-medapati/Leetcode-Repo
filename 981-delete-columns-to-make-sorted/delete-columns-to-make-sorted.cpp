class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int i,c=0,n=0;
        while(n < strs[0].size())
        {
            string check = "";
            for(i=0;i<strs.size();i++)
            {
                check += strs[i][n];
            }
            string check2 = check;
            sort(check2.begin(),check2.end());
            if(check2 != check)
            {
                c++;
            }
            n++;
        }
        return c;
    }
};