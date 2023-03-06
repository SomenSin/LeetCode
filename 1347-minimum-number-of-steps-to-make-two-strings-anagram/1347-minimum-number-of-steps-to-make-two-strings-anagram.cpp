class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map <char,int> mp1, mp2;
        int minstep=0;
        for(auto i:s)
        {
            mp1[i]++;
        }
        for(auto i:t)
        {
            mp2[i]++;
        }
        for(int i=0;i<26;i++)
        {
            if(mp1['a'+i]>mp2['a'+i]) {
                minstep += mp1['a'+i]-mp2['a'+i];
            }
        }
        return minstep;
    }
};