class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int x = 0, n = candies.size();
        vector<bool> ans(n,0);
        for(int i=0;i<n;i++) {
            if(x < candies[i]) {
                x = candies[i];
            }
        }

        for(int i=0;i<n;i++) {
            if(candies[i] + extraCandies >= x) {
                ans[i] = true;
            }
        }

        return ans;

    }
};