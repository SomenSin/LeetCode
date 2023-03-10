class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0];
        for(auto t:strs)
        {
            int i;
            for(i=0;i<t.length();i++)
            {
                if(ans[i] != t[i]) {
                    break;
                }
            }
            ans = ans.substr(0,i);
        }
        return ans;
    }
};