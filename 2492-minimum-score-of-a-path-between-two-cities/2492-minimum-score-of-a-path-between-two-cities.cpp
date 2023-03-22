class Solution {
public:
    int check(int node,int& ans,vector<vector<pair<int,int>>>& dis,vector<bool>& v)
    {
        v[node] = 1;    //Making Visited true for node
        for(auto& [n,d] : dis[node])  //n for node and d for distance in dis vector
        {
            ans = min(ans,d);   //Updating ans
            if(!v[n]) {
                v[n] = 1;
                ans = min(ans,check(n,ans,dis,v));
            }
        }
        return ans;
    }
    int minScore(int s, vector<vector<int>>& roads) {
        vector<vector<pair<int,int>>> dis(s+1);
        vector<bool> v(s+1,0);
        for(auto i:roads)
        {
            dis[i[0]].push_back({i[1],i[2]});
            dis[i[1]].push_back({i[0],i[2]});
        }
        int ans = INT_MAX;
        check(1,ans,dis,v);
        return ans;

    }
};
