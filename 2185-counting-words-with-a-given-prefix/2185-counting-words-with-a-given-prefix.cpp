class Solution {
public:
    int prefixCount(vector<string>& w, string p) {
        int n=p.size(),c=0;
        for(auto i:w)
        {
            if(i.size()>=n) {
                string tmp = i.substr(0,n);
                if(tmp==p) {
                    c++;
                }
            }
        }
        return c;
    }
};