class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int> prefix(n,0);
        prefix[0] = gain[0];
        for(int i=1;i<n;i++) {
            prefix[i] = prefix[i-1] + gain[i]; 
        }
        int ans = 0;
        for(auto i:prefix) {
            ans = max(ans,i);
        }
        return ans;
    }
};