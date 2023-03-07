class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int> v(26,0);
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            v[s[i]-'a']++;
        }
        int same=v[s[0]-'a'];
        for(int i=0;i<n;i++)
        {
            if(v[s[i]-'a']!=same)
            {
                return false;
            }
        }
        return true;
    }
};