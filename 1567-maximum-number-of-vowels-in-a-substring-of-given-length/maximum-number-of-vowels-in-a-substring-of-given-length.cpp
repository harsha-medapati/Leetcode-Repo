class Solution {
public:
    int maxVowels(string s, int k) {
        int ans=INT_MIN,c=0;
        string s1 = "aeiou",s2;
        for(int i=0;i<k;i++) {
            if(s1.find(s[i]) != string::npos) c++;
        }
        ans = max(ans,c);
        for(int i=k;i<s.size();i++){
            if(s1.find(s[i]) != string::npos) c++;
            if(s1.find(s[i-k]) != string::npos) c--;
            ans = max(ans,c);
        }
        return ans;
    }
};