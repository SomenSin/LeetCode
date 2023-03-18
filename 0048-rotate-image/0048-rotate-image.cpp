class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int a[n][n];
        for(int i=0;i<n;i++)
        {
            deque<int> tmp;
            for(int j=0;j<n;j++)
            {
                tmp.push_back(matrix[i][j]);
            }
            int c=n-1-i;
            for(int r=0;r<n;r++)
            {
                a[r][c] = tmp.front();
                tmp.pop_front();
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++) {
                matrix[i][j] = a[i][j];
            }
        }
    }
};