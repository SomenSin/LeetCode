class Solution {
public:
    void dfs(vector<vector<int>>& ic,vector<bool>& vis,int i,int n) {
        vis[i] = true;
        for(int j=0;j<n;j++) {
            if(i!=j && ic[i][j]==1 && !vis[j]) {
                dfs(ic,vis,j,n);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& ic) {
        int n = ic.size();
        int p=0;
        vector<bool> vis(n,0);
        for(int i=0;i<n;i++) {
            if(!vis[i]) {
                p++;
                dfs(ic,vis,i,n);
            }
            
        }
        return p;
    }
};