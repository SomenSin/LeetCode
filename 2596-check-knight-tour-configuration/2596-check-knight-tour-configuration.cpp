class Solution {
public:
    bool checkValidGrid(vector<vector<int>>& g) {
        int n = g.size();
        vector<pair<int,int>> v(n*n);
        if(g[0][0] != 0) {
            return 0;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                v[g[i][j]] = {i,j};
            }
        }
        for(int i=1;i<n*n;i++)
        {
            int x = abs(v[i].first - v[i-1].first);
            int y = abs(v[i].second - v[i-1].second);
            if( max(x,y) != 2 || min(x,y) != 1 ) {
                return 0;
            }
        }
        return 1;
    }
};