class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int>num;
        istringstream iss(s);
        string word;
        while(iss >> word)
        {
            bool isnumber = true;
            for(char c:word)
            {
                if(!isdigit(c))
                {
                    isnumber = false;
                    break;
                }
            }
            if(isnumber)
            {
                int val = stoi(word);
                num.push_back(val);
            }
        }
        for(int i=0;i<num.size()-1;i++)
        {
            if(num[i] >= num[i+1])
            {
                return 0;
            }
        }
        return 1;
    }
};