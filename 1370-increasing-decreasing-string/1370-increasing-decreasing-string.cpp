class Solution {
public:
    string sortString(string s) {
        int n=s.size();
        string ans="";
        vector<int> v(26,0);
        for(auto c:s)   //O(n)
        {
            v[c-'a']++;     //frequency array
        }
        
        while(ans.size()<n)
        {
            for(int i=0;i<26;i++)
            {
                if(v[i]-- > 0)
                {
                    char ch= 'a'+i;
                    ans += ch;
                }
            }
            for(int i=25;i>=0;i--)
            {
                if(v[i]-- >0)
                {
                    char ch = 'a'+i;
                    ans += ch;
                }
            }
        }
        return ans;
    }
};