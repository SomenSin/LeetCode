class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cd) {
        unordered_map<string,int> mp;
        vector<string> ans;
        for(auto c:cd)
        {
            int i=c.find(' ');
            int n = stoi(c.substr(0,i));
            string s = c.substr(i+1);
            mp[s] += n;
            for(int i=0;i<s.length();i++)
            {
                if(s[i]=='.') {
                    mp[s.substr(i+1)] += n;
                }
            }
            
        }
        
        for(auto i:mp)
        {
            ans.push_back( to_string(i.second) + " " + i.first );
        }
        return ans;

    }
};