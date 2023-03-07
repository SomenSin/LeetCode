class Solution {
public:
    int myAtoi(string s) {
        int ind=0,n=s.size();
        if(n==0) {
            return 0;
        }
        while(ind<n && s[ind]==' ') 
        {
            ind++;
        }
        if(ind==n)
        {
            return 0;
        }
        char ch=s[ind];
        bool isneg= (ch=='-');
        if(isneg || ch=='+') {
            ind++;
        }
        int ans=0;
        ch=s[ind];
        int limit=INT_MAX/10;
        while(ind<n && isdigit(ch) )
        {
            int x = ch-'0';
            if(ans>limit ||(ans==limit && x>7))
            {
                return (isneg)?INT_MIN:INT_MAX;
            }
            ind++;
            ch=s[ind];
            ans = (ans*10) + x;
            cout<<ans<<" ";
        }
        return (isneg)?-ans:ans;
    }
};

