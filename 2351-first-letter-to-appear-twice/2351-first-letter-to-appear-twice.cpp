class Solution {
public:
    char repeatedCharacter(string s) {
        vector<int> v(26,0);
        for(int i=0;i<s.size();i++)
        {
           if(++v[s[i]-'a'] == 2) {
               return s[i];
           }
        }
        return 'Not gonna reach';
    }
};