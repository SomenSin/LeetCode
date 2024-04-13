class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n =nums.size();
        vector<int> small(n,INT_MAX),big(n,INT_MIN);

        for(int i=1;i<n;i++) {
            small[i] = min(small[i-1],nums[i-1]) ;
            big[n-1-i] = max(big[n-i],nums[n-i]);
        }

        for(int i=1;i<n-1;i++) {
            if( small[i] < nums[i] && big[i] > nums[i] ) {
                return true;
            }
        }
        return false;
    }
};