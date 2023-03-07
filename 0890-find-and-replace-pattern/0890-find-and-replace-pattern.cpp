class Solution {
public:
    string pattern(string s)
    {
        int n=s.length();
        unordered_map<char,int> mp;
        for(auto i:s)
        {
            if(!mp.count(i)) {
                mp[i] = mp.size();
            }
        }
        for(int i=0;i<n;i++)
        {
            s[i] =mp[s[i]];
        }
        return s;
    }
    
    vector<string> findAndReplacePattern(vector<string>& w, string p) {
        vector<string> v;
        int  n=w.size();
        string p1=pattern(p);
        for(auto i:w)
        {
            if(pattern(i)==p1) {
                v.push_back(i);
            }
        }
        return v;
    }
};