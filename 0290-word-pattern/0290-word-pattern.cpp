class Solution {
public:
    bool wordPattern(string pat, string s) {
        unordered_map<char,int> mp1;
        unordered_map<string,int> mp2;
        istringstream ss(s);
        int i=0,n=pat.size();
        
        for(string w="";ss>>w;++i)
        {
            if(i==n || mp1[pat[i]] != mp2[w]) {
                return false;
            }
            mp1[pat[i]] = mp2[w] = i+1;
        }
        return i==n;

    }
};