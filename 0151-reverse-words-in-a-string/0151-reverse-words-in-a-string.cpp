class Solution {
public:
    string reverseWords(string s) {
        string ans="",w="";
        istringstream ss(s);
        while(ss>>w)
        {
            w += " ";
            ans.insert(0,w);
        }
        ans.pop_back();
        return ans;

    }
};