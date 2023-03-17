class Solution {
public:
    int trap(vector<int>& h) {
        int n=h.size();
        int lm[n];
        int rm[n];
       // vector<int> lm(n,0),rm(n,0); //lm = Left Max and rm = Right Max
        int maxl = h[0],maxr = h[n-1];
        for(int i=0;i<n;i++)
        {
            if(maxl < h[i]) {
                maxl = h[i];
            }
            lm[i] = maxl;
        }
        for(int i=n-1;i>=0;i--)
        {
            if(maxr < h[i]) {
                maxr = h[i];
            }
            rm[i] = maxr;
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans += min(lm[i],rm[i]) - h[i];
        }
        return ans;
    }
};