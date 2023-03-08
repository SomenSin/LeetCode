class Solution {
public:
    string toGoatLatin(string s) {
        istringstream ss(s);
        unordered_set<int> se={'a','e','i','o','u'};
        string w="",ans="";
        int count=1;
        while(ss>>w)
        {
            if(se.count(tolower(w[0]))==1) {
                ans += " " + w + "ma";
            }
            else {
                ans += " " + w.substr(1) + w[0] + "ma";
            }
            for(int i=0;i<count;i++)
            {
                ans += 'a';
            }
            count++;
        }
        return ans.substr(1);

    }
};