class Solution {
public:
    string pattern(string s)
    {
        unordered_map<char,int> mp;
        string tmp="";
        int c = 0;
        for(auto i:s)
        {
            if(!mp.count(i)) {
                mp[i] = c++;
            }
        }
        for(auto i:s)
        {
            tmp += mp[i];
        }
        return tmp;
    }
    bool isIsomorphic(string s, string t) {
        return (pattern(s)==pattern(t))?true:false;
    }
};