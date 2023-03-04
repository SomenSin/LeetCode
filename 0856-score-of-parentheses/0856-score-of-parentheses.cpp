class Solution {
public:
    int scoreOfParentheses(string s) {
        int n=s.size();
        int d=0,ans=0;
        char c='(';
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(') {
                d++;
            }
            else {
                d--;
                if(s[i-1]=='(') {
                    ans += pow(2,d);
                }
                
            }
            c=s[i];
        }
        return ans;
    }
};