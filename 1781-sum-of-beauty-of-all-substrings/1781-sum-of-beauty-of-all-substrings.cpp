class Solution {
public:
    int beautySum(string s) {
        int ans=0,n=s.size();
        for(int i=0;i<n;i++)
        {
            string tmp = "";
            int h=0,l=0;
            vector<int> mp(26,0);
            for(int j=i;j<n;j++)
            {
                h = max(h,++mp[s[j]-'a']);
                if(l>=mp[s[j]-'a']-1) {
                    l=mp[s[j]-'a'];
                    for(int k=0;k<26;k++)
                    {
                        if(mp[k]!=0 ) {
                            l = min(l,mp[k]);
                        }
                    }
                }
                ans += h-l;
            }
        }
        return ans;
    }
};