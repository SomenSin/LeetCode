class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int> mp1,mp2;
        for(char c:s) {
            mp1[c]++;
        }
        for(char c:t)
        {
            mp2[c]++;
        }
        int ans=0;
        for(int i=0;i<26;i++)
        {
            int d = abs(mp1[i+'a'] - mp2[i+'a']);
            if(d!=0) {
                ans += d;
            }
        }
        return ans;
    }
};