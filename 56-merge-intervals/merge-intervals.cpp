class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inv) {
        vector<vector<int>> ans;
        sort(inv.begin(), inv.end(), [](vector<int>& a, vector<int>& b) {
            return a[0] < b[0];
        });

        int i=0,j=1,n=inv.size();
        if(n<=1) {
            return inv;
        }

        ans.push_back(inv[0]);
        for(int i=1;i<n;i++) {
            if(ans.back()[1] >= inv[i][0]) {
                ans.back()[1] = max(ans.back()[1],inv[i][1]);
            }
            else {
                ans.push_back(inv[i]);
            }
        }

        return ans;
    }
};