class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int> v(2051,0);
        int n=logs.size();
        for(int i=0;i<n;i++)
        {
            v[logs[i][0]] += 1;
            v[logs[i][1]] -= 1;
        }
        int ans,mx=INT_MIN,tmp=0;
        for(int i=1950;i<2051;i++)
        {
            tmp += v[i];
            if(mx<tmp) {
                mx = tmp;
                ans = i;
            }
        }
        return ans;
    }
};