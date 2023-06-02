class Solution {
public:
    int maxScore(vector<int>& cp, int k) {
        
        int n=cp.size(),i=0,j=n-k-1,ans=INT_MIN;
        vector<int> ps(n+1,0);
        ps[0] = cp[0];
        for(int x=1;x<n;x++) {
            ps[x] = cp[x]+ps[x-1]  ;
        }
        if(k==n) {
            return ps[n-1];
        }
        int t=ps[n-1],sas = ps[j];
        while(j<n) {
            ans = max(ans,t-sas);
            j++,i++;
            sas = ps[j] - ps[i-1];
        }
        return ans;
    }
};