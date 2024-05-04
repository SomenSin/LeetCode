class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int ans = 0,prefixVar=gain[0];
        ans = max(ans,prefixVar); 
        for(int i=1;i<n;i++) {
            prefixVar = prefixVar + gain[i];
            ans = max(ans,prefixVar); 
        }
        
        return ans;
    }
};