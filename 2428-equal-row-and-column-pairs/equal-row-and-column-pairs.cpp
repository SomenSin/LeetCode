class Solution {
public:
    int equalPairs(vector<vector<int>>& g) {
        int n = g.size(),ans=0;
        map<vector<int>,int> mp;
        for(int i=0;i<n;i++) {
            mp[g[i]]++;
        }
        for(int i=0;i<n;i++) {
            vector<int> v(n);
            for(int j=0;j<n;j++) {
                v[j] = g[j][i];
            }
            ans += mp[v];
        }
        return ans;
    }
}; 