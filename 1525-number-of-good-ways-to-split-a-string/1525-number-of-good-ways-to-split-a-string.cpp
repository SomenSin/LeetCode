class Solution {
public:
    int numSplits(string s) {
        vector<int> r(26),l(26);
        int ans=0,dl=0,dr=0;
        for(auto i:s)
        {
            dr += ++r[i-'a'] == 1;
        }
        for(auto i:s)
        {
            dl += ++l[i-'a'] == 1;
            dr -= --r[i-'a'] == 0;
            if(dl == dr) {
                ans++;
            }
        }
        return ans;
    }
};