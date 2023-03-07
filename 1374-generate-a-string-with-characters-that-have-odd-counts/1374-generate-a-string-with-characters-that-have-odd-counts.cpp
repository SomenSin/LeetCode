class Solution {
public:
    string generateTheString(int n) {
        string s;
        int x=n;
        while(n--)
        {
            s += 'a';
        }
        if(x%2==0) {
            s[x-1] = 'b';
        }
       return s;
    }
};