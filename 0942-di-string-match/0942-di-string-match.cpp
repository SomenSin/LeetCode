class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n=s.size();
        int l=n,b=0;
        vector<int> v(n+1,0);
        for(int i=0;i<n;i++)
        {
            if(s[i]=='I') {
               v[i] = b++;
            }
            else {
                v[i] = l--;
            }
        }
        if(s[n-1]=='D') {
            v[n] = l;
        }
        else {
            v[n] = b;
        }
        return v;
    }
};