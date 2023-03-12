class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> v(26,INT_MAX);
        vector<string> ans;
        for(auto i:words)
        {
            unordered_map<char,int> mp;
            for(int j=0;j<i.size();j++)
            {
                mp[i[j]]++;
            }
            for(int j=0;j<26;j++)
            {
                v[j] =min(v[j],mp[j+'a']);
            }
        }
        for(int i=0;i<26;i++)
        {
            for(int j=0;j<v[i];j++)
            {
                ans.push_back(string(1,i+'a'));
            }
        }
        return ans;
    }
};