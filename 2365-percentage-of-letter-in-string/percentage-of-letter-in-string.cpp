class Solution {
public:
    int percentageLetter(string s, char letter) {
        int c = 0;
        for(auto i:s) if(i == letter) c++;
        return (c*100)/s.size();
    }
};