class Solution {
public:
    string convert(string s, int n) {
        vector<string> ans(n);
        string res;
        int row=0,x=s.size();
        bool f=1;
        if(n==1) {
            return s;
        }
        
        for(int i=0;i<x;i++)
        {
            ans[row].push_back(s[i]);
            if(row == n-1) {
                f=0;
            }
            else if(row == 0) {
                f=1;
            }
            if(f) {
                row++;
            }
            else {
                row--;
            }
        }
        for(int i=0;i<n;i++)
        {
            res += ans[i];
        }
        return res;
    }
};