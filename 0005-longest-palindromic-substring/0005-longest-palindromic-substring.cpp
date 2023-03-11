class Solution {
public:
    string longestPalindrome(string a) {
        int s,e,n=a.length();
        int max=0,ind=0;
        string ans="";
        for(int i=1;i<n;i++)
        {
            s = i-1;
            e = i+1;
            while(s>=0 && e<n && a[s]==a[e])
            {
                if(e-s+1 > max) {
                    max = e-s+1;
                    ind = s;
                }
                s--;
                e++;
            }
            s = i-1;
            e = i;
            while(s>=0 && e<n && a[s]==a[e])
            {
                if(e-s+1 > max) {
                    max = e-s+1;
                    ind = s;
                }
                s--;
                e++;
            }
        }
        cout<<max<<" ";
        if(max==0) {
            ans = a[0];
            return ans;
        }
        
        return a.substr(ind,max);
    }
};