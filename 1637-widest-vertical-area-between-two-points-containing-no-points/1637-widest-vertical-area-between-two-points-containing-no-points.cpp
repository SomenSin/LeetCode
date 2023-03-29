class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int n = points.size(),dif=-1,px=-1,py=-1;
        for(int i=0;i<n-1;i++)
        {
            dif = max(dif,points[i+1][0] - points[i][0]);
        }
        return dif;
    }
};